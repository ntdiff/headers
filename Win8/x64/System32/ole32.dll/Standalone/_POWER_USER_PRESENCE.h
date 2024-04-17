enum POWER_USER_PRESENCE_TYPE
{
  UserNotPresent = 0,
  UserPresent = 1,
  UserUnknown = 255,
};

typedef struct _POWER_USER_PRESENCE
{
  /* 0x0000 */ enum POWER_USER_PRESENCE_TYPE UserPresence;
} POWER_USER_PRESENCE, *PPOWER_USER_PRESENCE; /* size: 0x0004 */

