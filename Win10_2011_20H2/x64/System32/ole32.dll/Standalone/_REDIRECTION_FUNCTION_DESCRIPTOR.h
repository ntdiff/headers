typedef struct _REDIRECTION_FUNCTION_DESCRIPTOR
{
  /* 0x0000 */ const char* DllName;
  /* 0x0008 */ const char* FunctionName;
  /* 0x0010 */ void* RedirectionTarget;
} REDIRECTION_FUNCTION_DESCRIPTOR, *PREDIRECTION_FUNCTION_DESCRIPTOR; /* size: 0x0018 */

