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

typedef struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ struct _NDR64_ARRAY_FLAGS Flags;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned int ElementSize;
  /* 0x0008 */ const void* ConfDescriptor;
  /* 0x0010 */ const void* VarDescriptor;
} NDR64_CONF_VAR_ARRAY_HEADER_FORMAT, *PNDR64_CONF_VAR_ARRAY_HEADER_FORMAT; /* size: 0x0018 */

typedef struct _NDR64_POINTER_REPEAT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SetCorrMark : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved : 7; /* bit position: 1 */
  }; /* bitfield */
} NDR64_POINTER_REPEAT_FLAGS, *PNDR64_POINTER_REPEAT_FLAGS; /* size: 0x0001 */

typedef struct _NDR64_REPEAT_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ struct _NDR64_POINTER_REPEAT_FLAGS Flags;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned int Increment;
  /* 0x0008 */ unsigned int OffsetToArray;
  /* 0x000c */ unsigned int NumberOfPointers;
} NDR64_REPEAT_FORMAT, *PNDR64_REPEAT_FORMAT; /* size: 0x0010 */

typedef struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT
{
  /* 0x0000 */ unsigned int Offset;
  /* 0x0004 */ unsigned int Reserved;
} NDR64_POINTER_INSTANCE_HEADER_FORMAT, *PNDR64_POINTER_INSTANCE_HEADER_FORMAT; /* size: 0x0008 */

typedef struct _NDR64_POINTER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0008 */ const void* Pointee;
} NDR64_POINTER_FORMAT, *PNDR64_POINTER_FORMAT; /* size: 0x0010 */

typedef struct __midl_frag37_t
{
  /* 0x0000 */ struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT frag1;
  struct
  {
    /* 0x0018 */ struct _NDR64_REPEAT_FORMAT frag1;
    struct
    {
      /* 0x0028 */ struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
      /* 0x0030 */ struct _NDR64_POINTER_FORMAT frag2;
    } /* size: 0x0018 */ frag2;
    /* 0x0040 */ unsigned char frag3;
    /* 0x0041 */ char __PADDING__[7];
  } /* size: 0x0030 */ frag2;
} _midl_frag37_t, *P_midl_frag37_t; /* size: 0x0048 */

