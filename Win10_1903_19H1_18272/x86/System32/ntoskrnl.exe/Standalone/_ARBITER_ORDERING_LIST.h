typedef struct _ARBITER_ORDERING_LIST
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Maximum;
  /* 0x0004 */ struct _ARBITER_ORDERING* Orderings;
} ARBITER_ORDERING_LIST, *PARBITER_ORDERING_LIST; /* size: 0x0008 */

