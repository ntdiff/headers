enum EDP_AUDIT_ACTION
{
  SystemGenerated = 0,
  FileDecrypt = 1,
  CopyToLocation = 2,
  SendToRecipient = 3,
  Other = 4,
};

struct AUDIT_CALLBACK_INFO
{
  /* 0x0000 */ wchar_t* sourceDescription;
  /* 0x0008 */ wchar_t* targetDescription;
  /* 0x0010 */ wchar_t* dataDescription;
  /* 0x0018 */ enum EDP_AUDIT_ACTION action;
  /* 0x001c */ unsigned long targetProcessId;
  /* 0x0020 */ wchar_t* targetAppId;
  /* 0x0028 */ wchar_t* dataFilePaths;
}; /* size: 0x0030 */

