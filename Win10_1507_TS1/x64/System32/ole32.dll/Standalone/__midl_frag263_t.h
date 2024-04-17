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

typedef struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ struct _NDR64_STRUCTURE_FLAGS Flags;
  /* 0x0003 */ unsigned char Reserve;
  /* 0x0004 */ unsigned int MemorySize;
  /* 0x0008 */ const void* OriginalMemberLayout;
  /* 0x0010 */ const void* OriginalPointerLayout;
  /* 0x0018 */ const void* PointerLayout;
} NDR64_BOGUS_STRUCTURE_HEADER_FORMAT, *PNDR64_BOGUS_STRUCTURE_HEADER_FORMAT; /* size: 0x0020 */

typedef struct _NDR64_SIMPLE_MEMBER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Reserved1;
  /* 0x0002 */ unsigned short Reserved2;
  /* 0x0004 */ unsigned int Reserved3;
} NDR64_SIMPLE_MEMBER_FORMAT, *PNDR64_SIMPLE_MEMBER_FORMAT; /* size: 0x0008 */

typedef struct _NDR64_MEMPAD_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Reserve1;
  /* 0x0002 */ unsigned short MemPad;
  /* 0x0004 */ unsigned int Reserved2;
} NDR64_MEMPAD_FORMAT, *PNDR64_MEMPAD_FORMAT; /* size: 0x0008 */

typedef struct __midl_frag263_t
{
  /* 0x0000 */ struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
  struct
  {
    /* 0x0020 */ struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
    /* 0x0028 */ struct _NDR64_MEMPAD_FORMAT frag2;
    /* 0x0030 */ struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    /* 0x0038 */ struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
  } /* size: 0x0020 */ frag2;
} _midl_frag263_t, *P_midl_frag263_t; /* size: 0x0040 */

