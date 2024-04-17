struct tagScmReplyInfoData
{
  /* 0x0000 */ struct tagCustomPrivResolverInfo* pResolverInfo;
  /* 0x0008 */ struct _customREMOTE_REPLY_SCM_INFO* remoteReply;
}; /* size: 0x0010 */

class ScmReplyInfo
{
  /* 0x0020 */ struct tagScmReplyInfoData _scmReplyInfoData;
}; /* size: 0x0030 */

