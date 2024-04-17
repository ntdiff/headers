typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _MonikerReadStruct
{
  /* 0x0000 */ struct _GUID m_clsid;
  /* 0x0010 */ unsigned long m_ole1;
  /* 0x0014 */ unsigned long m_cbExtents;
} MonikerReadStruct, *PMonikerReadStruct; /* size: 0x0018 */

