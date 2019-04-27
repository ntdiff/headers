typedef struct _DEVICE_DSM_DEFINITION
{
  /* 0x0000 */ unsigned long Action;
  /* 0x0004 */ unsigned char SingleRange;
  /* 0x0008 */ unsigned long ParameterBlockAlignment;
  /* 0x000c */ unsigned long ParameterBlockLength;
  /* 0x0010 */ unsigned char HasOutput;
  /* 0x0014 */ unsigned long OutputBlockAlignment;
  /* 0x0018 */ unsigned long OutputBlockLength;
} DEVICE_DSM_DEFINITION, *PDEVICE_DSM_DEFINITION; /* size: 0x001c */

