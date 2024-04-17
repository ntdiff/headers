typedef struct _STORAGE_DEVICE_RPMB_DATA_FRAME
{
  /* 0x0000 */ unsigned char Stuff[196];
  /* 0x00c4 */ unsigned char KeyOrMAC[32];
  /* 0x00e4 */ unsigned char Data[256];
  /* 0x01e4 */ unsigned char Nonce[16];
  /* 0x01f4 */ unsigned char WriteCounter[4];
  /* 0x01f8 */ unsigned char Address[2];
  /* 0x01fa */ unsigned char BlockCount[2];
  /* 0x01fc */ unsigned char OperationResult[2];
  /* 0x01fe */ unsigned char RequestOrResponseType[2];
} STORAGE_DEVICE_RPMB_DATA_FRAME, *PSTORAGE_DEVICE_RPMB_DATA_FRAME; /* size: 0x0200 */

