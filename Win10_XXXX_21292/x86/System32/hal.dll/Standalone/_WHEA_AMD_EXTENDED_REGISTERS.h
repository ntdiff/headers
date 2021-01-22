typedef struct _WHEA_AMD_EXTENDED_REGISTERS
{
  /* 0x0000 */ unsigned __int64 IPID;
  /* 0x0008 */ unsigned __int64 SYND;
  /* 0x0010 */ unsigned __int64 CONFIG;
  /* 0x0018 */ unsigned __int64 DESTAT;
  /* 0x0020 */ unsigned __int64 DEADDR;
  /* 0x0028 */ unsigned __int64 MISC1;
  /* 0x0030 */ unsigned __int64 MISC2;
  /* 0x0038 */ unsigned __int64 MISC3;
  /* 0x0040 */ unsigned __int64 MISC4;
  /* 0x0048 */ unsigned __int64 RasCap;
  /* 0x0050 */ unsigned __int64 Reserved[14];
} WHEA_AMD_EXTENDED_REGISTERS, *PWHEA_AMD_EXTENDED_REGISTERS; /* size: 0x00c0 */

