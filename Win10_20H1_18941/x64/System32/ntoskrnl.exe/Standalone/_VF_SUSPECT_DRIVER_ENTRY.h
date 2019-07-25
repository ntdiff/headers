typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _VF_SUSPECT_DRIVER_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ unsigned long Loads;
  /* 0x0014 */ unsigned long Unloads;
  /* 0x0018 */ struct _UNICODE_STRING BaseName;
} VF_SUSPECT_DRIVER_ENTRY, *PVF_SUSPECT_DRIVER_ENTRY; /* size: 0x0028 */

