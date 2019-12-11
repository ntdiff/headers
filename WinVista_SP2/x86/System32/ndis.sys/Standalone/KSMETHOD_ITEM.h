struct KSMETHOD_ITEM
{
  /* 0x0000 */ unsigned long MethodId;
  union
  {
    /* 0x0004 */ void* MethodHandler /* function */;
    /* 0x0004 */ unsigned char MethodSupported;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long MinMethod;
  /* 0x000c */ unsigned long MinData;
  /* 0x0010 */ void* SupportHandler /* function */;
  /* 0x0014 */ unsigned long Flags;
}; /* size: 0x0018 */

