typedef enum _ETW_PROVIDER_STATE
{
  EtwProviderStateFree = 0,
  EtwProviderStateTransition = 1,
  EtwProviderStateActive = 2,
  EtwProviderStateMax = 3,
} ETW_PROVIDER_STATE, *PETW_PROVIDER_STATE;

typedef struct _ETW_PROVIDER_TABLE_ENTRY
{
  /* 0x0000 */ long RefCount;
  /* 0x0004 */ enum _ETW_PROVIDER_STATE State;
  /* 0x0008 */ struct _ETW_REG_ENTRY* RegEntry;
  /* 0x000c */ void* Caller;
} ETW_PROVIDER_TABLE_ENTRY, *PETW_PROVIDER_TABLE_ENTRY; /* size: 0x0010 */

