typedef union _WHEA_PCIXBUS_ID
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char BusNumber;
      /* 0x0001 */ unsigned char BusSegment;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_PCIXBUS_ID, *PWHEA_PCIXBUS_ID; /* size: 0x0002 */

