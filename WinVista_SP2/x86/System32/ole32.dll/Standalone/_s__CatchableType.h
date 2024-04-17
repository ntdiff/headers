typedef struct _PMD
{
  /* 0x0000 */ int mdisp;
  /* 0x0004 */ int pdisp;
  /* 0x0008 */ int vdisp;
} PMD, *PPMD; /* size: 0x000c */

typedef struct _s__CatchableType
{
  /* 0x0000 */ unsigned int properties;
  /* 0x0004 */ struct _TypeDescriptor* pType;
  /* 0x0008 */ struct _PMD thisDisplacement;
  /* 0x0014 */ int sizeOrOffset;
  /* 0x0018 */ void* copyFunction /* function */;
} s__CatchableType, *Ps__CatchableType; /* size: 0x001c */

