typedef struct _PACKEDEVENTINFO
{
  /* 0x0000 */ unsigned long ulSize;
  /* 0x0004 */ unsigned long ulNumEventsForLogFile;
  /* 0x0008 */ unsigned long* ulOffsets /* zero-length array */;
} PACKEDEVENTINFO, *PPACKEDEVENTINFO; /* size: 0x0008 */

