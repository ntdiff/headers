typedef enum _POWER_LIMIT_TYPES
{
  PowerLimitContinuous = 0,
  PowerLimitBurst = 1,
  PowerLimitRapid = 2,
  PowerLimitPreemptive = 3,
  PowerLimitPreemptiveOffset = 4,
  PowerLimitTypeMax = 5,
} POWER_LIMIT_TYPES, *PPOWER_LIMIT_TYPES;

typedef struct _POWER_LIMIT_ATTRIBUTES
{
  /* 0x0000 */ enum _POWER_LIMIT_TYPES Type;
  /* 0x0004 */ unsigned long DomainId;
  /* 0x0008 */ unsigned long MaxValue;
  /* 0x000c */ unsigned long MinValue;
  /* 0x0010 */ unsigned long MinTimeParameter;
  /* 0x0014 */ unsigned long MaxTimeParameter;
  /* 0x0018 */ unsigned long DefaultACValue;
  /* 0x001c */ unsigned long DefaultDCValue;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0020 */ unsigned long SupportTimeParameter : 1; /* bit position: 0 */
        /* 0x0020 */ unsigned long Reserved : 31; /* bit position: 1 */
      }; /* bitfield */
      /* 0x0020 */ unsigned long AsUlong;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
} POWER_LIMIT_ATTRIBUTES, *PPOWER_LIMIT_ATTRIBUTES; /* size: 0x0024 */

