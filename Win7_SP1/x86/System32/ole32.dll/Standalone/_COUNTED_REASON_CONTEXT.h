typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _COUNTED_REASON_CONTEXT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  union
  {
    struct
    {
      /* 0x0008 */ struct _UNICODE_STRING ResourceFileName;
      /* 0x0010 */ unsigned short ResourceReasonId;
      /* 0x0014 */ unsigned long StringCount;
      /* 0x0018 */ struct _UNICODE_STRING* ReasonStrings;
    }; /* size: 0x0012 */
    struct
    {
      /* 0x0008 */ struct _UNICODE_STRING SimpleString;
      /* 0x0010 */ long __PADDING__[3];
    }; /* size: 0x0014 */
  }; /* size: 0x0014 */
} COUNTED_REASON_CONTEXT, *PCOUNTED_REASON_CONTEXT; /* size: 0x001c */

