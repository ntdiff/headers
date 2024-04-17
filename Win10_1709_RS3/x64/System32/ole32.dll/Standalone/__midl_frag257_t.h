typedef struct _NDR64_STRUCTURE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char HasPointerInfo : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char HasMemberInfo : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char HasConfArray : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char HasOrigPointerInfo : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char HasOrigMemberInfo : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char Reserved1 : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Reserved2 : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char Reserved3 : 1; /* bit position: 7 */
  }; /* bitfield */
} NDR64_STRUCTURE_FLAGS, *PNDR64_STRUCTURE_FLAGS; /* size: 0x0001 */

typedef struct _NDR64_STRUCTURE_HEADER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ struct _NDR64_STRUCTURE_FLAGS Flags;
  /* 0x0003 */ unsigned char Reserve;
  /* 0x0004 */ unsigned int MemorySize;
} NDR64_STRUCTURE_HEADER_FORMAT, *PNDR64_STRUCTURE_HEADER_FORMAT; /* size: 0x0008 */

typedef struct _NDR64_NO_REPEAT_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short Reserved1;
  /* 0x0004 */ unsigned int Reserved2;
} NDR64_NO_REPEAT_FORMAT, *PNDR64_NO_REPEAT_FORMAT; /* size: 0x0008 */

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

typedef struct __midl_frag257_t
{
  /* 0x0000 */ struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
  struct
  {
    /* 0x0008 */ struct _NDR64_NO_REPEAT_FORMAT frag1;
    /* 0x0010 */ struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
    /* 0x0018 */ struct _NDR64_POINTER_FORMAT frag3;
    /* 0x0028 */ struct _NDR64_NO_REPEAT_FORMAT frag4;
    /* 0x0030 */ struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
    /* 0x0038 */ struct _NDR64_POINTER_FORMAT frag6;
    /* 0x0048 */ unsigned char frag7;
    /* 0x0049 */ char __PADDING__[7];
  } /* size: 0x0048 */ frag2;
} _midl_frag257_t, *P_midl_frag257_t; /* size: 0x0050 */

