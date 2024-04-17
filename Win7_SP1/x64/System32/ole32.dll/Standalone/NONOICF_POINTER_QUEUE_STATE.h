class NONOICF_POINTER_QUEUE_STATE
{
  /* 0x0000 */ const int ItemsToAllocate;
  /* 0x0040 */ class NDR_POINTER_QUEUE_ELEMENT* pFreeList;
  /* 0x0048 */ struct NONOICF_POINTER_QUEUE_STATE::AllocationElement* pAllocationList;
}; /* size: 0x0050 */

