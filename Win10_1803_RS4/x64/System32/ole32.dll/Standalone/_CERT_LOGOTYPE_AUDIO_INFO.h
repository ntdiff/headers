typedef struct _CERT_LOGOTYPE_AUDIO_INFO
{
  /* 0x0000 */ unsigned long dwFileSize;
  /* 0x0004 */ unsigned long dwPlayTime;
  /* 0x0008 */ unsigned long dwChannels;
  /* 0x000c */ unsigned long dwSampleRate;
  /* 0x0010 */ wchar_t* pwszLanguage;
} CERT_LOGOTYPE_AUDIO_INFO, *PCERT_LOGOTYPE_AUDIO_INFO; /* size: 0x0018 */

