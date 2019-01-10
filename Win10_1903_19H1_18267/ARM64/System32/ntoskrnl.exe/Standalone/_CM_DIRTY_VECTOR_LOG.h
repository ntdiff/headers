typedef enum _CM_DIRTY_VECTOR_OPERATION
{
  DirtyVectorModified = 0,
  DirtyDataCaptureStart = 1,
  DirtyDataCaptureEnd = 2,
} CM_DIRTY_VECTOR_OPERATION, *PCM_DIRTY_VECTOR_OPERATION;

typedef struct _CM_DIRTY_VECTOR_LOG_ENTRY
{
  /* 0x0000 */ struct _ETHREAD* Thread;
  /* 0x0008 */ enum _CM_DIRTY_VECTOR_OPERATION Operation;
  union
  {
    union
    {
      struct
      {
        /* 0x000c */ unsigned long Start;
        /* 0x0010 */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct
      {
        /* 0x000c */ unsigned long RangeCount;
        /* 0x0010 */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct
      {
        /* 0x000c */ unsigned long Context1;
        /* 0x0010 */ unsigned long Context2;
      } /* size: 0x0008 */ Raw;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Data;
  /* 0x0018 */ void* Stack[6];
} CM_DIRTY_VECTOR_LOG_ENTRY, *PCM_DIRTY_VECTOR_LOG_ENTRY; /* size: 0x0048 */

typedef struct _CM_DIRTY_VECTOR_LOG
{
  /* 0x0000 */ volatile unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];
} CM_DIRTY_VECTOR_LOG, *PCM_DIRTY_VECTOR_LOG; /* size: 0x0488 */

