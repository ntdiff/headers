typedef struct _FILE_MEMORY_PARTITION_INFORMATION
{
  /* 0x0000 */ unsigned __int64 OwnerPartitionHandle;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned char NoCrossPartitionAccess;
        /* 0x0009 */ unsigned char Spare[3];
      }; /* size: 0x0004 */
      /* 0x0008 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x000c */ long __PADDING__[1];
} FILE_MEMORY_PARTITION_INFORMATION, *PFILE_MEMORY_PARTITION_INFORMATION; /* size: 0x0010 */

