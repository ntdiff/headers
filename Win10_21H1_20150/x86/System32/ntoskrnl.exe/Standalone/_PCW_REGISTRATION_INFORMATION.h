enum PCW_REGISTRATION_FLAGS
{
  PcwRegistrationNone = 0,
  PcwRegistrationSiloNeutral = 1,
};

typedef struct _PCW_REGISTRATION_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ const struct _UNICODE_STRING* Name;
  /* 0x0008 */ unsigned long CounterCount;
  /* 0x000c */ struct _PCW_COUNTER_DESCRIPTOR* Counters;
  /* 0x0010 */ void* Callback /* function */;
  /* 0x0014 */ void* CallbackContext;
  /* 0x0018 */ enum PCW_REGISTRATION_FLAGS Flags;
} PCW_REGISTRATION_INFORMATION, *PPCW_REGISTRATION_INFORMATION; /* size: 0x001c */

