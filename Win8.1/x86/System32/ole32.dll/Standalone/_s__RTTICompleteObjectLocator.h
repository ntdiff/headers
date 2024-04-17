typedef struct _s__RTTICompleteObjectLocator
{
  /* 0x0000 */ unsigned long signature;
  /* 0x0004 */ unsigned long offset;
  /* 0x0008 */ unsigned long cdOffset;
  /* 0x000c */ struct _TypeDescriptor* pTypeDescriptor;
  /* 0x0010 */ const struct _s__RTTIClassHierarchyDescriptor* pClassDescriptor;
} s__RTTICompleteObjectLocator, *Ps__RTTICompleteObjectLocator; /* size: 0x0014 */

