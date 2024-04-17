typedef struct _BCryptBufferDesc
{
  /* 0x0000 */ unsigned long ulVersion;
  /* 0x0004 */ unsigned long cBuffers;
  /* 0x0008 */ struct _BCryptBuffer* pBuffers;
} BCryptBufferDesc, *PBCryptBufferDesc; /* size: 0x000c */

