typedef struct _WNF_STATE_NAME_STRUCT
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Version : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NameLifetime : 2; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 DataScope : 4; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 PermanentData : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Sequence : 53; /* bit position: 11 */
  }; /* bitfield */
} WNF_STATE_NAME_STRUCT, *PWNF_STATE_NAME_STRUCT; /* size: 0x0008 */

