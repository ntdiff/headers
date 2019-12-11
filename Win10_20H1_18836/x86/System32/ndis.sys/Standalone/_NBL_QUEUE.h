typedef struct _NBL_QUEUE
{
  /* 0x0000 */ struct _NET_BUFFER_LIST* First;
  /* 0x0004 */ struct _NET_BUFFER_LIST** Last;
} NBL_QUEUE, *PNBL_QUEUE; /* size: 0x0008 */

