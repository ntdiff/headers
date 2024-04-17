typedef struct _s_ThrowInfo
{
  /* 0x0000 */ unsigned int attributes;
  /* 0x0004 */ int pmfnUnwind;
  /* 0x0008 */ int pForwardCompat;
  /* 0x000c */ int pCatchableTypeArray;
} s_ThrowInfo, *Ps_ThrowInfo; /* size: 0x0010 */

