typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _SEP_RM_LSA_CONNECTION_STATE
{
  /* 0x0000 */ void* LsaProcessHandle;
  /* 0x0004 */ void* LsaCommandPortHandle;
  /* 0x0008 */ void* SepRmThreadHandle;
  /* 0x000c */ void* RmCommandPortHandle;
  /* 0x0010 */ void* RmCommandServerPortHandle;
  /* 0x0014 */ void* LsaCommandPortSectionHandle;
  /* 0x0018 */ union _LARGE_INTEGER LsaCommandPortSectionSize;
  /* 0x0020 */ void* LsaViewPortMemory;
  /* 0x0024 */ void* RmViewPortMemory;
  /* 0x0028 */ long LsaCommandPortMemoryDelta;
  /* 0x002c */ unsigned char LsaCommandPortActive;
  /* 0x002d */ char __PADDING__[3];
} SEP_RM_LSA_CONNECTION_STATE, *PSEP_RM_LSA_CONNECTION_STATE; /* size: 0x0030 */

