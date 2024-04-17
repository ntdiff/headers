struct XSAVE_CPU_INFO
{
  /* 0x0000 */ unsigned char Processor;
  /* 0x0002 */ unsigned short Family;
  /* 0x0004 */ unsigned short Model;
  /* 0x0006 */ unsigned short Stepping;
  /* 0x0008 */ unsigned short ExtendedModel;
  /* 0x000c */ unsigned long ExtendedFamily;
  /* 0x0010 */ unsigned __int64 MicrocodeVersion;
  /* 0x0018 */ unsigned long Reserved;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

typedef struct _XSAVE_SUPPORTED_CPU
{
  /* 0x0000 */ struct XSAVE_CPU_INFO CpuInfo;
  union
  {
    /* 0x0020 */ struct XSAVE_CPU_ERRATA* CpuErrata;
    /* 0x0020 */ unsigned __int64 Unused;
  }; /* size: 0x0008 */
} XSAVE_SUPPORTED_CPU, *PXSAVE_SUPPORTED_CPU; /* size: 0x0028 */

typedef struct _XSAVE_VENDOR
{
  /* 0x0000 */ unsigned long VendorId[3];
  /* 0x0010 */ struct _XSAVE_SUPPORTED_CPU SupportedCpu;
} XSAVE_VENDOR, *PXSAVE_VENDOR; /* size: 0x0038 */

typedef struct _XSAVE_VENDORS
{
  /* 0x0000 */ unsigned long NumberOfVendors;
  /* 0x0008 */ struct _XSAVE_VENDOR Vendor[1];
} XSAVE_VENDORS, *PXSAVE_VENDORS; /* size: 0x0040 */

