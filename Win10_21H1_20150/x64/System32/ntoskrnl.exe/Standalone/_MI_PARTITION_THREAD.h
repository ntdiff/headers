typedef enum _MI_PARTITION_THREAD
{
  MiZeroPageThreadSlot = 0,
  MiRebuildLargePagesThreadSlot = 1,
  MiPartitionWorkingSetManagerSlot = 2,
  MiDereferenceSegmentThreadSlot = 3,
  MiModifiedPageWriterSlot = 4,
  MiMappedPageWriterSlot = 5,
  MiNumberOfPartitionThreads = 6,
} MI_PARTITION_THREAD, *PMI_PARTITION_THREAD;

