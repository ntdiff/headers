typedef struct _LOAD_ASDATA_TABLE
{
  /* 0x0000 */ void* Module;
  /* 0x0008 */ wchar_t* FilePath;
  /* 0x0010 */ unsigned __int64 Size;
  /* 0x0018 */ void* Handle;
  /* 0x0020 */ long RefCount;
  /* 0x0028 */ struct _ACTIVATION_CONTEXT* EntryPointActivationContext;
} LOAD_ASDATA_TABLE, *PLOAD_ASDATA_TABLE; /* size: 0x0030 */

