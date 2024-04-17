typedef struct _PORT_VIEW
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ void* SectionHandle;
  /* 0x0008 */ unsigned long SectionOffset;
  /* 0x000c */ unsigned long ViewSize;
  /* 0x0010 */ void* ViewBase;
  /* 0x0014 */ void* ViewRemoteBase;
} PORT_VIEW, *PPORT_VIEW; /* size: 0x0018 */

