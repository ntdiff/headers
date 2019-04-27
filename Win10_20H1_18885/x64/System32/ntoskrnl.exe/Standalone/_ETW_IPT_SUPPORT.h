typedef struct _ETW_IPT_SUPPORT
{
  /* 0x0000 */ void* IptHandle;
  /* 0x0008 */ unsigned __int64 IptOption;
  /* 0x0010 */ struct _ETW_HW_TRACE_EXT_INTERFACE* EtwHwTraceExtInterface;
  /* 0x0018 */ volatile unsigned long HookIdCount;
  /* 0x001c */ unsigned short HookId[4];
  /* 0x0024 */ long __PADDING__[1];
} ETW_IPT_SUPPORT, *PETW_IPT_SUPPORT; /* size: 0x0028 */

