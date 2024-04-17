typedef struct _OBJECT_TYPE_LIST
{
  /* 0x0000 */ unsigned short Level;
  /* 0x0002 */ unsigned short Sbz;
  /* 0x0004 */ struct _GUID* ObjectType;
} OBJECT_TYPE_LIST, *POBJECT_TYPE_LIST; /* size: 0x0008 */

