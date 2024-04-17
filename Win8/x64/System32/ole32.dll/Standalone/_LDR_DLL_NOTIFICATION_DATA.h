typedef struct _LDR_DLL_LOADED_NOTIFICATION_DATA
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ const struct _UNICODE_STRING* FullDllName;
  /* 0x0010 */ const struct _UNICODE_STRING* BaseDllName;
  /* 0x0018 */ void* DllBase;
  /* 0x0020 */ unsigned long SizeOfImage;
  /* 0x0024 */ long __PADDING__[1];
} LDR_DLL_LOADED_NOTIFICATION_DATA, *PLDR_DLL_LOADED_NOTIFICATION_DATA; /* size: 0x0028 */

typedef struct _LDR_DLL_UNLOADED_NOTIFICATION_DATA
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ const struct _UNICODE_STRING* FullDllName;
  /* 0x0010 */ const struct _UNICODE_STRING* BaseDllName;
  /* 0x0018 */ void* DllBase;
  /* 0x0020 */ unsigned long SizeOfImage;
  /* 0x0024 */ long __PADDING__[1];
} LDR_DLL_UNLOADED_NOTIFICATION_DATA, *PLDR_DLL_UNLOADED_NOTIFICATION_DATA; /* size: 0x0028 */

typedef union _LDR_DLL_NOTIFICATION_DATA
{
  union
  {
    /* 0x0000 */ struct _LDR_DLL_LOADED_NOTIFICATION_DATA Loaded;
    /* 0x0000 */ struct _LDR_DLL_UNLOADED_NOTIFICATION_DATA Unloaded;
  }; /* size: 0x0028 */
} LDR_DLL_NOTIFICATION_DATA, *PLDR_DLL_NOTIFICATION_DATA; /* size: 0x0028 */

