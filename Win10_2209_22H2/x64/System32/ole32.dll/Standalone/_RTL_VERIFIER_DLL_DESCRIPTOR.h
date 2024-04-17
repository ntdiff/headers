typedef struct _RTL_VERIFIER_DLL_DESCRIPTOR
{
  /* 0x0000 */ wchar_t* DllName;
  /* 0x0008 */ unsigned long DllFlags;
  /* 0x0010 */ void* DllAddress;
  /* 0x0018 */ struct _RTL_VERIFIER_THUNK_DESCRIPTOR* DllThunks;
} RTL_VERIFIER_DLL_DESCRIPTOR, *PRTL_VERIFIER_DLL_DESCRIPTOR; /* size: 0x0020 */

