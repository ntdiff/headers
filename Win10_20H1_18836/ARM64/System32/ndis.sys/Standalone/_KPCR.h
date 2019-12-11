typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Elr_El1;
  /* 0x0008 */ unsigned int Spsr_El1;
  /* 0x0010 */ unsigned __int64 Tpidr_El0;
  /* 0x0018 */ unsigned __int64 Tpidrro_El0;
  /* 0x0020 */ unsigned __int64 Tpidr_El1;
  /* 0x0028 */ unsigned __int64 KernelBvr[8];
  /* 0x0068 */ unsigned long KernelBcr[8];
  /* 0x0088 */ unsigned __int64 KernelWvr[2];
  /* 0x0098 */ unsigned long KernelWcr[2];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00a0 */

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

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Cpsr;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 X0;
      /* 0x0010 */ unsigned __int64 X1;
      /* 0x0018 */ unsigned __int64 X2;
      /* 0x0020 */ unsigned __int64 X3;
      /* 0x0028 */ unsigned __int64 X4;
      /* 0x0030 */ unsigned __int64 X5;
      /* 0x0038 */ unsigned __int64 X6;
      /* 0x0040 */ unsigned __int64 X7;
      /* 0x0048 */ unsigned __int64 X8;
      /* 0x0050 */ unsigned __int64 X9;
      /* 0x0058 */ unsigned __int64 X10;
      /* 0x0060 */ unsigned __int64 X11;
      /* 0x0068 */ unsigned __int64 X12;
      /* 0x0070 */ unsigned __int64 X13;
      /* 0x0078 */ unsigned __int64 X14;
      /* 0x0080 */ unsigned __int64 X15;
      /* 0x0088 */ unsigned __int64 X16;
      /* 0x0090 */ unsigned __int64 X17;
      /* 0x0098 */ unsigned __int64 X18;
      /* 0x00a0 */ unsigned __int64 X19;
      /* 0x00a8 */ unsigned __int64 X20;
      /* 0x00b0 */ unsigned __int64 X21;
      /* 0x00b8 */ unsigned __int64 X22;
      /* 0x00c0 */ unsigned __int64 X23;
      /* 0x00c8 */ unsigned __int64 X24;
      /* 0x00d0 */ unsigned __int64 X25;
      /* 0x00d8 */ unsigned __int64 X26;
      /* 0x00e0 */ unsigned __int64 X27;
      /* 0x00e8 */ unsigned __int64 X28;
      /* 0x00f0 */ unsigned __int64 Fp;
      /* 0x00f8 */ unsigned __int64 Lr;
    }; /* size: 0x00f8 */
    /* 0x0008 */ unsigned __int64 X[31];
  }; /* size: 0x00f8 */
  /* 0x0100 */ unsigned __int64 Sp;
  /* 0x0108 */ unsigned __int64 Pc;
  /* 0x0110 */ union _ARM64_NT_NEON128 V[32];
  /* 0x0310 */ unsigned long Fpcr;
  /* 0x0314 */ unsigned long Fpsr;
  /* 0x0318 */ unsigned long Bcr[8];
  /* 0x0338 */ unsigned __int64 Bvr[8];
  /* 0x0378 */ unsigned long Wcr[2];
  /* 0x0380 */ unsigned __int64 Wvr[2];
} CONTEXT, *PCONTEXT; /* size: 0x0390 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00a0 */ struct _KARM64_ARCH_STATE ArchState;
  /* 0x0320 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x06b0 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned char LegacyNumber;
  /* 0x0001 */ unsigned char ReservedMustBeZero;
  /* 0x0002 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char ClockOwner;
  union
  {
    /* 0x0022 */ unsigned char PendingTickFlags;
    struct /* bitfield */
    {
      /* 0x0022 */ unsigned char PendingTick : 1; /* bit position: 0 */
      /* 0x0022 */ unsigned char PendingBackupTick : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0023 */ unsigned char IdleState;
  /* 0x0024 */ unsigned long Number;
  /* 0x0028 */ unsigned __int64 PrcbLock;
  /* 0x0030 */ char* PriorityState;
  /* 0x0040 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x06f0 */ unsigned short ProcessorModel;
  /* 0x06f2 */ unsigned short ProcessorRevision;
  /* 0x06f4 */ unsigned long MHz;
  /* 0x06f8 */ unsigned __int64 CycleCounterFrequency;
  /* 0x0700 */ unsigned __int64 HalReserved[10];
  /* 0x0750 */ unsigned short MinorVersion;
  /* 0x0752 */ unsigned short MajorVersion;
  /* 0x0754 */ unsigned char BuildType;
  /* 0x0755 */ unsigned char CpuVendor;
  /* 0x0756 */ unsigned char CoresPerPhysicalProcessor;
  /* 0x0757 */ unsigned char LogicalProcessorsPerCore;
  /* 0x0758 */ void* AcpiReserved;
  /* 0x0760 */ unsigned __int64 GroupSetMember;
  /* 0x0768 */ unsigned char Group;
  /* 0x0769 */ unsigned char GroupIndex;
  /* 0x076a */ char __PADDING__[6];
} KPRCB, *PKPRCB; /* size: 0x0770 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ void* TibPad0[2];
      /* 0x0010 */ void* Spare1;
      /* 0x0018 */ struct _KPCR* Self;
      /* 0x0020 */ void* PcrReserved0;
      /* 0x0028 */ struct _KSPIN_LOCK_QUEUE* LockArray;
      /* 0x0030 */ void* Used_Self;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
  /* 0x0038 */ unsigned char CurrentIrql;
  /* 0x0039 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x003a */ unsigned char Pad1[2];
  /* 0x003c */ unsigned short MajorVersion;
  /* 0x003e */ unsigned short MinorVersion;
  /* 0x0040 */ unsigned long StallScaleFactor;
  /* 0x0044 */ unsigned long SecondLevelCacheSize;
  union
  {
    /* 0x0048 */ unsigned short SoftwareInterruptPending;
    struct
    {
      /* 0x0048 */ unsigned char ApcInterrupt;
      /* 0x0049 */ unsigned char DispatchInterrupt;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x004a */ unsigned short InterruptPad;
  /* 0x004c */ unsigned char BtiMitigation;
  /* 0x004d */ unsigned char Pad2[3];
  /* 0x0050 */ unsigned __int64 PanicStorage[6];
  /* 0x0080 */ void* KdVersionBlock;
  /* 0x0088 */ void* HalReserved[14];
  /* 0x00f8 */ void* KvaUserModeTtbr1;
  /* 0x0100 */ void* Idt[256];
  /* 0x0900 */ void** IdtExt;
  /* 0x0908 */ void* PcrAlign[15];
  /* 0x0980 */ struct _KPRCB Prcb;
} KPCR, *PKPCR; /* size: 0x10f0 */

