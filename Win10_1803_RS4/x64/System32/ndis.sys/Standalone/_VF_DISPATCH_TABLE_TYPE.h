typedef enum _VF_DISPATCH_TABLE_TYPE
{
  DispatchTableTypeWdm = 0,
  DispatchTableTypeWdf = 1,
  DispatchTableTypeNdis = 2,
  DispatchTableTypeXdv = 3,
  DispatchTableTypeTip = 4,
  MaximumDispatchTableType = 5,
} VF_DISPATCH_TABLE_TYPE, *PVF_DISPATCH_TABLE_TYPE;

