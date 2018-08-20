typedef enum _IRQ_DEVICE_POLICY
{
  IrqPolicyMachineDefault = 0,
  IrqPolicyAllCloseProcessors = 1,
  IrqPolicyOneCloseProcessor = 2,
  IrqPolicyAllProcessorsInMachine = 3,
  IrqPolicySpecifiedProcessors = 4,
  IrqPolicySpreadMessagesAcrossAllProcessors = 5,
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;

