typedef struct _OBJECT_HEADER_QUOTA_INFO
{
  /* 0x0000 */ unsigned long PagedPoolCharge;
  /* 0x0004 */ unsigned long NonPagedPoolCharge;
  /* 0x0008 */ unsigned long SecurityDescriptorCharge;
  /* 0x000c */ void* SecurityDescriptorQuotaBlock;
} OBJECT_HEADER_QUOTA_INFO, *POBJECT_HEADER_QUOTA_INFO; /* size: 0x0010 */

