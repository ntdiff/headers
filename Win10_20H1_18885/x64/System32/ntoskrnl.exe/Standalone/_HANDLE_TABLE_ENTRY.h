typedef struct _EXHANDLE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long TagBits : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long Index : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ void* GenericHandleOverlay;
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EXHANDLE, *PEXHANDLE; /* size: 0x0008 */

typedef union _HANDLE_TABLE_ENTRY
{
  union
  {
    /* 0x0000 */ volatile __int64 VolatileLowValue;
    /* 0x0000 */ __int64 LowValue;
    struct
    {
      /* 0x0000 */ struct _HANDLE_TABLE_ENTRY_INFO* volatile InfoTable;
      union
      {
        /* 0x0008 */ __int64 HighValue;
        /* 0x0008 */ union _HANDLE_TABLE_ENTRY* NextFreeHandleEntry;
        /* 0x0008 */ struct _EXHANDLE LeafHandleValue;
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    /* 0x0000 */ __int64 RefCountField;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Unlocked : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 RefCnt : 16; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 Attributes : 3; /* bit position: 17 */
        /* 0x0000 */ unsigned __int64 ObjectPointerBits : 44; /* bit position: 20 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned long GrantedAccessBits : 25; /* bit position: 0 */
        /* 0x0008 */ unsigned long NoRightsUpgrade : 1; /* bit position: 25 */
        /* 0x0008 */ unsigned long Spare1 : 6; /* bit position: 26 */
      }; /* bitfield */
      /* 0x000c */ unsigned long Spare2;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} HANDLE_TABLE_ENTRY, *PHANDLE_TABLE_ENTRY; /* size: 0x0010 */

