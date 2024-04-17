typedef struct _LOAD_ASDATA_TABLE
{
  /* 0x0000 */ void* Module;
  /* 0x0004 */ wchar_t* FilePath;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ void* Handle;
  /* 0x0010 */ long RefCount;
  /* 0x0014 */ struct _ACTIVATION_CONTEXT* EntryPointActivationContext;
} LOAD_ASDATA_TABLE, *PLOAD_ASDATA_TABLE; /* size: 0x0018 */

