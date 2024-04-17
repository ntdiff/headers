typedef struct _SECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0008 */ void* lpSecurityDescriptor;
  /* 0x0010 */ int bInheritHandle;
  /* 0x0014 */ long __PADDING__[1];
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES; /* size: 0x0018 */

