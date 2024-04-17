struct tagXAptQIData
{
  /* 0x0000 */ const struct _GUID* pIPID;
  /* 0x0008 */ unsigned long cRefs;
  /* 0x000c */ unsigned short cIids;
  /* 0x0010 */ struct _GUID* iids;
  /* 0x0018 */ struct tagREMQIRESULT** ppQIResults;
  /* 0x0020 */ class CRemoteUnknown* pRemUnk;
}; /* size: 0x0028 */

