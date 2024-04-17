typedef struct _REASON_BUFFER
{
  /* 0x0000 */ unsigned long Flags;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 ResourceFileNameOffset;
      /* 0x0010 */ unsigned short ResourceReasonId;
      /* 0x0014 */ unsigned long StringCount;
      /* 0x0018 */ unsigned __int64 SubstitutionStringsOffset;
    }; /* size: 0x0016 */
    struct
    {
      /* 0x0008 */ unsigned __int64 SimpleStringOffset;
      /* 0x0010 */ long __PADDING__[4];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
} REASON_BUFFER, *PREASON_BUFFER; /* size: 0x0020 */

