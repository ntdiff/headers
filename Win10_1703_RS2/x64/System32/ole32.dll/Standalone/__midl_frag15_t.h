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

typedef struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ struct _NDR64_STRUCTURE_FLAGS Flags;
  /* 0x0003 */ unsigned char Reserve;
  /* 0x0004 */ unsigned int MemorySize;
  /* 0x0008 */ const void* ArrayDescription;
} NDR64_CONF_STRUCTURE_HEADER_FORMAT, *PNDR64_CONF_STRUCTURE_HEADER_FORMAT; /* size: 0x0010 */

typedef struct __midl_frag15_t
{
  /* 0x0000 */ struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
} _midl_frag15_t, *P_midl_frag15_t; /* size: 0x0010 */

