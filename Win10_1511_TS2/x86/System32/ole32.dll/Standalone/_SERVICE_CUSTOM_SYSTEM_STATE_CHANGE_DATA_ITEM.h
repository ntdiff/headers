struct SERVICE_TRIGGER_CUSTOM_STATE_ID
{
  /* 0x0000 */ unsigned long Data[2];
}; /* size: 0x0008 */

typedef struct _SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM
{
  union
  {
    union
    {
      /* 0x0000 */ struct SERVICE_TRIGGER_CUSTOM_STATE_ID CustomStateId;
      struct
      {
        /* 0x0000 */ unsigned long DataOffset;
        /* 0x0004 */ unsigned char Data[1];
        /* 0x0005 */ char __PADDING__[3];
      } /* size: 0x0008 */ s;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM, *PSERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM; /* size: 0x0008 */

