typedef struct _PORT_INFO_2W
{
  /* 0x0000 */ wchar_t* pPortName;
  /* 0x0008 */ wchar_t* pMonitorName;
  /* 0x0010 */ wchar_t* pDescription;
  /* 0x0018 */ unsigned long fPortType;
  /* 0x001c */ unsigned long Reserved;
} PORT_INFO_2W, *PPORT_INFO_2W; /* size: 0x0020 */

