typedef struct _KiIoAccessMap
{
  /* 0x0000 */ unsigned char DirectionMap[32];
  /* 0x0020 */ unsigned char IoMap[8196];
} KiIoAccessMap, *PKiIoAccessMap; /* size: 0x2024 */

typedef struct _KTSS
{
  /* 0x0000 */ unsigned short Backlink;
  /* 0x0002 */ unsigned short Reserved0;
  /* 0x0004 */ unsigned long Esp0;
  /* 0x0008 */ unsigned short Ss0;
  /* 0x000a */ unsigned short Reserved1;
  /* 0x000c */ unsigned long NotUsed1[4];
  /* 0x001c */ unsigned long CR3;
  /* 0x0020 */ unsigned long Eip;
  /* 0x0024 */ unsigned long EFlags;
  /* 0x0028 */ unsigned long Eax;
  /* 0x002c */ unsigned long Ecx;
  /* 0x0030 */ unsigned long Edx;
  /* 0x0034 */ unsigned long Ebx;
  /* 0x0038 */ unsigned long Esp;
  /* 0x003c */ unsigned long Ebp;
  /* 0x0040 */ unsigned long Esi;
  /* 0x0044 */ unsigned long Edi;
  /* 0x0048 */ unsigned short Es;
  /* 0x004a */ unsigned short Reserved2;
  /* 0x004c */ unsigned short Cs;
  /* 0x004e */ unsigned short Reserved3;
  /* 0x0050 */ unsigned short Ss;
  /* 0x0052 */ unsigned short Reserved4;
  /* 0x0054 */ unsigned short Ds;
  /* 0x0056 */ unsigned short Reserved5;
  /* 0x0058 */ unsigned short Fs;
  /* 0x005a */ unsigned short Reserved6;
  /* 0x005c */ unsigned short Gs;
  /* 0x005e */ unsigned short Reserved7;
  /* 0x0060 */ unsigned short LDT;
  /* 0x0062 */ unsigned short Reserved8;
  /* 0x0064 */ unsigned short Flags;
  /* 0x0066 */ unsigned short IoMapBase;
  /* 0x0068 */ struct _KiIoAccessMap IoMaps[1];
  /* 0x208c */ unsigned char IntDirectionMap[32];
} KTSS, *PKTSS; /* size: 0x20ac */

