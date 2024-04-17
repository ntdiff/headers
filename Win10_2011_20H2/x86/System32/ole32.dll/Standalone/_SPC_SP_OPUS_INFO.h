typedef struct _SPC_SP_OPUS_INFO
{
  /* 0x0000 */ const wchar_t* pwszProgramName;
  /* 0x0004 */ struct SPC_LINK_* pMoreInfo;
  /* 0x0008 */ struct SPC_LINK_* pPublisherInfo;
} SPC_SP_OPUS_INFO, *PSPC_SP_OPUS_INFO; /* size: 0x000c */

