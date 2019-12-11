struct KSFASTMETHOD_ITEM
{
  /* 0x0000 */ unsigned long MethodId;
  union
  {
    /* 0x0008 */ void* MethodHandler /* function */;
    struct
    {
      /* 0x0008 */ unsigned char MethodSupported;
      /* 0x0009 */ char __PADDING__[7];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

