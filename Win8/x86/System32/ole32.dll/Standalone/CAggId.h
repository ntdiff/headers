enum EffectiveUnmarshalingPolicy
{
  None = 0,
  Classic = 1,
  Strong = 2,
};

class CAggId
{
  /* 0x0004 */ unsigned long _cRefs;
  /* 0x0008 */ struct IUnknown* _punkInner;
  /* 0x000c */ struct IMarshal* _pmshInner;
  /* 0x0010 */ class CStdIdentity* _pStdId;
  /* 0x0014 */ enum EffectiveUnmarshalingPolicy _policy;
}; /* size: 0x0018 */

