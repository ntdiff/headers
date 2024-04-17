typedef struct _UMS_CREATE_THREAD_ATTRIBUTES
{
  /* 0x0000 */ unsigned long UmsVersion;
  /* 0x0004 */ void* UmsContext;
  /* 0x0008 */ void* UmsCompletionList;
} UMS_CREATE_THREAD_ATTRIBUTES, *PUMS_CREATE_THREAD_ATTRIBUTES; /* size: 0x000c */

