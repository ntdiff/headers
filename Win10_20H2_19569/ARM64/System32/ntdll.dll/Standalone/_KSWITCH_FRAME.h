typedef struct _KSWITCH_FRAME
{
  /* 0x0000 */ unsigned char ApcBypass;
  /* 0x0001 */ unsigned char Fill[7];
  /* 0x0008 */ unsigned __int64 Tpidr;
  /* 0x0010 */ unsigned __int64 Fp;
  /* 0x0018 */ unsigned __int64 Return;
} KSWITCH_FRAME, *PKSWITCH_FRAME; /* size: 0x0020 */

