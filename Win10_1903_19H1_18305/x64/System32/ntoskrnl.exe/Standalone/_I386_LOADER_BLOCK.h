typedef struct _I386_LOADER_BLOCK
{
  /* 0x0000 */ void* CommonDataArea;
  /* 0x0008 */ unsigned long MachineType;
  /* 0x000c */ unsigned long VirtualBias;
} I386_LOADER_BLOCK, *PI386_LOADER_BLOCK; /* size: 0x0010 */

