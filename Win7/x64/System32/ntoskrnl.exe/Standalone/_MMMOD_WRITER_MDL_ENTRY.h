typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef struct _MMMOD_WRITER_MDL_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  union // _TAG_UNNAMED_13
  {
    /* 0x0010 */ struct _IO_STATUS_BLOCK IoStatus;
  } /* size: 0x0010 */ u;
  /* 0x0020 */ struct _IRP* Irp;
  union // _TAG_UNNAMED_14
  {
    /* 0x0028 */ unsigned __int64 KeepForever;
  } /* size: 0x0008 */ u1;
  /* 0x0030 */ struct _MMPAGING_FILE* PagingFile;
  /* 0x0038 */ struct _FILE_OBJECT* File;
  /* 0x0040 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0048 */ struct _ERESOURCE* FileResource;
  /* 0x0050 */ union _LARGE_INTEGER WriteOffset;
  /* 0x0058 */ union _LARGE_INTEGER IssueTime;
  /* 0x0060 */ struct _MDL* PointerMdl;
  /* 0x0068 */ struct _MDL Mdl;
  /* 0x0098 */ unsigned __int64 Page[1];
} MMMOD_WRITER_MDL_ENTRY, *PMMMOD_WRITER_MDL_ENTRY; /* size: 0x00a0 */

