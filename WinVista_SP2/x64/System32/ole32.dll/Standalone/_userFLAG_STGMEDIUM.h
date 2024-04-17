typedef struct _userSTGMEDIUM
{
  /* 0x0000 */ struct IUnknown* pUnkForRelease;
} userSTGMEDIUM, *PuserSTGMEDIUM; /* size: 0x0008 */

typedef struct _userFLAG_STGMEDIUM
{
  /* 0x0000 */ long ContextFlags;
  /* 0x0004 */ long fPassOwnership;
  /* 0x0008 */ struct _userSTGMEDIUM Stgmed;
} userFLAG_STGMEDIUM, *PuserFLAG_STGMEDIUM; /* size: 0x0010 */

