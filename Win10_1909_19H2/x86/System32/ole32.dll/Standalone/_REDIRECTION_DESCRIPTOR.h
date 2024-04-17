typedef struct _REDIRECTION_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long FunctionCount;
  /* 0x0008 */ const struct _REDIRECTION_FUNCTION_DESCRIPTOR* Redirections;
} REDIRECTION_DESCRIPTOR, *PREDIRECTION_DESCRIPTOR; /* size: 0x000c */

