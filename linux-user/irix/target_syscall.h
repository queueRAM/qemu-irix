#ifndef IRIX_TARGET_SYSCALL_H
#define IRIX_TARGET_SYSCALL_H

/* this struct defines the way the registers are stored on the
   stack during a system call. */

struct target_pt_regs {
	/* Saved main processor registers. */
	target_ulong regs[32];

	/* Saved special registers. */
	target_ulong cp0_status;
	target_ulong lo;
	target_ulong hi;
	target_ulong cp0_badvaddr;
	target_ulong cp0_cause;
	target_ulong cp0_epc;
};

#define UNAME_MACHINE "irix"
#define UNAME_MINIMUM_RELEASE "2.6.32"

#define TARGET_FORCE_SHMLBA

static inline abi_ulong target_shmlba(CPUMIPSState *env)
{
    return 0x40000;
}

#endif