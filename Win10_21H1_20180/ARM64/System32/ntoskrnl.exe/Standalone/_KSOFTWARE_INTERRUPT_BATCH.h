typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _KSOFTWARE_INTERRUPT_BATCH
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char TargetType;
  /* 0x0002 */ unsigned char ReservedBatchInProgress;
  /* 0x0003 */ unsigned char Spare;
  /* 0x0004 */ unsigned long SingleTargetIndex;
  /* 0x0008 */ struct _KAFFINITY_EX MultipleTargetAffinity;
  /* 0x00b0 */ unsigned __int64 Padding[12];
} KSOFTWARE_INTERRUPT_BATCH, *PKSOFTWARE_INTERRUPT_BATCH; /* size: 0x0110 */

