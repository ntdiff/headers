typedef struct _ALPC_WORK_ON_BEHALF_TICKET
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ unsigned long ThreadCreationTimeLow;
} ALPC_WORK_ON_BEHALF_TICKET, *PALPC_WORK_ON_BEHALF_TICKET; /* size: 0x0008 */

typedef struct _RTL_WORK_ON_BEHALF_TICKET_EX
{
  /* 0x0000 */ struct _ALPC_WORK_ON_BEHALF_TICKET Ticket;
  union
  {
    /* 0x0008 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long CurrentThread : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long Reserved1 : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long Reserved2;
} RTL_WORK_ON_BEHALF_TICKET_EX, *PRTL_WORK_ON_BEHALF_TICKET_EX; /* size: 0x0010 */

