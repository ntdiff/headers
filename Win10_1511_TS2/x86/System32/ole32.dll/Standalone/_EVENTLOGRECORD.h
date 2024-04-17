typedef struct _EVENTLOGRECORD
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long RecordNumber;
  /* 0x000c */ unsigned long TimeGenerated;
  /* 0x0010 */ unsigned long TimeWritten;
  /* 0x0014 */ unsigned long EventID;
  /* 0x0018 */ unsigned short EventType;
  /* 0x001a */ unsigned short NumStrings;
  /* 0x001c */ unsigned short EventCategory;
  /* 0x001e */ unsigned short ReservedFlags;
  /* 0x0020 */ unsigned long ClosingRecordNumber;
  /* 0x0024 */ unsigned long StringOffset;
  /* 0x0028 */ unsigned long UserSidLength;
  /* 0x002c */ unsigned long UserSidOffset;
  /* 0x0030 */ unsigned long DataLength;
  /* 0x0034 */ unsigned long DataOffset;
} EVENTLOGRECORD, *PEVENTLOGRECORD; /* size: 0x0038 */

