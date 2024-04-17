typedef struct _CMC_STATUS_INFO
{
  /* 0x0000 */ unsigned long dwStatus;
  /* 0x0004 */ unsigned long cBodyList;
  /* 0x0008 */ unsigned long* rgdwBodyList;
  /* 0x0010 */ wchar_t* pwszStatusString;
  /* 0x0018 */ unsigned long dwOtherInfoChoice;
  union
  {
    /* 0x0020 */ unsigned long dwFailInfo;
    /* 0x0020 */ struct _CMC_PEND_INFO* pPendInfo;
  }; /* size: 0x0008 */
} CMC_STATUS_INFO, *PCMC_STATUS_INFO; /* size: 0x0028 */

