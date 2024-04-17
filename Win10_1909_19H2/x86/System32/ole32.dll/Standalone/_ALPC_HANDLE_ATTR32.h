typedef struct _ALPC_HANDLE_ATTR32
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Reserved0 : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned long SameAccess : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long SameAttributes : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long Indirect : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long Inherit : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long Reserved1 : 12; /* bit position: 20 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Handle;
  /* 0x0008 */ unsigned long ObjectType;
  union
  {
    /* 0x000c */ unsigned long DesiredAccess;
    /* 0x000c */ unsigned long GrantedAccess;
  }; /* size: 0x0004 */
} ALPC_HANDLE_ATTR32, *PALPC_HANDLE_ATTR32; /* size: 0x0010 */

