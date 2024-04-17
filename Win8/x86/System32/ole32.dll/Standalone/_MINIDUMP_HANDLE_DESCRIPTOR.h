typedef struct _MINIDUMP_HANDLE_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 Handle;
  /* 0x0008 */ unsigned long TypeNameRva;
  /* 0x000c */ unsigned long ObjectNameRva;
  /* 0x0010 */ unsigned int Attributes;
  /* 0x0014 */ unsigned int GrantedAccess;
  /* 0x0018 */ unsigned int HandleCount;
  /* 0x001c */ unsigned int PointerCount;
} MINIDUMP_HANDLE_DESCRIPTOR, *PMINIDUMP_HANDLE_DESCRIPTOR; /* size: 0x0020 */

