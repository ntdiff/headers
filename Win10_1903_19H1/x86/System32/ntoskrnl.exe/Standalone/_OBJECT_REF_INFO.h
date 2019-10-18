typedef struct _OBJECT_REF_STACK_INFO
{
  /* 0x0000 */ unsigned long Sequence;
  /* 0x0004 */ unsigned short Index;
  /* 0x0006 */ unsigned short NumTraces;
  /* 0x0008 */ unsigned long Tag;
} OBJECT_REF_STACK_INFO, *POBJECT_REF_STACK_INFO; /* size: 0x000c */

typedef struct _OBJECT_REF_INFO
{
  /* 0x0000 */ struct _OBJECT_HEADER* ObjectHeader;
  /* 0x0004 */ void* NextRef;
  /* 0x0008 */ unsigned char ImageFileName[16];
  /* 0x0018 */ unsigned short NextPos;
  /* 0x001a */ unsigned short MaxStacks;
  /* 0x001c */ struct _OBJECT_REF_STACK_INFO* StackInfo /* zero-length array */;
} OBJECT_REF_INFO, *POBJECT_REF_INFO; /* size: 0x001c */

