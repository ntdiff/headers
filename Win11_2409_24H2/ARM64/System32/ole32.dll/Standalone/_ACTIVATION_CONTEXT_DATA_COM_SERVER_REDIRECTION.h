typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ThreadingModel;
  /* 0x000c */ struct _GUID ReferenceClsid;
  /* 0x001c */ struct _GUID ConfiguredClsid;
  /* 0x002c */ struct _GUID ImplementedClsid;
  /* 0x003c */ struct _GUID TypeLibraryId;
  /* 0x004c */ unsigned long ModuleLength;
  /* 0x0050 */ unsigned long ModuleOffset;
  /* 0x0054 */ unsigned long ProgIdLength;
  /* 0x0058 */ unsigned long ProgIdOffset;
  /* 0x005c */ unsigned long ShimDataLength;
  /* 0x0060 */ unsigned long ShimDataOffset;
  /* 0x0064 */ unsigned long MiscStatusDefault;
  /* 0x0068 */ unsigned long MiscStatusContent;
  /* 0x006c */ unsigned long MiscStatusThumbnail;
  /* 0x0070 */ unsigned long MiscStatusIcon;
  /* 0x0074 */ unsigned long MiscStatusDocPrint;
} ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION, *PACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION; /* size: 0x0078 */

