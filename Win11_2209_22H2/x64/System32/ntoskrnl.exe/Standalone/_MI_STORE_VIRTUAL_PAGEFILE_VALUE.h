typedef enum _MI_STORE_VIRTUAL_PAGEFILE_VALUE
{
  MiStoreVirtualPagefileValueInvalid = 0,
  MiStoreVirtualPagefileValueStart = 2,
  MiStoreVirtualPagefileSwap = 2,
  MiStoreVirtualPagefileCompress = 3,
  MiStoreVirtualPagefileNoCompress = 4,
  MiStoreVirtualPagefileMax = 5,
} MI_STORE_VIRTUAL_PAGEFILE_VALUE, *PMI_STORE_VIRTUAL_PAGEFILE_VALUE;

