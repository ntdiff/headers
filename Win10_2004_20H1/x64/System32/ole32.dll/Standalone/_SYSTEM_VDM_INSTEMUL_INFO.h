typedef struct _SYSTEM_VDM_INSTEMUL_INFO
{
  /* 0x0000 */ unsigned long SegmentNotPresent;
  /* 0x0004 */ unsigned long VdmOpcode0F;
  /* 0x0008 */ unsigned long OpcodeESPrefix;
  /* 0x000c */ unsigned long OpcodeCSPrefix;
  /* 0x0010 */ unsigned long OpcodeSSPrefix;
  /* 0x0014 */ unsigned long OpcodeDSPrefix;
  /* 0x0018 */ unsigned long OpcodeFSPrefix;
  /* 0x001c */ unsigned long OpcodeGSPrefix;
  /* 0x0020 */ unsigned long OpcodeOPER32Prefix;
  /* 0x0024 */ unsigned long OpcodeADDR32Prefix;
  /* 0x0028 */ unsigned long OpcodeINSB;
  /* 0x002c */ unsigned long OpcodeINSW;
  /* 0x0030 */ unsigned long OpcodeOUTSB;
  /* 0x0034 */ unsigned long OpcodeOUTSW;
  /* 0x0038 */ unsigned long OpcodePUSHF;
  /* 0x003c */ unsigned long OpcodePOPF;
  /* 0x0040 */ unsigned long OpcodeINTnn;
  /* 0x0044 */ unsigned long OpcodeINTO;
  /* 0x0048 */ unsigned long OpcodeIRET;
  /* 0x004c */ unsigned long OpcodeINBimm;
  /* 0x0050 */ unsigned long OpcodeINWimm;
  /* 0x0054 */ unsigned long OpcodeOUTBimm;
  /* 0x0058 */ unsigned long OpcodeOUTWimm;
  /* 0x005c */ unsigned long OpcodeINB;
  /* 0x0060 */ unsigned long OpcodeINW;
  /* 0x0064 */ unsigned long OpcodeOUTB;
  /* 0x0068 */ unsigned long OpcodeOUTW;
  /* 0x006c */ unsigned long OpcodeLOCKPrefix;
  /* 0x0070 */ unsigned long OpcodeREPNEPrefix;
  /* 0x0074 */ unsigned long OpcodeREPPrefix;
  /* 0x0078 */ unsigned long OpcodeHLT;
  /* 0x007c */ unsigned long OpcodeCLI;
  /* 0x0080 */ unsigned long OpcodeSTI;
  /* 0x0084 */ unsigned long BopCount;
} SYSTEM_VDM_INSTEMUL_INFO, *PSYSTEM_VDM_INSTEMUL_INFO; /* size: 0x0088 */

