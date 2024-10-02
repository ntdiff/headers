typedef struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES
{
  /* 0x0000 */ unsigned char AMD64Capabilities[41];
  /* 0x0029 */ unsigned char ARM64Capabilities[8];
  /* 0x0031 */ unsigned char ARM64KernelCapabilities[8];
} RTL_FUNCTION_OVERRIDE_CAPABILITIES, *PRTL_FUNCTION_OVERRIDE_CAPABILITIES; /* size: 0x0039 */

