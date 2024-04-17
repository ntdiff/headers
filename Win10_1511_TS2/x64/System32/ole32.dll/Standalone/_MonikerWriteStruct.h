typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _MonikerWriteStruct
{
  /* 0x0000 */ unsigned short m_endServer;
  /* 0x0002 */ unsigned short m_w;
  /* 0x0004 */ struct _GUID m_clsid;
  /* 0x0014 */ unsigned long m_ole1;
} MonikerWriteStruct, *PMonikerWriteStruct; /* size: 0x0018 */

