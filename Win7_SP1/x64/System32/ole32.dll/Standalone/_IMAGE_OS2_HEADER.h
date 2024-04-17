typedef struct _IMAGE_OS2_HEADER
{
  /* 0x0000 */ unsigned short ne_magic;
  /* 0x0002 */ char ne_ver;
  /* 0x0003 */ char ne_rev;
  /* 0x0004 */ unsigned short ne_enttab;
  /* 0x0006 */ unsigned short ne_cbenttab;
  /* 0x0008 */ long ne_crc;
  /* 0x000c */ unsigned short ne_flags;
  /* 0x000e */ unsigned short ne_autodata;
  /* 0x0010 */ unsigned short ne_heap;
  /* 0x0012 */ unsigned short ne_stack;
  /* 0x0014 */ long ne_csip;
  /* 0x0018 */ long ne_sssp;
  /* 0x001c */ unsigned short ne_cseg;
  /* 0x001e */ unsigned short ne_cmod;
  /* 0x0020 */ unsigned short ne_cbnrestab;
  /* 0x0022 */ unsigned short ne_segtab;
  /* 0x0024 */ unsigned short ne_rsrctab;
  /* 0x0026 */ unsigned short ne_restab;
  /* 0x0028 */ unsigned short ne_modtab;
  /* 0x002a */ unsigned short ne_imptab;
  /* 0x002c */ long ne_nrestab;
  /* 0x0030 */ unsigned short ne_cmovent;
  /* 0x0032 */ unsigned short ne_align;
  /* 0x0034 */ unsigned short ne_cres;
  /* 0x0036 */ unsigned char ne_exetyp;
  /* 0x0037 */ unsigned char ne_flagsothers;
  /* 0x0038 */ unsigned short ne_pretthunks;
  /* 0x003a */ unsigned short ne_psegrefbytes;
  /* 0x003c */ unsigned short ne_swaparea;
  /* 0x003e */ unsigned short ne_expver;
} IMAGE_OS2_HEADER, *PIMAGE_OS2_HEADER; /* size: 0x0040 */

