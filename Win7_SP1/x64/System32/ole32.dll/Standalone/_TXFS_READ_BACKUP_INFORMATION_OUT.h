typedef struct _TXFS_READ_BACKUP_INFORMATION_OUT
{
  union
  {
    /* 0x0000 */ unsigned long BufferLength;
    struct
    {
      /* 0x0000 */ unsigned char Buffer[1];
      /* 0x0001 */ char __PADDING__[3];
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} TXFS_READ_BACKUP_INFORMATION_OUT, *PTXFS_READ_BACKUP_INFORMATION_OUT; /* size: 0x0004 */

