typedef union _CLS_LSN
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned int idxRecord;
      /* 0x0004 */ unsigned long cidContainer;
    } /* size: 0x0008 */ offset;
    /* 0x0000 */ unsigned __int64 ullOffset;
  }; /* size: 0x0008 */
} CLS_LSN, *PCLS_LSN; /* size: 0x0008 */

