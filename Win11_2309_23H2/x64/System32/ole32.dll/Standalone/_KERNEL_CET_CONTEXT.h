typedef struct _KERNEL_CET_CONTEXT
{
  /* 0x0000 */ unsigned __int64 Ssp;
  /* 0x0008 */ unsigned __int64 Rip;
  /* 0x0010 */ unsigned short SegCs;
  union
  {
    /* 0x0012 */ unsigned short AllFlags;
    struct /* bitfield */
    {
      /* 0x0012 */ unsigned short UseWrss : 1; /* bit position: 0 */
      /* 0x0012 */ unsigned short PopShadowStackOne : 1; /* bit position: 1 */
      /* 0x0012 */ unsigned short Unused : 14; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  /* 0x0014 */ unsigned short Fill[2];
} KERNEL_CET_CONTEXT, *PKERNEL_CET_CONTEXT; /* size: 0x0018 */

