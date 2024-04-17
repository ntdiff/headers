typedef struct _PORT_INFO_2A
{
  /* 0x0000 */ char* pPortName;
  /* 0x0004 */ char* pMonitorName;
  /* 0x0008 */ char* pDescription;
  /* 0x000c */ unsigned long fPortType;
  /* 0x0010 */ unsigned long Reserved;
} PORT_INFO_2A, *PPORT_INFO_2A; /* size: 0x0014 */

