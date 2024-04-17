struct tagScmRequestInfoData
{
  /* 0x0000 */ struct tagCustomPrivScmInfo* pScmInfo;
  /* 0x0004 */ struct _customREMOTE_REQUEST_SCM_INFO* remoteRequest;
}; /* size: 0x0008 */

class ScmRequestInfo
{
  /* 0x0014 */ struct tagScmRequestInfoData _scmRequestInfoData;
}; /* size: 0x001c */

