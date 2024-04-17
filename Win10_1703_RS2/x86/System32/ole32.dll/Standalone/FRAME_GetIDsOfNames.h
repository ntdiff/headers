struct FRAME_GetIDsOfNames
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0004 */ const struct _GUID& riid;
  /* 0x0008 */ wchar_t** rgszNames;
  /* 0x000c */ unsigned int cNames;
  /* 0x0010 */ unsigned long lcid;
  /* 0x0014 */ long* rgDispId;
}; /* size: 0x0018 */

