/*
 * Copyright 2016, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#include <stdlib.h>
#include <vka/vka.h>
#include <simple/simple.h>
#include <sel4platsupport/timer.h>
#include <sel4platsupport/plat/timer.h>
#include <utils/util.h>
#include "../../timer_common.h"

seL4_timer_t *
sel4platsupport_get_timer(enum timer_id id, vka_t *vka, vspace_t *vspace,
                          simple_t *simple, seL4_CPtr aep)
{
    if (id != DMTIMER0) {
        LOG_ERROR("Bad timer ID %d\n", id);
        return NULL;
    }

    seL4_timer_t *timer = timer_common_init(vspace, simple, vka, aep,
                                          dm_timer_irqs[id], (void*)dm_timer_paddrs[id]);
    if (timer == NULL) {
        return NULL;
    }

    timer_config_t config = {
        .vaddr = timer->vaddr,
        .irq = dm_timer_irqs[id],
    };
    timer->timer = ps_get_timer(id, &config);
    if (timer->timer == NULL) {
        timer_common_destroy(timer, vka, vspace);
        return NULL;
    }

    /* success */
    return timer;
}

seL4_timer_t *
sel4platsupport_get_default_timer(vka_t *vka, vspace_t *vspace, simple_t *simple,
                                  seL4_CPtr aep)
{
    return sel4platsupport_get_timer(TMR_DEFAULT, vka, vspace, simple, aep);
}

