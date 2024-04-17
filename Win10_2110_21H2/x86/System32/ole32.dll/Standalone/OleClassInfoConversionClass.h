typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class Microsoft::WRL::ComPtr<IOleClassInfo>
{
  /* 0x0000 */ struct IOleClassInfo* ptr_;
}; /* size: 0x0004 */

class OleClassInfoConversionClass
{
  /* 0x000c */ struct _GUID _classId;
  /* 0x001c */ class Microsoft::WRL::ComPtr<IOleClassInfo> _oleClassInfo;
}; /* size: 0x0020 */

