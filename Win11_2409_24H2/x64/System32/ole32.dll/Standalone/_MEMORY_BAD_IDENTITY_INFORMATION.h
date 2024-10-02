typedef struct _MEMORY_BAD_IDENTITY_INFORMATION
{
  union
  {
    union
    {
      /* 0x0000 */ void* VirtualAddress;
      /* 0x0000 */ unsigned __int64 PageFrameIndex;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned __int64 Poisoned : 1; /* bit position: 0 */
          /* 0x0008 */ unsigned __int64 Physical : 1; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0008 */ e1;
      /* 0x0008 */ unsigned __int64 AllInformation;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u2;
} MEMORY_BAD_IDENTITY_INFORMATION, *PMEMORY_BAD_IDENTITY_INFORMATION; /* size: 0x0010 */

