struct KSFASTMETHOD_ITEM
{
  /* 0x0000 */ unsigned long MethodId;
  union
  {
    /* 0x0004 */ void* MethodHandler /* function */;
    struct
    {
      /* 0x0004 */ unsigned char MethodSupported;
      /* 0x0005 */ char __PADDING__[3];
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
}; /* size: 0x0008 */

