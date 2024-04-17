typedef struct _UNIQUE_PROCESS_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 DontUse : 9; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 UniqueProcessKey : 48; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
  }; /* bitfield */
} UNIQUE_PROCESS_INFORMATION, *PUNIQUE_PROCESS_INFORMATION; /* size: 0x0008 */

