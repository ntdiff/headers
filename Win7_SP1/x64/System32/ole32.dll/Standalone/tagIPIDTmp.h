struct tagIPIDTmp
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ unsigned long cStrongRefs;
  /* 0x0008 */ unsigned long cWeakRefs;
  /* 0x000c */ unsigned long cPrivateRefs;
  /* 0x0010 */ void* pv;
  /* 0x0018 */ struct IUnknown* pStub;
  /* 0x0020 */ class OXIDEntry* pOXIDEntry;
}; /* size: 0x0028 */

