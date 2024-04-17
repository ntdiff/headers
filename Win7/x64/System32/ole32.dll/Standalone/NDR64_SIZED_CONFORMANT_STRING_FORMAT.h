typedef struct _NDR64_STRING_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char IsSized : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char IsRanged : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char Reserved3 : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char Reserved4 : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Reserved5 : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char Reserved6 : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Reserved7 : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char Reserved8 : 1; /* bit position: 7 */
  }; /* bitfield */
} NDR64_STRING_FLAGS, *PNDR64_STRING_FLAGS; /* size: 0x0001 */

struct NDR64_STRING_HEADER_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ struct _NDR64_STRING_FLAGS Flags;
  /* 0x0002 */ unsigned short ElementSize;
}; /* size: 0x0004 */

struct NDR64_SIZED_CONFORMANT_STRING_FORMAT
{
  /* 0x0000 */ struct NDR64_STRING_HEADER_FORMAT Header;
  /* 0x0008 */ const void* SizeDescription;
}; /* size: 0x0010 */

