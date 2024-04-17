typedef struct _EVENT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Id;
  /* 0x0002 */ unsigned char Version;
  /* 0x0003 */ unsigned char Channel;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Opcode;
  /* 0x0006 */ unsigned short Task;
  /* 0x0008 */ unsigned __int64 Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR; /* size: 0x0010 */

typedef struct _EVENT_ENTRY
{
  /* 0x0000 */ struct _EVENT_DESCRIPTOR EventDescriptor;
  /* 0x0010 */ struct _EVENT_DATA_DESCRIPTOR* UserData;
  /* 0x0018 */ struct _EVENT_ENTRY* LeftEntry;
  /* 0x0020 */ struct _EVENT_ENTRY* RightEntry;
  /* 0x0028 */ unsigned int Hash;
  /* 0x002c */ unsigned char UserDataCount;
  /* 0x002d */ unsigned char NumAggregateFields;
} EVENT_ENTRY, *PEVENT_ENTRY; /* size: 0x002e */

