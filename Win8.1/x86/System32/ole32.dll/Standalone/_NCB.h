typedef struct _NCB
{
  /* 0x0000 */ unsigned char ncb_command;
  /* 0x0001 */ unsigned char ncb_retcode;
  /* 0x0002 */ unsigned char ncb_lsn;
  /* 0x0003 */ unsigned char ncb_num;
  /* 0x0004 */ unsigned char* ncb_buffer;
  /* 0x0008 */ unsigned short ncb_length;
  /* 0x000a */ unsigned char ncb_callname[16];
  /* 0x001a */ unsigned char ncb_name[16];
  /* 0x002a */ unsigned char ncb_rto;
  /* 0x002b */ unsigned char ncb_sto;
  /* 0x002c */ void* ncb_post /* function */;
  /* 0x0030 */ unsigned char ncb_lana_num;
  /* 0x0031 */ unsigned char ncb_cmd_cplt;
  /* 0x0032 */ unsigned char ncb_reserve[10];
  /* 0x003c */ void* ncb_event;
} NCB, *PNCB; /* size: 0x0040 */

