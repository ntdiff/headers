typedef struct _REASON_CONTEXT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ struct HINSTANCE__* LocalizedReasonModule;
        /* 0x0010 */ unsigned long LocalizedReasonId;
        /* 0x0014 */ unsigned long ReasonStringCount;
        /* 0x0018 */ wchar_t** ReasonStrings;
      } /* size: 0x0018 */ Detailed;
      /* 0x0008 */ wchar_t* SimpleReasonString;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ Reason;
} REASON_CONTEXT, *PREASON_CONTEXT; /* size: 0x0020 */

