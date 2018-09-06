typedef enum _KERNEL_STACK_LIMITS
{
  BugcheckStackLimits = 0,
  DPCStackLimits = 1,
  ExpandedStackLimits = 2,
  NormalStackLimits = 3,
  Win32kStackLimits = 4,
  SwapBusyStackLimits = 5,
  IsrStackLimits = 6,
  DebuggerStackLimits = 7,
  NmiStackLimits = 8,
  MachineCheckStackLimits = 9,
  MaximumStackLimits = 10,
} KERNEL_STACK_LIMITS, *PKERNEL_STACK_LIMITS;

