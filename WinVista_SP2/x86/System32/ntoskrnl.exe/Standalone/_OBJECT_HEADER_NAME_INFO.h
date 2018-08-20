typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _OBJECT_HEADER_NAME_INFO
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0004 */ struct _UNICODE_STRING Name;
  /* 0x000c */ unsigned long QueryReferences;
} OBJECT_HEADER_NAME_INFO, *POBJECT_HEADER_NAME_INFO; /* size: 0x0010 */

