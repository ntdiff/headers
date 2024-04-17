typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CEnumGeneric
{
  /* 0x0004 */ struct _GUID m_iid;
  /* 0x0014 */ unsigned long m_refs;
  /* 0x0018 */ unsigned long m_dwCurrent;
  /* 0x001c */ unsigned long m_dwDirection;
  /* 0x0020 */ struct IEnumCallback* m_pEnumCallback;
  /* 0x0024 */ struct IEnumHolder* m_pParent;
  /* 0x0028 */ struct IEnumGeneric* m_pNext;
  /* 0x002c */ struct IEnumGeneric* m_pPrev;
}; /* size: 0x0030 */

