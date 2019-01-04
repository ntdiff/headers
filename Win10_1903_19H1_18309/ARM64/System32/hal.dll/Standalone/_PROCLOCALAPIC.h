typedef struct _PROCLOCALAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned long Flags;
} PROCLOCALAPIC, *PPROCLOCALAPIC; /* size: 0x0008 */

