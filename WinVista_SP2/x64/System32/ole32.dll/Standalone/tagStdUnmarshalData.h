struct tagStdUnmarshalData
{
  /* 0x0000 */ class CStdIdentity* pStdID;
  /* 0x0008 */ struct tagOBJREF* pobjref;
  /* 0x0010 */ class CObjectContext* pClientCtx;
  /* 0x0018 */ int fCreateWrapper;
  /* 0x0020 */ void** ppv;
  /* 0x0028 */ int fLightNA;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

