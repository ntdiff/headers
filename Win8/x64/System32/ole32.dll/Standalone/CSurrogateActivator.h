typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CSurrogateActivator
{
  /* 0x0008 */ struct _GUID m_processGuid;
  /* 0x0018 */ int m_fServicesConfigured;
  /* 0x001c */ unsigned long m_dwObjectCountAtIdleTime;
  /* 0x0000 */ class CSurrogateActivator* s_pCSA;
}; /* size: 0x0020 */

