struct SGetFreeStruct
{
  /* 0x0000 */ struct CVectBits* pfb;
  /* 0x0004 */ unsigned long sect;
  /* 0x0008 */ class CFatSect* pfs;
  /* 0x000c */ unsigned short isect;
  /* 0x0010 */ unsigned long ipfs;
  /* 0x0014 */ unsigned long sectLast;
  /* 0x0018 */ unsigned long ipfsLast;
  /* 0x001c */ unsigned short isectLast;
  /* 0x0020 */ class CFatSect* pfsNoScratch;
  /* 0x0024 */ unsigned long ipfsNoScratch;
}; /* size: 0x0028 */

