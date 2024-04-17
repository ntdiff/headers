typedef struct _FILE_MEMORY_PARTITION_INFORMATION
{
  /* 0x0000 */ unsigned long OwnerPartitionHandle;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned char NoCrossPartitionAccess;
        /* 0x0005 */ unsigned char Spare[3];
      }; /* size: 0x0004 */
      /* 0x0004 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
} FILE_MEMORY_PARTITION_INFORMATION, *PFILE_MEMORY_PARTITION_INFORMATION; /* size: 0x0008 */

