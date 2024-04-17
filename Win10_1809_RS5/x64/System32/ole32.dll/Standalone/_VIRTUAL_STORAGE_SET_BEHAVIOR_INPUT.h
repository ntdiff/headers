typedef enum _VIRTUAL_STORAGE_BEHAVIOR_CODE
{
  VirtualStorageBehaviorUndefined = 0,
  VirtualStorageBehaviorCacheWriteThrough = 1,
  VirtualStorageBehaviorCacheWriteBack = 2,
} VIRTUAL_STORAGE_BEHAVIOR_CODE, *PVIRTUAL_STORAGE_BEHAVIOR_CODE;

typedef struct _VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ enum _VIRTUAL_STORAGE_BEHAVIOR_CODE BehaviorCode;
} VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT, *PVIRTUAL_STORAGE_SET_BEHAVIOR_INPUT; /* size: 0x0008 */

