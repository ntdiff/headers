typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct __PUBLIC_OBJECT_TYPE_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING TypeName;
  /* 0x0008 */ unsigned long Reserved[22];
} _PUBLIC_OBJECT_TYPE_INFORMATION, *P_PUBLIC_OBJECT_TYPE_INFORMATION; /* size: 0x0060 */

