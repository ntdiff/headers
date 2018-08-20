typedef union _MMVIEW_CONTROL_AREA
{
  union
  {
    /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Writable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ExceptionForInPageErrors : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Unused : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 UsedForControlArea : 61; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} MMVIEW_CONTROL_AREA, *PMMVIEW_CONTROL_AREA; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MMVIEW
{
  /* 0x0000 */ unsigned __int64 PteOffset;
  /* 0x0008 */ unsigned __int64 Entry;
  /* 0x0010 */ union _MMVIEW_CONTROL_AREA u1;
  /* 0x0018 */ struct _LIST_ENTRY ViewLinks;
  /* 0x0028 */ void* SessionViewVa;
  /* 0x0030 */ unsigned long SessionId;
  /* 0x0034 */ unsigned long SessionIdForGlobalSubsections;
} MMVIEW, *PMMVIEW; /* size: 0x0038 */

