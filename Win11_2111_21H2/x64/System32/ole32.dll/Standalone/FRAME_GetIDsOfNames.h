struct FRAME_GetIDsOfNames
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0008 */ const struct _GUID& riid;
  /* 0x0010 */ wchar_t** rgszNames;
  /* 0x0018 */ unsigned int cNames;
  /* 0x001c */ char __pad3[4];
  /* 0x0020 */ unsigned long lcid;
  /* 0x0024 */ char __pad4[4];
  /* 0x0028 */ long* rgDispId;
}; /* size: 0x0030 */

