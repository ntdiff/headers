typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x000c */ unsigned short AllocationProcessorNumber;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef struct _MI_PAGEFILE_TRACES
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned char PagefileNumber;
  /* 0x0005 */ unsigned char Priority;
  /* 0x0006 */ unsigned char IrpPriority;
  /* 0x0007 */ unsigned char ReservationWrite;
  /* 0x0008 */ unsigned __int64 CurrentTime;
  /* 0x0010 */ unsigned __int64 AvailablePages;
  /* 0x0018 */ unsigned __int64 ModifiedPagesTotal;
  /* 0x0020 */ unsigned __int64 ModifiedPagefilePages;
  /* 0x0028 */ unsigned __int64 ModifiedNoWritePages;
  /* 0x0030 */ unsigned __int64 ModifiedPagefileNoReservationPages;
  /* 0x0038 */ unsigned __int64 ModifiedPageFileNoReservationCompressPages;
  /* 0x0040 */ unsigned __int64 ModifiedPagefileReservationPages;
  struct
  {
    /* 0x0048 */ struct _MDL Mdl;
    /* 0x0078 */ unsigned __int64 Page[1];
  } /* size: 0x0038 */ LocalMdl;
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0080 */

