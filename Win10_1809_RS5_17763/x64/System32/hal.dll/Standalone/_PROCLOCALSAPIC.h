typedef struct _PROCLOCALSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned char APICEID;
  /* 0x0005 */ unsigned char Reserved[3];
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long ACPIProcessorUIDInteger;
  /* 0x0010 */ char ACPIProcessorUIDString[1];
} PROCLOCALSAPIC, *PPROCLOCALSAPIC; /* size: 0x0011 */

