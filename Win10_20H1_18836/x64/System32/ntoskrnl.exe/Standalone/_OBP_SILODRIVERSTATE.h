typedef struct _OBP_SYSTEM_DOS_DEVICE_STATE
{
  /* 0x0000 */ unsigned long GlobalDeviceMap;
  /* 0x0004 */ unsigned long LocalDeviceCount[26];
} OBP_SYSTEM_DOS_DEVICE_STATE, *POBP_SYSTEM_DOS_DEVICE_STATE; /* size: 0x006c */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _OBJECT_NAMESPACE_LOOKUPTABLE
{
  /* 0x0000 */ struct _LIST_ENTRY HashBuckets[37];
  /* 0x0250 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0258 */ unsigned long NumberOfPrivateSpaces;
  /* 0x025c */ long __PADDING__[1];
} OBJECT_NAMESPACE_LOOKUPTABLE, *POBJECT_NAMESPACE_LOOKUPTABLE; /* size: 0x0260 */

typedef struct _OBP_SILODRIVERSTATE
{
  /* 0x0000 */ struct _DEVICE_MAP* SystemDeviceMap;
  /* 0x0008 */ struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;
  /* 0x0078 */ struct _EX_PUSH_LOCK DeviceMapLock;
  /* 0x0080 */ struct _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;
} OBP_SILODRIVERSTATE, *POBP_SILODRIVERSTATE; /* size: 0x02e0 */

