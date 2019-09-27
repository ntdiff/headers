typedef struct _ETW_SYSTEM_LOGGER
{
  /* 0x0000 */ unsigned char LoggerId;
  /* 0x0001 */ unsigned char ClockType;
} ETW_SYSTEM_LOGGER, *PETW_SYSTEM_LOGGER; /* size: 0x0002 */

typedef struct _PERFINFO_GROUPMASK
{
  /* 0x0000 */ unsigned long Masks[8];
} PERFINFO_GROUPMASK, *PPERFINFO_GROUPMASK; /* size: 0x0020 */

typedef struct _ETW_SYSTEM_LOGGER_SETTINGS
{
  /* 0x0000 */ struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];
  /* 0x0010 */ volatile unsigned long EtwpActiveSystemLoggers;
  /* 0x0014 */ struct _PERFINFO_GROUPMASK SiloGlobalGroupMask;
  /* 0x0034 */ struct _PERFINFO_GROUPMASK EtwpGroupMasks[10];
} ETW_SYSTEM_LOGGER_SETTINGS, *PETW_SYSTEM_LOGGER_SETTINGS; /* size: 0x0174 */

