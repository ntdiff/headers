typedef struct _SCONTEXT_QUEUE
{
  /* 0x0000 */ unsigned long NumberOfObjects;
  /* 0x0008 */ struct
  {
    /* 0x0008 */ void* pad[2];
    /* 0x0018 */ void* userContext;
  } /* size: 0x0018 */** ArrayOfObjects;
} SCONTEXT_QUEUE, *PSCONTEXT_QUEUE; /* size: 0x0010 */

