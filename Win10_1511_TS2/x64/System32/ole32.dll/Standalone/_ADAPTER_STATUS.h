typedef struct _ADAPTER_STATUS
{
  /* 0x0000 */ unsigned char adapter_address[6];
  /* 0x0006 */ unsigned char rev_major;
  /* 0x0007 */ unsigned char reserved0;
  /* 0x0008 */ unsigned char adapter_type;
  /* 0x0009 */ unsigned char rev_minor;
  /* 0x000a */ unsigned short duration;
  /* 0x000c */ unsigned short frmr_recv;
  /* 0x000e */ unsigned short frmr_xmit;
  /* 0x0010 */ unsigned short iframe_recv_err;
  /* 0x0012 */ unsigned short xmit_aborts;
  /* 0x0014 */ unsigned long xmit_success;
  /* 0x0018 */ unsigned long recv_success;
  /* 0x001c */ unsigned short iframe_xmit_err;
  /* 0x001e */ unsigned short recv_buff_unavail;
  /* 0x0020 */ unsigned short t1_timeouts;
  /* 0x0022 */ unsigned short ti_timeouts;
  /* 0x0024 */ unsigned long reserved1;
  /* 0x0028 */ unsigned short free_ncbs;
  /* 0x002a */ unsigned short max_cfg_ncbs;
  /* 0x002c */ unsigned short max_ncbs;
  /* 0x002e */ unsigned short xmit_buf_unavail;
  /* 0x0030 */ unsigned short max_dgram_size;
  /* 0x0032 */ unsigned short pending_sess;
  /* 0x0034 */ unsigned short max_cfg_sess;
  /* 0x0036 */ unsigned short max_sess;
  /* 0x0038 */ unsigned short max_sess_pkt_size;
  /* 0x003a */ unsigned short name_count;
} ADAPTER_STATUS, *PADAPTER_STATUS; /* size: 0x003c */

