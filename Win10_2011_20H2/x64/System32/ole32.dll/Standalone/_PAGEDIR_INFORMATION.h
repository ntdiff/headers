typedef struct _PAGEDIR_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 DontUse : 9; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageDirectoryBase : 48; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
  }; /* bitfield */
} PAGEDIR_INFORMATION, *PPAGEDIR_INFORMATION; /* size: 0x0008 */

