typedef struct _s__ThrowInfo
{
  /* 0x0000 */ unsigned int attributes;
  /* 0x0004 */ void* pmfnUnwind /* function */;
  /* 0x0008 */ void* pForwardCompat /* function */;
  /* 0x000c */ const struct _s__CatchableTypeArray* pCatchableTypeArray;
} s__ThrowInfo, *Ps__ThrowInfo; /* size: 0x0010 */

