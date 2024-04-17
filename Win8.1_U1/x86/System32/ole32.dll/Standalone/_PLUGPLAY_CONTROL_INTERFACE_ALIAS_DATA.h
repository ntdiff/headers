typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING SymbolicLinkName;
  /* 0x0008 */ struct _GUID* AliasClassGuid;
  /* 0x000c */ wchar_t* AliasSymbolicLinkName;
  /* 0x0010 */ unsigned long AliasSymbolicLinkNameLength;
} PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA, *PPLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA; /* size: 0x0014 */

