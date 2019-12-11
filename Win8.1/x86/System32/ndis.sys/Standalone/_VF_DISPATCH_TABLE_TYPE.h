typedef enum _VF_DISPATCH_TABLE_TYPE
{
  DispatchTableTypeWdm = 0,
  DispatchTableTypeWdf = 1,
  DispatchTableTypeNdis = 2,
  DispatchTableTypeXdv = 3,
  MaximumDispatchTableType = 4,
} VF_DISPATCH_TABLE_TYPE, *PVF_DISPATCH_TABLE_TYPE;

