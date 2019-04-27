typedef struct _EVENT_HEADER_EXTENDED_DATA_ITEM
{
  /* 0x0000 */ unsigned short Reserved1;
  /* 0x0002 */ unsigned short ExtType;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned short Linkage : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned short Reserved2 : 15; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0006 */ unsigned short DataSize;
  /* 0x0008 */ unsigned __int64 DataPtr;
} EVENT_HEADER_EXTENDED_DATA_ITEM, *PEVENT_HEADER_EXTENDED_DATA_ITEM; /* size: 0x0010 */

