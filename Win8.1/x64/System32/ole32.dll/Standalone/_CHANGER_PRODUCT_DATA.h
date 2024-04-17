typedef struct _CHANGER_PRODUCT_DATA
{
  /* 0x0000 */ unsigned char VendorId[8];
  /* 0x0008 */ unsigned char ProductId[16];
  /* 0x0018 */ unsigned char Revision[4];
  /* 0x001c */ unsigned char SerialNumber[32];
  /* 0x003c */ unsigned char DeviceType;
} CHANGER_PRODUCT_DATA, *PCHANGER_PRODUCT_DATA; /* size: 0x003d */

