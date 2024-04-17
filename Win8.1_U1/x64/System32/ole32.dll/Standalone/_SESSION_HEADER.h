typedef struct _SESSION_HEADER
{
  /* 0x0000 */ unsigned char sess_name;
  /* 0x0001 */ unsigned char num_sess;
  /* 0x0002 */ unsigned char rcv_dg_outstanding;
  /* 0x0003 */ unsigned char rcv_any_outstanding;
} SESSION_HEADER, *PSESSION_HEADER; /* size: 0x0004 */

