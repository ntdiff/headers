typedef struct _s_CatchableTypeArray
{
  /* 0x0000 */ int nCatchableTypes;
  /* 0x0004 */ const struct _s_CatchableType** arrayOfCatchableTypes /* zero-length array */;
} s_CatchableTypeArray, *Ps_CatchableTypeArray; /* size: 0x0004 */

