typedef struct _TAPE_ERASE
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned char Immediate;
  /* 0x0005 */ char __PADDING__[3];
} TAPE_ERASE, *PTAPE_ERASE; /* size: 0x0008 */

