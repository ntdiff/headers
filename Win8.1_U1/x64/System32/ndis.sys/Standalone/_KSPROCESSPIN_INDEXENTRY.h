typedef struct _KSPROCESSPIN_INDEXENTRY
{
  /* 0x0000 */ struct _KSPROCESSPIN** Pins;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ long __PADDING__[1];
} KSPROCESSPIN_INDEXENTRY, *PKSPROCESSPIN_INDEXENTRY; /* size: 0x0010 */

