struct CleanupStack::memory_to_free
{
  /* 0x0000 */ void* pvMemory;
  /* 0x0008 */ class PMemoryAllocator* pAllocator;
}; /* size: 0x0010 */

struct CleanupStack::Block
{
  /* 0x0000 */ struct CleanupStack::memory_to_free mem[20];
  /* 0x0140 */ unsigned long count;
  /* 0x0148 */ struct CleanupStack::Block* prev;
  /* 0x0150 */ struct CleanupStack::Block* next;
}; /* size: 0x0158 */

struct CleanupStack
{
  /* 0x0000 */ struct CleanupStack::Block m_first;
  /* 0x0158 */ struct CleanupStack::Block* m_last;
}; /* size: 0x0160 */

