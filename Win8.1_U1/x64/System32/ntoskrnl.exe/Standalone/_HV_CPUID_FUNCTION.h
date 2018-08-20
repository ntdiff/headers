typedef enum _HV_CPUID_FUNCTION
{
  HvCpuIdFunctionVersionAndFeatures = 1,
  HvCpuIdFunctionHvVendorAndMaxFunction = 0x40000000,
  HvCpuIdFunctionHvInterface = 0x40000001,
  HvCpuIdFunctionMsHvVersion = 0x40000002,
  HvCpuIdFunctionMsHvFeatures = 0x40000003,
  HvCpuIdFunctionMsHvEnlightenmentInformation = 0x40000004,
  HvCpuIdFunctionMsHvImplementationLimits = 0x40000005,
  HvCpuIdFunctionMsHvHardwareFeatures = 0x40000006,
  HvCpuIdFunctionMaxReserved = 0x40000006,
} HV_CPUID_FUNCTION, *PHV_CPUID_FUNCTION;

