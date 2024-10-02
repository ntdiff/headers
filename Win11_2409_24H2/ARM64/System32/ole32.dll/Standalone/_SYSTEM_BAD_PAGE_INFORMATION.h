typedef struct _SYSTEM_BAD_PAGE_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 PhysicalPageNumber : 52; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Reserved : 10; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 Pending : 1; /* bit position: 62 */
    /* 0x0000 */ unsigned __int64 Poisoned : 1; /* bit position: 63 */
  }; /* bitfield */
} SYSTEM_BAD_PAGE_INFORMATION, *PSYSTEM_BAD_PAGE_INFORMATION; /* size: 0x0008 */

