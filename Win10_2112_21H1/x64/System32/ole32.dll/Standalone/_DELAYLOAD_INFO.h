typedef struct _DELAYLOAD_PROC_DESCRIPTOR
{
  /* 0x0000 */ unsigned long ImportDescribedByName;
  union
  {
    union
    {
      /* 0x0008 */ const char* Name;
      /* 0x0008 */ unsigned long Ordinal;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Description;
} DELAYLOAD_PROC_DESCRIPTOR, *PDELAYLOAD_PROC_DESCRIPTOR; /* size: 0x0010 */

typedef struct _DELAYLOAD_INFO
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ const struct _IMAGE_DELAYLOAD_DESCRIPTOR* DelayloadDescriptor;
  /* 0x0010 */ struct _IMAGE_THUNK_DATA64* ThunkAddress;
  /* 0x0018 */ const char* TargetDllName;
  /* 0x0020 */ struct _DELAYLOAD_PROC_DESCRIPTOR TargetApiDescriptor;
  /* 0x0030 */ void* TargetModuleBase;
  /* 0x0038 */ void* Unused;
  /* 0x0040 */ unsigned long LastError;
  /* 0x0044 */ long __PADDING__[1];
} DELAYLOAD_INFO, *PDELAYLOAD_INFO; /* size: 0x0048 */

