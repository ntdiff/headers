typedef struct _MI_POOL_FAILURE_REASONS
{
  /* 0x0000 */ unsigned long NonPagedNoPtes;
  /* 0x0004 */ unsigned long PriorityTooLow;
  /* 0x0008 */ unsigned long NonPagedNoPagesAvailable;
  /* 0x000c */ unsigned long PagedNoPtes;
  /* 0x0010 */ unsigned long SessionPagedNoPtes;
  /* 0x0014 */ unsigned long PagedNoPagesAvailable;
  /* 0x0018 */ unsigned long SessionPagedNoPagesAvailable;
  /* 0x001c */ unsigned long PagedNoCommit;
  /* 0x0020 */ unsigned long SessionPagedNoCommit;
  /* 0x0024 */ unsigned long NonPagedNoResidentAvailable;
  /* 0x0028 */ unsigned long NonPagedNoCommit;
} MI_POOL_FAILURE_REASONS, *PMI_POOL_FAILURE_REASONS; /* size: 0x002c */

