typedef struct _DISCRIMINATEDUNION_TAG_VALUE
{
  /* 0x0000 */ unsigned char value[16];
  /* 0x0010 */ unsigned char valueSizeBytes;
} DISCRIMINATEDUNION_TAG_VALUE, *PDISCRIMINATEDUNION_TAG_VALUE; /* size: 0x0011 */

typedef struct _TI_GET_DISCRIMINATEDUNION_TAG_RANGES_PARAMS
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long Start;
  /* 0x0008 */ struct _DISCRIMINATEDUNION_TAG_VALUE Range[1];
  /* 0x0019 */ char __PADDING__[3];
} TI_GET_DISCRIMINATEDUNION_TAG_RANGES_PARAMS, *PTI_GET_DISCRIMINATEDUNION_TAG_RANGES_PARAMS; /* size: 0x001c */

