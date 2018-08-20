typedef struct _KALPC_HANDLE_DATA
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long ObjectType;
  /* 0x0008 */ struct _OB_DUPLICATE_OBJECT_STATE* DuplicateContext;
} KALPC_HANDLE_DATA, *PKALPC_HANDLE_DATA; /* size: 0x0010 */

