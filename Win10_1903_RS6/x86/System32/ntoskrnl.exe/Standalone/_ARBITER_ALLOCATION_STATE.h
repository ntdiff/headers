typedef struct _ARBITER_ALLOCATION_STATE
{
  /* 0x0000 */ unsigned __int64 Start;
  /* 0x0008 */ unsigned __int64 End;
  /* 0x0010 */ unsigned __int64 CurrentMinimum;
  /* 0x0018 */ unsigned __int64 CurrentMaximum;
  /* 0x0020 */ struct _ARBITER_LIST_ENTRY* Entry;
  /* 0x0024 */ struct _ARBITER_ALTERNATIVE* CurrentAlternative;
  /* 0x0028 */ unsigned long AlternativeCount;
  /* 0x002c */ struct _ARBITER_ALTERNATIVE* Alternatives;
  /* 0x0030 */ unsigned short Flags;
  /* 0x0032 */ unsigned char RangeAttributes;
  /* 0x0033 */ unsigned char RangeAvailableAttributes;
  /* 0x0034 */ unsigned long WorkSpace;
} ARBITER_ALLOCATION_STATE, *PARBITER_ALLOCATION_STATE; /* size: 0x0038 */

