class NONOICF_POINTER_QUEUE_STATE
{
  /* 0x0000 */ const int ItemsToAllocate;
  /* 0x0020 */ class NDR_POINTER_QUEUE_ELEMENT* pFreeList;
  /* 0x0024 */ struct NONOICF_POINTER_QUEUE_STATE::AllocationElement* pAllocationList;
}; /* size: 0x0028 */

