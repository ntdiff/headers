typedef struct _NDR64_ARRAY_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char HasPointerInfo : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char HasElementInfo : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char IsMultiDimensional : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char IsArrayofStrings : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Reserved1 : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char Reserved2 : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Reserved3 : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char Reserved4 : 1; /* bit position: 7 */
  }; /* bitfield */
} NDR64_ARRAY_FLAGS, *PNDR64_ARRAY_FLAGS; /* size: 0x0001 */

typedef struct _NDR64_FIX_ARRAY_HEADER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ struct _NDR64_ARRAY_FLAGS Flags;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned int TotalSize;
} NDR64_FIX_ARRAY_HEADER_FORMAT, *PNDR64_FIX_ARRAY_HEADER_FORMAT; /* size: 0x0008 */

typedef struct __midl_frag1641_t
{
  /* 0x0000 */ struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
} _midl_frag1641_t, *P_midl_frag1641_t; /* size: 0x0008 */

