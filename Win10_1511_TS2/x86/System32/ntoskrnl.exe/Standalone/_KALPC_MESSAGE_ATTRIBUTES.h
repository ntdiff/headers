typedef union _KALPC_DIRECT_EVENT
{
  union
  {
    /* 0x0000 */ unsigned long Event;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Referenced : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KALPC_DIRECT_EVENT, *PKALPC_DIRECT_EVENT; /* size: 0x0004 */

typedef struct _KALPC_MESSAGE_ATTRIBUTES
{
  /* 0x0000 */ void* ClientContext;
  /* 0x0004 */ void* ServerContext;
  /* 0x0008 */ void* PortContext;
  /* 0x000c */ void* CancelPortContext;
  /* 0x0010 */ struct _KALPC_SECURITY_DATA* SecurityData;
  /* 0x0014 */ struct _KALPC_VIEW* View;
  /* 0x0018 */ struct _KALPC_HANDLE_DATA* HandleData;
  /* 0x001c */ union _KALPC_DIRECT_EVENT DirectEvent;
} KALPC_MESSAGE_ATTRIBUTES, *PKALPC_MESSAGE_ATTRIBUTES; /* size: 0x0020 */

