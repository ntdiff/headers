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
  /* 0x0008 */ void* NextRef;
  /* 0x0010 */ unsigned char ImageFileName[16];
  /* 0x0020 */ unsigned short NextPos;
  /* 0x0022 */ unsigned short MaxStacks;
  union
  {
    /* 0x0024 */ struct _OBJECT_REF_STACK_INFO* StackInfo /* zero-length array */;
    /* 0x0024 */ long __PADDING__[1];
  }; /* size: 0x0004 */
} OBJECT_REF_INFO, *POBJECT_REF_INFO; /* size: 0x0028 */

