typedef enum _SharedVirtualDiskSupportType
{
  SharedVirtualDisksUnsupported = 0,
  SharedVirtualDisksSupported = 1,
} SharedVirtualDiskSupportType, *PSharedVirtualDiskSupportType;

typedef enum _SharedVirtualDiskHandleState
{
  SharedVirtualDiskHandleStateNone = 0,
  SharedVirtualDiskHandleStateFileShared = 1,
  SharedVirtualDiskHandleStateHandleShared = 3,
} SharedVirtualDiskHandleState, *PSharedVirtualDiskHandleState;

typedef struct _SHARED_VIRTUAL_DISK_SUPPORT
{
  /* 0x0000 */ enum _SharedVirtualDiskSupportType SharedVirtualDiskSupport;
  /* 0x0004 */ enum _SharedVirtualDiskHandleState HandleState;
} SHARED_VIRTUAL_DISK_SUPPORT, *PSHARED_VIRTUAL_DISK_SUPPORT; /* size: 0x0008 */

