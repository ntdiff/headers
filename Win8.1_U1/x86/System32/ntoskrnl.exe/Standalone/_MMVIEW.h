typedef union _MMVIEW_CONTROL_AREA
{
  union
  {
    /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Writable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ExceptionForInPageErrors : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Unused : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long UsedForControlArea : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MMVIEW_CONTROL_AREA, *PMMVIEW_CONTROL_AREA; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MMVIEW
{
  /* 0x0000 */ unsigned __int64 PteOffset;
  /* 0x0008 */ unsigned long Entry;
  /* 0x000c */ union _MMVIEW_CONTROL_AREA u1;
  /* 0x0010 */ struct _LIST_ENTRY ViewLinks;
  /* 0x0018 */ void* SessionViewVa;
  /* 0x001c */ unsigned long SessionId;
  /* 0x0020 */ unsigned long SessionIdForGlobalSubsections;
  /* 0x0024 */ long __PADDING__[1];
} MMVIEW, *PMMVIEW; /* size: 0x0028 */

