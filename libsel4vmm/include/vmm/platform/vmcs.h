/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(NICTA_GPL)
 */

#ifndef _LIB_VMM_VMCS_PLATFORM_H_
#define _LIB_VMM_VMCS_PLATFORM_H_

/*control fields in vmcs*/
#define VMX_GUEST_ES_SELECTOR 0x00000800
#define VMX_GUEST_CS_SELECTOR 0x00000802
#define VMX_GUEST_SS_SELECTOR 0x00000804
#define VMX_GUEST_DS_SELECTOR 0x00000806
#define VMX_GUEST_FS_SELECTOR 0x00000808
#define VMX_GUEST_GS_SELECTOR 0x0000080A
#define VMX_GUEST_LDTR_SELECTOR 0x0000080C
#define VMX_GUEST_TR_SELECTOR 0x0000080E
#define VMX_GUEST_DEBUGCTRL 0x00002802
#define VMX_GUEST_PAT 0x00002804
#define VMX_GUEST_EFER 0x00002806
#define VMX_GUEST_PERF_GLOBAL_CTRL 0x00002808
#define VMX_GUEST_ES_LIMIT 0x00004800
#define VMX_GUEST_CS_LIMIT 0x00004802
#define VMX_GUEST_SS_LIMIT 0x00004804
#define VMX_GUEST_DS_LIMIT 0x00004806
#define VMX_GUEST_FS_LIMIT 0x00004808
#define VMX_GUEST_GS_LIMIT 0x0000480A
#define VMX_GUEST_LDTR_LIMIT 0x0000480C
#define VMX_GUEST_TR_LIMIT 0x0000480E
#define VMX_GUEST_GDTR_LIMIT 0x00004810
#define VMX_GUEST_IDTR_LIMIT 0x00004812
#define VMX_GUEST_ES_ACCESS_RIGHTS 0x00004814
#define VMX_GUEST_CS_ACCESS_RIGHTS 0x00004816
#define VMX_GUEST_SS_ACCESS_RIGHTS 0x00004818
#define VMX_GUEST_DS_ACCESS_RIGHTS 0x0000481A
#define VMX_GUEST_FS_ACCESS_RIGHTS 0x0000481C
#define VMX_GUEST_GS_ACCESS_RIGHTS 0x0000481E
#define VMX_GUEST_LDTR_ACCESS_RIGHTS 0x00004820
#define VMX_GUEST_TR_ACCESS_RIGHTS 0x00004822
#define VMX_GUEST_INTERRUPTABILITY 0x00004824
#define VMX_GUEST_ACTIVITY 0x00004826
#define VMX_GUEST_SMBASE 0x00004828
#define VMX_GUEST_SYSENTER_CS 0x0000482A
#define VMX_GUEST_CR0 0x00006800
#define VMX_GUEST_CR3 0x00006802
#define VMX_GUEST_CR4 0x00006804
#define VMX_GUEST_ES_BASE 0x00006806
#define VMX_GUEST_CS_BASE 0x00006808
#define VMX_GUEST_SS_BASE 0x0000680A
#define VMX_GUEST_DS_BASE 0x0000680C
#define VMX_GUEST_FS_BASE 0x0000680E
#define VMX_GUEST_GS_BASE 0x00006810
#define VMX_GUEST_LDTR_BASE 0x00006812
#define VMX_GUEST_TR_BASE 0x00006814
#define VMX_GUEST_GDTR_BASE 0x00006816
#define VMX_GUEST_IDTR_BASE 0x00006818
#define VMX_GUEST_PENDING_DEBUG_EXCEPTIONS 0x00006822
#define VMX_GUEST_DR7 0x0000681A
#define VMX_GUEST_RSP 0x0000681C
#define VMX_GUEST_RIP 0x0000681E
#define VMX_GUEST_RFLAGS 0x00006820
#define VMX_GUEST_SYSENTER_ESP 0x00006824
#define VMX_GUEST_SYSENTER_EIP 0x00006826
#define VMX_GUEST_VMX_PREEMPTION_TIMER_VALUE 0x0000482E

#define VMX_DATA_INSTRUCTION_ERROR 0x00004400
#define VMX_DATA_EXIT_REASON 0x00004402
#define VMX_DATA_EXIT_INTERRUPT_INFO 0x00004404
#define VMX_DATA_EXIT_INTERRUPT_ERROR 0x00004406
#define VMX_DATA_IDT_VECTOR_INFO 0x00004408
#define VMX_DATA_IDT_VECTOR_ERROR 0x0000440A
#define VMX_DATA_EXIT_INSTRUCTION_LENGTH 0x0000440C
#define VMX_DATA_EXIT_INSTRUCTION_INFO 0x0000440E

#define VMX_DATA_EXIT_QUALIFICATION 0x00006400
#define VMX_DATA_IO_RCX 0x00006402
#define VMX_DATA_IO_RSI 0x00006404
#define VMX_DATA_IO_RDI 0x00006406
#define VMX_DATA_IO_RIP 0x00006408
#define VMX_DATA_GUEST_LINEAR_ADDRESS 0x0000640A
#define VMX_DATA_GUEST_PHYSICAL 0x00002400

#define VMX_CONTROL_CR0_MASK 0x00006000
#define VMX_CONTROL_CR4_MASK 0x00006002
#define VMX_CONTROL_CR0_READ_SHADOW 0x00006004
#define VMX_CONTROL_CR4_READ_SHADOW 0x00006006

#define VMX_CONTROL_PIN_EXECUTION_CONTROLS 0x00004000
#define VMX_CONTROL_PRIMARY_PROCESSOR_CONTROLS 0x00004002
#define VMX_CONTROL_SECONDARY_PROCESSOR_CONTROLS 0x0000401E
#define VMX_CONTROL_EXCEPTION_BITMAP 0x00004004
#define VMX_CONTROL_EXIT_CONTROLS 0x0000400C
#define VMX_CONTROL_ENTRY_INTERRUPTION_INFO 0x00004016


#endif
