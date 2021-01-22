typedef struct _CO_SPECIFIC_PARAMETERS
{
  /* 0x0000 */ unsigned long ParamType;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned char Parameters[1];
  /* 0x0009 */ char __PADDING__[3];
} CO_SPECIFIC_PARAMETERS, *PCO_SPECIFIC_PARAMETERS; /* size: 0x000c */

typedef struct _CO_PVC
{
  /* 0x0000 */ void* NdisAfHandle;
  /* 0x0004 */ struct _CO_SPECIFIC_PARAMETERS PvcParameters;
} CO_PVC, *PCO_PVC; /* size: 0x0010 */

