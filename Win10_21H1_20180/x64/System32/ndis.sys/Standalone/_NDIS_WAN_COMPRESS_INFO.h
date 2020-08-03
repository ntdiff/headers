typedef struct _NDIS_WAN_COMPRESS_INFO
{
  /* 0x0000 */ unsigned char SessionKey[8];
  /* 0x0008 */ unsigned long MSCompType;
  /* 0x000c */ unsigned char CompType;
  /* 0x000e */ unsigned short CompLength;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned char CompOUI[3];
      /* 0x0013 */ unsigned char CompSubType;
      /* 0x0014 */ unsigned char CompValues[32];
    } /* size: 0x0024 */ Proprietary;
    struct
    {
      struct
      {
        /* 0x0010 */ unsigned char CompValues[32];
      } /* size: 0x0020 */ Public;
      /* 0x0030 */ long __PADDING__[1];
    }; /* size: 0x0024 */
  }; /* size: 0x0024 */
} NDIS_WAN_COMPRESS_INFO, *PNDIS_WAN_COMPRESS_INFO; /* size: 0x0034 */

