typedef struct _PROV_ENUMALGS_EX
{
  /* 0x0000 */ unsigned int aiAlgid;
  /* 0x0004 */ unsigned long dwDefaultLen;
  /* 0x0008 */ unsigned long dwMinLen;
  /* 0x000c */ unsigned long dwMaxLen;
  /* 0x0010 */ unsigned long dwProtocols;
  /* 0x0014 */ unsigned long dwNameLen;
  /* 0x0018 */ char szName[20];
  /* 0x002c */ unsigned long dwLongNameLen;
  /* 0x0030 */ char szLongName[40];
} PROV_ENUMALGS_EX, *PPROV_ENUMALGS_EX; /* size: 0x0058 */

