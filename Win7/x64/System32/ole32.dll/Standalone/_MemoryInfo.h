typedef struct _MemoryInfo
{
  /* 0x0000 */ unsigned short MemorySize;
  /* 0x0002 */ unsigned short MemoryAlignment;
  /* 0x0004 */ unsigned short WireSize;
  /* 0x0006 */ unsigned short WireAlignment;
} MemoryInfo, *PMemoryInfo; /* size: 0x0008 */

