typedef struct _MEMORY_FRAME_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 UseDescription : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ListDescription : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Reserved0 : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Pinned : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 DontUse : 48; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Priority : 3; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 Reserved : 4; /* bit position: 60 */
  }; /* bitfield */
} MEMORY_FRAME_INFORMATION, *PMEMORY_FRAME_INFORMATION; /* size: 0x0008 */

