typedef struct _ALPC_COMPLETION_LIST_STATE
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 Head : 24; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 Tail : 24; /* bit position: 24 */
          /* 0x0000 */ unsigned __int64 ActiveThreadCount : 16; /* bit position: 48 */
        }; /* bitfield */
      } /* size: 0x0008 */ s1;
      /* 0x0000 */ __int64 Value;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} ALPC_COMPLETION_LIST_STATE, *PALPC_COMPLETION_LIST_STATE; /* size: 0x0008 */

