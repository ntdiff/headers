typedef struct _UMS_CREATE_THREAD_ATTRIBUTES
{
  /* 0x0000 */ unsigned long UmsVersion;
  union
  {
    /* 0x0004 */ struct _RTL_UMS_CONTEXT* RtlUmsContext;
    /* 0x0004 */ void* UmsContext;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0008 */ struct _RTL_UMS_COMPLETION_LIST* RtlUmsCompletionList;
    /* 0x0008 */ void* UmsCompletionList;
  }; /* size: 0x0004 */
} UMS_CREATE_THREAD_ATTRIBUTES, *PUMS_CREATE_THREAD_ATTRIBUTES; /* size: 0x000c */

