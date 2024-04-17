typedef struct _MEMORY_REGION_INFORMATION
{
  /* 0x0000 */ void* AllocationBase;
  /* 0x0008 */ unsigned long AllocationProtect;
  union
  {
    /* 0x000c */ unsigned long RegionType;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long Private : 1; /* bit position: 0 */
      /* 0x000c */ unsigned long MappedDataFile : 1; /* bit position: 1 */
      /* 0x000c */ unsigned long MappedImage : 1; /* bit position: 2 */
      /* 0x000c */ unsigned long MappedPageFile : 1; /* bit position: 3 */
      /* 0x000c */ unsigned long MappedPhysical : 1; /* bit position: 4 */
      /* 0x000c */ unsigned long DirectMapped : 1; /* bit position: 5 */
      /* 0x000c */ unsigned long SoftwareEnclave : 1; /* bit position: 6 */
      /* 0x000c */ unsigned long PageSize64K : 1; /* bit position: 7 */
      /* 0x000c */ unsigned long PlaceholderReservation : 1; /* bit position: 8 */
      /* 0x000c */ unsigned long Reserved : 23; /* bit position: 9 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0010 */ unsigned __int64 RegionSize;
  /* 0x0018 */ unsigned __int64 CommitSize;
  /* 0x0020 */ unsigned __int64 PartitionId;
} MEMORY_REGION_INFORMATION, *PMEMORY_REGION_INFORMATION; /* size: 0x0028 */

