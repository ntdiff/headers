typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0008 */

typedef struct _MODWRITER_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long KeepForever : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Networked : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long IoPriority : 3; /* bit position: 2 */
    /* 0x0000 */ unsigned long ModifiedStoreWrite : 1; /* bit position: 5 */
  }; /* bitfield */
} MODWRITER_FLAGS, *PMODWRITER_FLAGS; /* size: 0x0004 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ struct _LIST_ENTRY ApcListEntry;
  union
  {
    struct
    {
      /* 0x0014 */ void* KernelRoutine /* function */;
      /* 0x0018 */ void* RundownRoutine /* function */;
      /* 0x001c */ void* NormalRoutine /* function */;
    }; /* size: 0x000c */
    /* 0x0014 */ void* Reserved[3];
  }; /* size: 0x000c */
  /* 0x0020 */ void* NormalContext;
  /* 0x0024 */ void* SystemArgument1;
  /* 0x0028 */ void* SystemArgument2;
  /* 0x002c */ char ApcStateIndex;
  /* 0x002d */ char ApcMode;
  /* 0x002e */ unsigned char Inserted;
  /* 0x002f */ char __PADDING__[1];
} KAPC, *PKAPC; /* size: 0x0030 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0004 */ short Size;
  /* 0x0006 */ short MdlFlags;
  /* 0x0008 */ struct _EPROCESS* Process;
  /* 0x000c */ void* MappedSystemVa;
  /* 0x0010 */ void* StartVa;
  /* 0x0014 */ unsigned long ByteCount;
  /* 0x0018 */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x001c */

typedef struct _MMMOD_WRITER_MDL_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  union
  {
    /* 0x0008 */ struct _IO_STATUS_BLOCK IoStatus;
  } /* size: 0x0008 */ u;
  /* 0x0010 */ struct _IRP* Irp;
  /* 0x0014 */ struct _MODWRITER_FLAGS u1;
  /* 0x0018 */ unsigned long StoreWriteRefCount;
  /* 0x001c */ struct _KAPC StoreWriteCompletionApc;
  /* 0x004c */ unsigned long ByteCount;
  /* 0x0050 */ unsigned long ChargedPages;
  /* 0x0054 */ struct _MMPAGING_FILE* PagingFile;
  /* 0x0058 */ struct _FILE_OBJECT* File;
  /* 0x005c */ struct _CONTROL_AREA* ControlArea;
  /* 0x0060 */ struct _ERESOURCE* FileResource;
  /* 0x0068 */ union _LARGE_INTEGER WriteOffset;
  /* 0x0070 */ union _LARGE_INTEGER IssueTime;
  /* 0x0078 */ struct _MI_PARTITION* Partition;
  /* 0x007c */ struct _MDL* PointerMdl;
  /* 0x0080 */ struct _MDL Mdl;
  /* 0x009c */ unsigned long Page[1];
} MMMOD_WRITER_MDL_ENTRY, *PMMMOD_WRITER_MDL_ENTRY; /* size: 0x00a0 */

