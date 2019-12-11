struct KSMETHOD_ITEM
{
  /* 0x0000 */ unsigned long MethodId;
  union
  {
    /* 0x0008 */ void* MethodHandler /* function */;
    /* 0x0008 */ unsigned char MethodSupported;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long MinMethod;
  /* 0x0014 */ unsigned long MinData;
  /* 0x0018 */ void* SupportHandler /* function */;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

