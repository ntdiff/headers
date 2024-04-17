typedef struct _ENCLAVE_LOAD_INFO_VBS
{
  union
  {
    /* 0x0000 */ void* ImageHandle;
    /* 0x0000 */ unsigned __int64 Unused;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short NameLength;
  /* 0x000a */ wchar_t Name[1];
  /* 0x000c */ long __PADDING__[1];
} ENCLAVE_LOAD_INFO_VBS, *PENCLAVE_LOAD_INFO_VBS; /* size: 0x0010 */

