typedef struct _SCONTEXT_QUEUE
{
  /* 0x0000 */ unsigned long NumberOfObjects;
  /* 0x0008 */ struct _NDR_SCONTEXT** ArrayOfObjects;
} SCONTEXT_QUEUE, *PSCONTEXT_QUEUE; /* size: 0x0010 */

