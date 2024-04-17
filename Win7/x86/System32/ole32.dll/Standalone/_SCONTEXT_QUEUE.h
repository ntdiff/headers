typedef struct _SCONTEXT_QUEUE
{
  /* 0x0000 */ unsigned long NumberOfObjects;
  /* 0x0004 */ struct
  {
    /* 0x0004 */ void* pad[2];
    /* 0x000c */ void* userContext;
  } /* size: 0x000c */** ArrayOfObjects;
} SCONTEXT_QUEUE, *PSCONTEXT_QUEUE; /* size: 0x0008 */

