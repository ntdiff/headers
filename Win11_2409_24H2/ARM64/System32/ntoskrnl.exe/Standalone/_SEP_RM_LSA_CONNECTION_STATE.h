typedef struct _SEP_RM_LSA_CONNECTION_STATE
{
  /* 0x0000 */ void* LsaProcessHandle;
  /* 0x0008 */ void* LsaCommandPortHandle;
  /* 0x0010 */ void* SepRmThreadHandle;
  /* 0x0018 */ void* RmCommandPortHandle;
  /* 0x0020 */ void* RmCommandServerPortHandle;
  /* 0x0028 */ unsigned char LsaCommandPortActive;
  /* 0x0029 */ char __PADDING__[7];
} SEP_RM_LSA_CONNECTION_STATE, *PSEP_RM_LSA_CONNECTION_STATE; /* size: 0x0030 */

