typedef struct _FIND_NAME_BUFFER
{
  /* 0x0000 */ unsigned char length;
  /* 0x0001 */ unsigned char access_control;
  /* 0x0002 */ unsigned char frame_control;
  /* 0x0003 */ unsigned char destination_addr[6];
  /* 0x0009 */ unsigned char source_addr[6];
  /* 0x000f */ unsigned char routing_info[18];
} FIND_NAME_BUFFER, *PFIND_NAME_BUFFER; /* size: 0x0021 */

