struct FRAME_GetTypeInfo
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0008 */ unsigned int iTInfo;
  /* 0x000c */ char __pad1[4];
  /* 0x0010 */ unsigned long lcid;
  /* 0x0014 */ char __pad2[4];
  /* 0x0018 */ struct ITypeInfo** ppTInfo;
}; /* size: 0x0020 */

