typedef struct _WMI_TRACE_PACKET
{
  /* 0x0000 */ unsigned short Size;
  union
  {
    /* 0x0002 */ unsigned short HookId;
    struct
    {
      /* 0x0002 */ unsigned char Type;
      /* 0x0003 */ unsigned char Group;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
} WMI_TRACE_PACKET, *PWMI_TRACE_PACKET; /* size: 0x0004 */

