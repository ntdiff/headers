typedef struct _KTB_FLUSH_VA
{
  union // _TAG_UNNAMED_71
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 NumberOfEntries : 11; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 PageSize : 1; /* bit position: 11 */
      }; /* bitfield */
      /* 0x0000 */ void* Va;
      /* 0x0000 */ unsigned __int64 VaLong;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} KTB_FLUSH_VA, *PKTB_FLUSH_VA; /* size: 0x0008 */

