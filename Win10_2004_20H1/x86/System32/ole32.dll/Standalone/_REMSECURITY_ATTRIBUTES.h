typedef struct _REMSECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ unsigned long lpSecurityDescriptor;
  /* 0x0008 */ int bInheritHandle;
} REMSECURITY_ATTRIBUTES, *PREMSECURITY_ATTRIBUTES; /* size: 0x000c */

