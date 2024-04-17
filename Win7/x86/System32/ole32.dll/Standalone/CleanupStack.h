struct CleanupStack::memory_to_free
{
  /* 0x0000 */ void* pvMemory;
  /* 0x0004 */ class PMemoryAllocator* pAllocator;
}; /* size: 0x0008 */

struct CleanupStack::Block
{
  /* 0x0000 */ struct CleanupStack::memory_to_free mem[20];
  /* 0x00a0 */ unsigned long count;
  /* 0x00a4 */ struct CleanupStack::Block* prev;
  /* 0x00a8 */ struct CleanupStack::Block* next;
}; /* size: 0x00ac */

struct CleanupStack
{
  /* 0x0000 */ struct CleanupStack::Block m_first;
  /* 0x00ac */ struct CleanupStack::Block* m_last;
}; /* size: 0x00b0 */

