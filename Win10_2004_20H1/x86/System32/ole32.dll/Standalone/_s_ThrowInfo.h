typedef struct _s_ThrowInfo
{
  /* 0x0000 */ unsigned int attributes;
  /* 0x0004 */ void* pmfnUnwind /* function */;
  /* 0x0008 */ void* pForwardCompat /* function */;
  /* 0x000c */ const struct _s_CatchableTypeArray* pCatchableTypeArray;
} s_ThrowInfo, *Ps_ThrowInfo; /* size: 0x0010 */

