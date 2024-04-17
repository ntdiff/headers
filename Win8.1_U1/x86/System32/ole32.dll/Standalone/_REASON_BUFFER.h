typedef struct _REASON_BUFFER
{
  /* 0x0000 */ unsigned long Flags;
  union
  {
    struct
    {
      /* 0x0004 */ unsigned long ResourceFileNameOffset;
      /* 0x0008 */ unsigned short ResourceReasonId;
      /* 0x000c */ unsigned long StringCount;
      /* 0x0010 */ unsigned long SubstitutionStringsOffset;
    }; /* size: 0x000e */
    struct
    {
      /* 0x0004 */ unsigned long SimpleStringOffset;
      /* 0x0008 */ long __PADDING__[3];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} REASON_BUFFER, *PREASON_BUFFER; /* size: 0x0014 */

