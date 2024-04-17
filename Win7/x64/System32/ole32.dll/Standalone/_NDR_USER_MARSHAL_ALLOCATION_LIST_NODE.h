typedef struct _NDR_USER_MARSHAL_ALLOCATION_LIST_NODE
{
  /* 0x0000 */ unsigned char** ppMemory;
  /* 0x0008 */ unsigned char* pMemory;
  /* 0x0010 */ const unsigned char* pFormat;
  /* 0x0018 */ unsigned char fIsNDR64;
  /* 0x0020 */ struct _NDR_USER_MARSHAL_ALLOCATION_LIST_NODE* pNext;
} NDR_USER_MARSHAL_ALLOCATION_LIST_NODE, *PNDR_USER_MARSHAL_ALLOCATION_LIST_NODE; /* size: 0x0028 */

