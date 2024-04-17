typedef struct _CERT_LOGOTYPE_DETAILS
{
  /* 0x0000 */ wchar_t* pwszMimeType;
  /* 0x0004 */ unsigned long cHashedUrl;
  /* 0x0008 */ struct _CERT_HASHED_URL* rgHashedUrl;
} CERT_LOGOTYPE_DETAILS, *PCERT_LOGOTYPE_DETAILS; /* size: 0x000c */

typedef struct _CERT_LOGOTYPE_AUDIO
{
  /* 0x0000 */ struct _CERT_LOGOTYPE_DETAILS LogotypeDetails;
  /* 0x000c */ struct _CERT_LOGOTYPE_AUDIO_INFO* pLogotypeAudioInfo;
} CERT_LOGOTYPE_AUDIO, *PCERT_LOGOTYPE_AUDIO; /* size: 0x0010 */

