typedef struct _MEMORY_WORKING_SET_EX_BLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ShareCount : 3; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Win32Protection : 11; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Shared : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned __int64 Node : 6; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned __int64 Priority : 3; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 Reserved : 4; /* bit position: 27 */
      /* 0x0000 */ unsigned __int64 Bad : 1; /* bit position: 31 */
      /* 0x0000 */ unsigned __int64 ReservedUlong : 32; /* bit position: 32 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Reserved0 : 14; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 Shared : 1; /* bit position: 15 */
        /* 0x0000 */ unsigned __int64 Reserved1 : 5; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 PageTable : 1; /* bit position: 21 */
        /* 0x0000 */ unsigned __int64 Location : 2; /* bit position: 22 */
        /* 0x0000 */ unsigned __int64 Priority : 3; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 ModifiedList : 1; /* bit position: 27 */
        /* 0x0000 */ unsigned __int64 Reserved2 : 3; /* bit position: 28 */
        /* 0x0000 */ unsigned __int64 Bad : 1; /* bit position: 31 */
        /* 0x0000 */ unsigned __int64 ReservedUlong : 32; /* bit position: 32 */
      }; /* bitfield */
    } /* size: 0x0008 */ Invalid;
  }; /* size: 0x0008 */
} MEMORY_WORKING_SET_EX_BLOCK, *PMEMORY_WORKING_SET_EX_BLOCK; /* size: 0x0008 */

typedef struct _MEMORY_WORKING_SET_EX_INFORMATION
{
  /* 0x0000 */ void* VirtualAddress;
  union
  {
    union
    {
      /* 0x0008 */ struct _MEMORY_WORKING_SET_EX_BLOCK VirtualAttributes;
      /* 0x0008 */ unsigned __int64 Long;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MEMORY_WORKING_SET_EX_INFORMATION, *PMEMORY_WORKING_SET_EX_INFORMATION; /* size: 0x0010 */

