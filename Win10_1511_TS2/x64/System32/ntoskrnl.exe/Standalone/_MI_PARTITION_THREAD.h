typedef enum _MI_PARTITION_THREAD
{
  MiModifiedPageWriteSlot = 0,
  MiDereferenceSegmentThreadSlot = 1,
  MiZeroPageThreadSlot = 2,
  MiPartitionWorkingSetManagerSlot = 3,
  MiMappedPageWriterSlot = 4,
  MiNumberOfPartitionThreads = 5,
} MI_PARTITION_THREAD, *PMI_PARTITION_THREAD;

