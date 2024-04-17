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

typedef struct _NDR64_BOGUS_ARRAY_HEADER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ struct _NDR64_ARRAY_FLAGS Flags;
  /* 0x0003 */ unsigned char NumberDims;
  /* 0x0004 */ unsigned int NumberElements;
  /* 0x0008 */ const void* Element;
} NDR64_BOGUS_ARRAY_HEADER_FORMAT, *PNDR64_BOGUS_ARRAY_HEADER_FORMAT; /* size: 0x0010 */

typedef struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT
{
  /* 0x0000 */ struct _NDR64_BOGUS_ARRAY_HEADER_FORMAT FixedArrayFormat;
  /* 0x0010 */ const void* ConfDescription;
  /* 0x0018 */ const void* VarDescription;
  /* 0x0020 */ const void* OffsetDescription;
} NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT, *PNDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT; /* size: 0x0028 */

typedef struct __midl_frag1733_t
{
  /* 0x0000 */ struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
} _midl_frag1733_t, *P_midl_frag1733_t; /* size: 0x0028 */

