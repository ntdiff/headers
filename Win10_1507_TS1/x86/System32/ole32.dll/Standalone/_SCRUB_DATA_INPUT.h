typedef struct _SCRUB_DATA_INPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long MaximumIos;
  /* 0x000c */ unsigned long Reserved[17];
  /* 0x0050 */ unsigned char ResumeContext[816];
} SCRUB_DATA_INPUT, *PSCRUB_DATA_INPUT; /* size: 0x0380 */

