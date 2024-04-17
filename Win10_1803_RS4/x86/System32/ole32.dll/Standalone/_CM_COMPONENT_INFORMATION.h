typedef struct _DEVICE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Failed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Removable : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long ConsoleIn : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long ConsoleOut : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Input : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Output : 1; /* bit position: 6 */
  }; /* bitfield */
} DEVICE_FLAGS, *PDEVICE_FLAGS; /* size: 0x0004 */

typedef struct _CM_COMPONENT_INFORMATION
{
  /* 0x0000 */ struct _DEVICE_FLAGS Flags;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long Key;
  /* 0x000c */ unsigned long AffinityMask;
} CM_COMPONENT_INFORMATION, *PCM_COMPONENT_INFORMATION; /* size: 0x0010 */

