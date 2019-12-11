typedef struct _PCW_REGISTRATION_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ const struct _UNICODE_STRING* Name;
  /* 0x0010 */ unsigned long CounterCount;
  /* 0x0018 */ struct _PCW_COUNTER_DESCRIPTOR* Counters;
  /* 0x0020 */ void* Callback /* function */;
  /* 0x0028 */ void* CallbackContext;
} PCW_REGISTRATION_INFORMATION, *PPCW_REGISTRATION_INFORMATION; /* size: 0x0030 */

