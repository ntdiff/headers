typedef struct _DELAYLOAD_PROC_DESCRIPTOR
{
  /* 0x0000 */ unsigned long ImportDescribedByName;
  union
  {
    union
    {
      /* 0x0004 */ const char* Name;
      /* 0x0004 */ unsigned long Ordinal;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Description;
} DELAYLOAD_PROC_DESCRIPTOR, *PDELAYLOAD_PROC_DESCRIPTOR; /* size: 0x0008 */

typedef struct _DELAYLOAD_INFO
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ const struct _IMAGE_DELAYLOAD_DESCRIPTOR* DelayloadDescriptor;
  /* 0x0008 */ struct _IMAGE_THUNK_DATA32* ThunkAddress;
  /* 0x000c */ const char* TargetDllName;
  /* 0x0010 */ struct _DELAYLOAD_PROC_DESCRIPTOR TargetApiDescriptor;
  /* 0x0018 */ void* TargetModuleBase;
  /* 0x001c */ void* Unused;
  /* 0x0020 */ unsigned long LastError;
} DELAYLOAD_INFO, *PDELAYLOAD_INFO; /* size: 0x0024 */

