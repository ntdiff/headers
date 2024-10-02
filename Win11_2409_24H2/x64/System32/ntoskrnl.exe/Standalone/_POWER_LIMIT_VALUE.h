typedef enum _POWER_LIMIT_TYPES
{
  PowerLimitContinuous = 0,
  PowerLimitBurst = 1,
  PowerLimitRapid = 2,
  PowerLimitPreemptive = 3,
  PowerLimitPreemptiveOffset = 4,
  PowerLimitTypeMax = 5,
} POWER_LIMIT_TYPES, *PPOWER_LIMIT_TYPES;

typedef struct _POWER_LIMIT_VALUE
{
  /* 0x0000 */ enum _POWER_LIMIT_TYPES Type;
  /* 0x0004 */ unsigned long DomainId;
  /* 0x0008 */ unsigned long TargetValue;
  /* 0x000c */ unsigned long TimeParameter;
} POWER_LIMIT_VALUE, *PPOWER_LIMIT_VALUE; /* size: 0x0010 */

