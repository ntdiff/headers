typedef struct _MI_PFN_FLAGS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short ReferenceCount;
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned char PageLocation : 3; /* bit position: 0 */
        /* 0x0002 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
        /* 0x0002 */ unsigned char Modified : 1; /* bit position: 4 */
        /* 0x0002 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
        /* 0x0002 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0003 */ unsigned char Priority : 3; /* bit position: 0 */
        /* 0x0003 */ unsigned char OnProtectedStandby : 1; /* bit position: 3 */
        /* 0x0003 */ unsigned char InPageError : 1; /* bit position: 4 */
        /* 0x0003 */ unsigned char SystemChargedPage : 1; /* bit position: 5 */
        /* 0x0003 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
        /* 0x0003 */ unsigned char ParityError : 1; /* bit position: 7 */
      }; /* bitfield */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EntireField;
  }; /* size: 0x0004 */
} MI_PFN_FLAGS, *PMI_PFN_FLAGS; /* size: 0x0004 */

