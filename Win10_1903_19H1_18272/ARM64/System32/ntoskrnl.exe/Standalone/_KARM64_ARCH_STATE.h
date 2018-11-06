typedef struct _KARM64_ARCH_STATE
{
  /* 0x0000 */ unsigned __int64 Midr_El1;
  /* 0x0008 */ unsigned __int64 Sctlr_El1;
  /* 0x0010 */ unsigned __int64 Actlr_El1;
  /* 0x0018 */ unsigned __int64 Cpacr_El1;
  /* 0x0020 */ unsigned __int64 Tcr_El1;
  /* 0x0028 */ unsigned __int64 Ttbr0_El1;
  /* 0x0030 */ unsigned __int64 Ttbr1_El1;
  /* 0x0038 */ unsigned __int64 Esr_El1;
  /* 0x0040 */ unsigned __int64 Far_El1;
  /* 0x0048 */ unsigned __int64 Pmcr_El0;
  /* 0x0050 */ unsigned __int64 Pmcntenset_El0;
  /* 0x0058 */ unsigned __int64 Pmccntr_El0;
  /* 0x0060 */ unsigned __int64 Pmxevcntr_El0[31];
  /* 0x0158 */ unsigned __int64 Pmxevtyper_El0[31];
  /* 0x0250 */ unsigned __int64 Pmovsclr_El0;
  /* 0x0258 */ unsigned __int64 Pmselr_El0;
  /* 0x0260 */ unsigned __int64 Pmuserenr_El0;
  /* 0x0268 */ unsigned __int64 Mair_El1;
  /* 0x0270 */ unsigned __int64 Vbar_El1;
} KARM64_ARCH_STATE, *PKARM64_ARCH_STATE; /* size: 0x0278 */

