typedef struct _PORT_VIEW
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ void* SectionHandle;
  /* 0x0010 */ unsigned long SectionOffset;
  /* 0x0018 */ unsigned __int64 ViewSize;
  /* 0x0020 */ void* ViewBase;
  /* 0x0028 */ void* ViewRemoteBase;
} PORT_VIEW, *PPORT_VIEW; /* size: 0x0030 */

