struct PMD
{
  /* 0x0000 */ int mdisp;
  /* 0x0004 */ int pdisp;
  /* 0x0008 */ int vdisp;
}; /* size: 0x000c */

typedef struct _s_CatchableType
{
  /* 0x0000 */ unsigned int properties;
  /* 0x0004 */ struct TypeDescriptor* pType;
  /* 0x0008 */ struct PMD thisDisplacement;
  /* 0x0014 */ int sizeOrOffset;
  /* 0x0018 */ void* copyFunction /* function */;
} s_CatchableType, *Ps_CatchableType; /* size: 0x001c */

