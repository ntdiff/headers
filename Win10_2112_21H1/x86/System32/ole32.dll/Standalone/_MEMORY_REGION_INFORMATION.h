typedef struct _MEMORY_REGION_INFORMATION
{
  /* 0x0000 */ void* AllocationBase;
  /* 0x0004 */ unsigned long AllocationProtect;
  union
  {
    /* 0x0008 */ unsigned long RegionType;
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long Private : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long MappedDataFile : 1; /* bit position: 1 */
      /* 0x0008 */ unsigned long MappedImage : 1; /* bit position: 2 */
      /* 0x0008 */ unsigned long MappedPageFile : 1; /* bit position: 3 */
      /* 0x0008 */ unsigned long MappedPhysical : 1; /* bit position: 4 */
      /* 0x0008 */ unsigned long DirectMapped : 1; /* bit position: 5 */
      /* 0x0008 */ unsigned long SoftwareEnclave : 1; /* bit position: 6 */
      /* 0x0008 */ unsigned long PageSize64K : 1; /* bit position: 7 */
      /* 0x0008 */ unsigned long PlaceholderReservation : 1; /* bit position: 8 */
      /* 0x0008 */ unsigned long Reserved : 23; /* bit position: 9 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long RegionSize;
  /* 0x0010 */ unsigned long CommitSize;
  /* 0x0014 */ unsigned long PartitionId;
  /* 0x0018 */ unsigned long NodePreference;
} MEMORY_REGION_INFORMATION, *PMEMORY_REGION_INFORMATION; /* size: 0x001c */

