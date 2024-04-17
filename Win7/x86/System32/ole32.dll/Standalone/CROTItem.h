typedef struct _SCMREGKEY
{
  /* 0x0000 */ unsigned __int64 dwEntryLoc;
  /* 0x0008 */ unsigned long dwHash;
  /* 0x000c */ unsigned long dwScmId;
} SCMREGKEY, *PSCMREGKEY; /* size: 0x0010 */

class CROTItem
{
  /* 0x0000 */ unsigned short _wItemSig;
  /* 0x0004 */ int _fDontCallApp;
  /* 0x0008 */ struct _SCMREGKEY _scmregkey;
  /* 0x0018 */ unsigned long _hApt;
  /* 0x001c */ void* _pvStubRegistration;
}; /* size: 0x0020 */

