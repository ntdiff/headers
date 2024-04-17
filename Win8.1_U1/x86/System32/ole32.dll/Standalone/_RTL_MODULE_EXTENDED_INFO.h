typedef struct _RTL_MODULE_BASIC_INFO
{
  /* 0x0000 */ void* ImageBase;
} RTL_MODULE_BASIC_INFO, *PRTL_MODULE_BASIC_INFO; /* size: 0x0004 */

typedef struct _RTL_MODULE_EXTENDED_INFO
{
  /* 0x0000 */ struct _RTL_MODULE_BASIC_INFO BasicInfo;
  /* 0x0004 */ unsigned long ImageSize;
  /* 0x0008 */ unsigned short FileNameOffset;
  /* 0x000a */ unsigned char FullPathName[256];
  /* 0x010a */ char __PADDING__[2];
} RTL_MODULE_EXTENDED_INFO, *PRTL_MODULE_EXTENDED_INFO; /* size: 0x010c */

