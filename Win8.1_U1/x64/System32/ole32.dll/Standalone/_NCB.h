typedef struct _NCB
{
  /* 0x0000 */ unsigned char ncb_command;
  /* 0x0001 */ unsigned char ncb_retcode;
  /* 0x0002 */ unsigned char ncb_lsn;
  /* 0x0003 */ unsigned char ncb_num;
  /* 0x0008 */ unsigned char* ncb_buffer;
  /* 0x0010 */ unsigned short ncb_length;
  /* 0x0012 */ unsigned char ncb_callname[16];
  /* 0x0022 */ unsigned char ncb_name[16];
  /* 0x0032 */ unsigned char ncb_rto;
  /* 0x0033 */ unsigned char ncb_sto;
  /* 0x0038 */ void* ncb_post /* function */;
  /* 0x0040 */ unsigned char ncb_lana_num;
  /* 0x0041 */ unsigned char ncb_cmd_cplt;
  /* 0x0042 */ unsigned char ncb_reserve[18];
  /* 0x0058 */ void* ncb_event;
} NCB, *PNCB; /* size: 0x0060 */

