struct IMPORT_OBJECT_HEADER
{
  /* 0x0000 */ unsigned short Sig1;
  /* 0x0002 */ unsigned short Sig2;
  /* 0x0004 */ unsigned short Version;
  /* 0x0006 */ unsigned short Machine;
  /* 0x0008 */ unsigned long TimeDateStamp;
  /* 0x000c */ unsigned long SizeOfData;
  union
  {
    /* 0x0010 */ unsigned short Ordinal;
    /* 0x0010 */ unsigned short Hint;
  }; /* size: 0x0002 */
  struct /* bitfield */
  {
    /* 0x0012 */ unsigned short Type : 2; /* bit position: 0 */
    /* 0x0012 */ unsigned short NameType : 3; /* bit position: 2 */
    /* 0x0012 */ unsigned short Reserved : 11; /* bit position: 5 */
  }; /* bitfield */
}; /* size: 0x0014 */

