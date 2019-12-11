typedef struct _DOT11_RSN_REKEY_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char KCK[16];
  /* 0x0014 */ unsigned char KEK[16];
  /* 0x0028 */ unsigned __int64 KeyReplayCounter;
} DOT11_RSN_REKEY_PARAMETERS, *PDOT11_RSN_REKEY_PARAMETERS; /* size: 0x0030 */

