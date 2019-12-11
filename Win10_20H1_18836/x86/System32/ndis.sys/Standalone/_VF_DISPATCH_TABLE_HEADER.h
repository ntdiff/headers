typedef enum _VF_DISPATCH_TABLE_TYPE
{
  DispatchTableTypeWdm = 0,
  DispatchTableTypeWdf = 1,
  DispatchTableTypeNdis = 2,
  DispatchTableTypeXdv = 3,
  DispatchTableTypeTip = 4,
  MaximumDispatchTableType = 5,
} VF_DISPATCH_TABLE_TYPE, *PVF_DISPATCH_TABLE_TYPE;

typedef struct _VF_DISPATCH_TABLE_HEADER
{
  /* 0x0000 */ enum _VF_DISPATCH_TABLE_TYPE Type;
  /* 0x0004 */ unsigned long Size;
} VF_DISPATCH_TABLE_HEADER, *PVF_DISPATCH_TABLE_HEADER; /* size: 0x0008 */

