struct SGetFreeStruct
{
  /* 0x0000 */ struct CVectBits* pfb;
  /* 0x0008 */ unsigned long sect;
  /* 0x0010 */ class CFatSect* pfs;
  /* 0x0018 */ unsigned short isect;
  /* 0x001c */ unsigned long ipfs;
  /* 0x0020 */ unsigned long sectLast;
  /* 0x0024 */ unsigned long ipfsLast;
  /* 0x0028 */ unsigned short isectLast;
  /* 0x0030 */ class CFatSect* pfsNoScratch;
  /* 0x0038 */ unsigned long ipfsNoScratch;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */

