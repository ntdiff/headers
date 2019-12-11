typedef struct _NBL_QUEUE
{
  /* 0x0000 */ struct _NET_BUFFER_LIST* First;
  /* 0x0004 */ struct _NET_BUFFER_LIST** Last;
} NBL_QUEUE, *PNBL_QUEUE; /* size: 0x0008 */

typedef struct _NBL_COUNTED_QUEUE
{
  /* 0x0000 */ struct _NBL_QUEUE Queue;
  /* 0x0008 */ unsigned long NblCount;
} NBL_COUNTED_QUEUE, *PNBL_COUNTED_QUEUE; /* size: 0x000c */

