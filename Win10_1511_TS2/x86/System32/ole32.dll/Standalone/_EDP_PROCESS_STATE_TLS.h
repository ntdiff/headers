typedef struct _EDP_PROCESS_STATE
{
  /* 0x0000 */ unsigned char data[32];
} EDP_PROCESS_STATE, *PEDP_PROCESS_STATE; /* size: 0x0020 */

typedef struct _EDP_PROCESS_STATE_TLS
{
  /* 0x0000 */ struct _EDP_PROCESS_STATE EDPProcessState;
  /* 0x0020 */ unsigned long TlsIndex;
} EDP_PROCESS_STATE_TLS, *PEDP_PROCESS_STATE_TLS; /* size: 0x0024 */

