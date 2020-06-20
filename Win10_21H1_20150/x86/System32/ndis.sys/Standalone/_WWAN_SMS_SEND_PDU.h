typedef struct _WWAN_SMS_SEND_PDU
{
  /* 0x0000 */ unsigned char Size;
  /* 0x0001 */ char PduData[366];
} WWAN_SMS_SEND_PDU, *PWWAN_SMS_SEND_PDU; /* size: 0x016f */

