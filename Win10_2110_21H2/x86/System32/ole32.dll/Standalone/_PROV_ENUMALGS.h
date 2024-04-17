typedef struct _PROV_ENUMALGS
{
  /* 0x0000 */ unsigned int aiAlgid;
  /* 0x0004 */ unsigned long dwBitLen;
  /* 0x0008 */ unsigned long dwNameLen;
  /* 0x000c */ char szName[20];
} PROV_ENUMALGS, *PPROV_ENUMALGS; /* size: 0x0020 */

