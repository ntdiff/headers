typedef struct _ETW_BUFFER_CONTEXT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char ProcessorNumber;
      /* 0x0001 */ unsigned char Alignment;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short ProcessorIndex;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned short LoggerId;
} ETW_BUFFER_CONTEXT, *PETW_BUFFER_CONTEXT; /* size: 0x0004 */

