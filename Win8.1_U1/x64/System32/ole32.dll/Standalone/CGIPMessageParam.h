enum MessageParamKind
{
  CMessageCall = 0,
  CChannelObject = 1,
  CDllHost = 2,
  CGIPMessageParam = 3,
  POSTRELRIFREF = 4,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CGIPMessageParam
{
  /* 0x0000 */ enum MessageParamKind Kind;
  /* 0x0010 */ long m_cRefs;
  /* 0x0014 */ unsigned long m_dwCookie;
  /* 0x0018 */ struct _GUID m_causalityId;
}; /* size: 0x0028 */

