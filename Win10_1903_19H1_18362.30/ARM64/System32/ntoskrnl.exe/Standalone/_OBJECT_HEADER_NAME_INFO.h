typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _OBJECT_HEADER_NAME_INFO
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0008 */ struct _UNICODE_STRING Name;
  /* 0x0018 */ long ReferenceCount;
  /* 0x001c */ unsigned long Reserved;
} OBJECT_HEADER_NAME_INFO, *POBJECT_HEADER_NAME_INFO; /* size: 0x0020 */

