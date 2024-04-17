typedef struct _SECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ void* lpSecurityDescriptor;
  /* 0x0008 */ int bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES; /* size: 0x000c */

