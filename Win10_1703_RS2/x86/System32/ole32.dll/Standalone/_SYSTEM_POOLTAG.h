typedef struct _SYSTEM_POOLTAG
{
  union
  {
    /* 0x0000 */ unsigned char Tag[4];
    /* 0x0000 */ unsigned long TagUlong;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long PagedAllocs;
  /* 0x0008 */ unsigned long PagedFrees;
  /* 0x000c */ unsigned long PagedUsed;
  /* 0x0010 */ unsigned long NonPagedAllocs;
  /* 0x0014 */ unsigned long NonPagedFrees;
  /* 0x0018 */ unsigned long NonPagedUsed;
} SYSTEM_POOLTAG, *PSYSTEM_POOLTAG; /* size: 0x001c */

