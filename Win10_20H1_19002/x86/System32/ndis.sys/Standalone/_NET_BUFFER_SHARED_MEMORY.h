typedef struct _NET_BUFFER_SHARED_MEMORY
{
  /* 0x0000 */ struct _NET_BUFFER_SHARED_MEMORY* NextSharedMemorySegment;
  /* 0x0004 */ unsigned long SharedMemoryFlags;
  /* 0x0008 */ void* SharedMemoryHandle;
  /* 0x000c */ unsigned long SharedMemoryOffset;
  /* 0x0010 */ unsigned long SharedMemoryLength;
} NET_BUFFER_SHARED_MEMORY, *PNET_BUFFER_SHARED_MEMORY; /* size: 0x0014 */

