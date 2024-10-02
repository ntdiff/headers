typedef struct _MI_DBG_PATCH
{
  union
  {
    /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  } /* size: 0x0008 */ u1;
  union
  {
    union
    {
      /* 0x0008 */ unsigned long EntireField;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned long Pending : 1; /* bit position: 0 */
          /* 0x0008 */ unsigned long Reserved : 1; /* bit position: 1 */
          /* 0x0008 */ unsigned long Offset : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x000c */ unsigned long OriginalBytes;
  /* 0x0010 */ unsigned long NewBytes;
  /* 0x0014 */ unsigned long Padding;
} MI_DBG_PATCH, *PMI_DBG_PATCH; /* size: 0x0018 */

typedef struct _MI_DEBUGGER_STATE
{
  /* 0x0000 */ unsigned char TransientWrite;
  /* 0x0008 */ struct _MMPTE* DebugPtes[2];
  /* 0x0018 */ unsigned long PoisonedTb;
  /* 0x001c */ volatile long InDebugger;
  /* 0x0020 */ void* volatile Pfns[32];
  /* 0x0120 */ struct _MI_DBG_PATCH PatchBuffer[256];
  /* 0x1920 */ unsigned long PatchBufferInsertIndex;
  /* 0x1924 */ unsigned long PatchBufferRemoveIndex;
  /* 0x1928 */ struct _MI_DBG_PATCH PatchTableSpace[512];
  /* 0x4928 */ struct _MI_DBG_PATCH* PatchTable[512];
  /* 0x5928 */ volatile long PatchTableLock;
  /* 0x592c */ unsigned long PatchTableFreeEntry;
  /* 0x5930 */ unsigned long PatchTableEntryCount;
  /* 0x5934 */ long __PADDING__[1];
} MI_DEBUGGER_STATE, *PMI_DEBUGGER_STATE; /* size: 0x5938 */

