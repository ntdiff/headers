typedef struct _ALPC_WORK_ON_BEHALF_TICKET
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ unsigned long ThreadCreationTimeLow;
} ALPC_WORK_ON_BEHALF_TICKET, *PALPC_WORK_ON_BEHALF_TICKET; /* size: 0x0008 */

typedef struct _ALPC_WORK_ON_BEHALF_ATTR
{
  /* 0x0000 */ struct _ALPC_WORK_ON_BEHALF_TICKET Ticket;
} ALPC_WORK_ON_BEHALF_ATTR, *PALPC_WORK_ON_BEHALF_ATTR; /* size: 0x0008 */

