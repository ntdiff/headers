typedef union _ARM64_NT_NEON128
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Low;
      /* 0x0008 */ __int64 High;
    }; /* size: 0x0010 */
    /* 0x0000 */ double D[2];
    /* 0x0000 */ float S[4];
    /* 0x0000 */ unsigned short H[8];
    /* 0x0000 */ unsigned char B[16];
  }; /* size: 0x0010 */
} ARM64_NT_NEON128, *PARM64_NT_NEON128; /* size: 0x0010 */

typedef struct _KARM64_VFP_STATE
{
  /* 0x0000 */ struct _KARM64_VFP_STATE* Link;
  /* 0x0008 */ unsigned long Fpcr;
  /* 0x000c */ unsigned long Fpsr;
  /* 0x0010 */ union _ARM64_NT_NEON128 V[32];
} KARM64_VFP_STATE, *PKARM64_VFP_STATE; /* size: 0x0210 */

