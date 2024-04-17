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
  /* 0x0004 */ wchar_t* targetDescription;
  /* 0x0008 */ wchar_t* dataDescription;
  /* 0x000c */ enum EDP_AUDIT_ACTION action;
  /* 0x0010 */ unsigned long targetProcessId;
  /* 0x0014 */ wchar_t* targetAppId;
  /* 0x0018 */ wchar_t* dataFilePaths;
}; /* size: 0x001c */

