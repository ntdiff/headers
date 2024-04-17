typedef struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY
{
  /* 0x0000 */ unsigned long BeginAddress;
  /* 0x0004 */ unsigned long EndAddress;
  /* 0x0008 */ unsigned long ExceptionHandler;
  /* 0x000c */ unsigned long HandlerData;
  /* 0x0010 */ unsigned long PrologEndAddress;
} IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY; /* size: 0x0014 */

