typedef enum _KHETERO_CPU_QOS
{
  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDeadline = 4,
  KHeteroCpuQosEco = 5,
  KHeteroCpuQosUtility = 6,
  KHeteroCpuQosDynamic = 7,
  KHeteroCpuQosMax = 7,
} KHETERO_CPU_QOS, *PKHETERO_CPU_QOS;

