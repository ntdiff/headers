struct tagScmRequestInfoData
{
  /* 0x0000 */ struct tagCustomPrivScmInfo* pScmInfo;
  /* 0x0008 */ struct _customREMOTE_REQUEST_SCM_INFO* remoteRequest;
}; /* size: 0x0010 */

class ScmRequestInfo
{
  /* 0x0020 */ struct tagScmRequestInfoData _scmRequestInfoData;
}; /* size: 0x0030 */

