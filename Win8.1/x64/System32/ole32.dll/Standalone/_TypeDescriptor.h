typedef struct _TypeDescriptor
{
  /* 0x0000 */ const void* pVFTable;
  /* 0x0008 */ void* spare;
  /* 0x0010 */ char* name /* zero-length array */;
} TypeDescriptor, *PTypeDescriptor; /* size: 0x0010 */

