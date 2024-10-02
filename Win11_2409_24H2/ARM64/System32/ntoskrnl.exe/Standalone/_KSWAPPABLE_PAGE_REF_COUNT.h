typedef union _KSWAPPABLE_PAGE_REF_COUNT
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Resident : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 RefCount : 63; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KSWAPPABLE_PAGE_REF_COUNT, *PKSWAPPABLE_PAGE_REF_COUNT; /* size: 0x0008 */

