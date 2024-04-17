typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CSplit_QI
{
  /* 0x0000 */ struct tagMInterfacePointer* SomePMItfPtrs[2];
  /* 0x0010 */ HRESULT SomeHRs[2];
  /* 0x0018 */ struct _GUID SomeIIDs[2];
  /* 0x0038 */ unsigned long _dwCount;
  /* 0x0040 */ char* _pAllocBlock;
  /* 0x0048 */ struct tagMInterfacePointer** _pItfArray;
  /* 0x0050 */ HRESULT* _pHrArray;
  /* 0x0058 */ struct _GUID* _pIIDArray;
}; /* size: 0x0060 */

