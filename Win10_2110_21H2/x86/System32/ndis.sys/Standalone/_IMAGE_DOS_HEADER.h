typedef struct _IMAGE_DOS_HEADER
{
  /* 0x0000 */ unsigned short e_magic;
  /* 0x0002 */ unsigned short e_cblp;
  /* 0x0004 */ unsigned short e_cp;
  /* 0x0006 */ unsigned short e_crlc;
  /* 0x0008 */ unsigned short e_cparhdr;
  /* 0x000a */ unsigned short e_minalloc;
  /* 0x000c */ unsigned short e_maxalloc;
  /* 0x000e */ unsigned short e_ss;
  /* 0x0010 */ unsigned short e_sp;
  /* 0x0012 */ unsigned short e_csum;
  /* 0x0014 */ unsigned short e_ip;
  /* 0x0016 */ unsigned short e_cs;
  /* 0x0018 */ unsigned short e_lfarlc;
  /* 0x001a */ unsigned short e_ovno;
  /* 0x001c */ unsigned short e_res[4];
  /* 0x0024 */ unsigned short e_oemid;
  /* 0x0026 */ unsigned short e_oeminfo;
  /* 0x0028 */ unsigned short e_res2[10];
  /* 0x003c */ long e_lfanew;
} IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER; /* size: 0x0040 */

