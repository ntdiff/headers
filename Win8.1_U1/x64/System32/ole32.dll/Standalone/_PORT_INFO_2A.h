typedef struct _PORT_INFO_2A
{
  /* 0x0000 */ char* pPortName;
  /* 0x0008 */ char* pMonitorName;
  /* 0x0010 */ char* pDescription;
  /* 0x0018 */ unsigned long fPortType;
  /* 0x001c */ unsigned long Reserved;
} PORT_INFO_2A, *PPORT_INFO_2A; /* size: 0x0020 */

