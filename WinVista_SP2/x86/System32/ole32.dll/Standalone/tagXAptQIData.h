struct tagXAptQIData
{
  /* 0x0000 */ const struct _GUID* pIPID;
  /* 0x0004 */ unsigned long cRefs;
  /* 0x0008 */ unsigned short cIids;
  /* 0x000c */ struct _GUID* iids;
  /* 0x0010 */ struct tagREMQIRESULT** ppQIResults;
  /* 0x0014 */ class CRemoteUnknown* pRemUnk;
}; /* size: 0x0018 */

