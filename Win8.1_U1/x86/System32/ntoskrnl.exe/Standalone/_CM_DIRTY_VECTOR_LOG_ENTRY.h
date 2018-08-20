typedef enum _CM_DIRTY_VECTOR_OPERATION
{
  DirtyVectorModified = 0,
  DirtyDataCaptureStart = 1,
  DirtyDataCaptureEnd = 2,
} CM_DIRTY_VECTOR_OPERATION, *PCM_DIRTY_VECTOR_OPERATION;

typedef struct _CM_DIRTY_VECTOR_LOG_ENTRY
{
  /* 0x0000 */ struct _ETHREAD* Thread;
  /* 0x0004 */ enum _CM_DIRTY_VECTOR_OPERATION Operation;
  union // _TAG_UNNAMED_2
  {
    union
    {
      struct // _TAG_UNNAMED_3
      {
        /* 0x0008 */ unsigned long Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct // _TAG_UNNAMED_4
      {
        /* 0x0008 */ unsigned long RangeCount;
        /* 0x000c */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct // _TAG_UNNAMED_5
      {
        /* 0x0008 */ unsigned long Context1;
        /* 0x000c */ unsigned long Context2;
      } /* size: 0x0008 */ Raw;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Data;
  /* 0x0010 */ void* Stack[7];
} CM_DIRTY_VECTOR_LOG_ENTRY, *PCM_DIRTY_VECTOR_LOG_ENTRY; /* size: 0x002c */

