typedef struct _PMD
{
  /* 0x0000 */ int mdisp;
  /* 0x0004 */ int pdisp;
  /* 0x0008 */ int vdisp;
} PMD, *PPMD; /* size: 0x000c */

typedef struct _s__RTTIBaseClassDescriptor2
{
  /* 0x0000 */ struct _TypeDescriptor* pTypeDescriptor;
  /* 0x0004 */ unsigned long numContainedBases;
  /* 0x0008 */ struct _PMD where;
  /* 0x0014 */ unsigned long attributes;
  /* 0x0018 */ const struct _s__RTTIClassHierarchyDescriptor* pClassDescriptor;
} s__RTTIBaseClassDescriptor2, *Ps__RTTIBaseClassDescriptor2; /* size: 0x001c */

