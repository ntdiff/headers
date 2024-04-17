typedef enum _SharedVirtualDiskSupportType
{
  SharedVirtualDisksUnsupported = 0,
  SharedVirtualDisksSupported = 1,
  SharedVirtualDiskSnapshotsSupported = 3,
  SharedVirtualDiskCDPSnapshotsSupported = 7,
} SharedVirtualDiskSupportType, *PSharedVirtualDiskSupportType;

