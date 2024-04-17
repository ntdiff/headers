typedef enum _SC_ACTION_TYPE
{
  SC_ACTION_NONE = 0,
  SC_ACTION_RESTART = 1,
  SC_ACTION_REBOOT = 2,
  SC_ACTION_RUN_COMMAND = 3,
} SC_ACTION_TYPE, *PSC_ACTION_TYPE;

typedef struct _SC_ACTION
{
  /* 0x0000 */ enum _SC_ACTION_TYPE Type;
  /* 0x0004 */ unsigned long Delay;
} SC_ACTION, *PSC_ACTION; /* size: 0x0008 */

