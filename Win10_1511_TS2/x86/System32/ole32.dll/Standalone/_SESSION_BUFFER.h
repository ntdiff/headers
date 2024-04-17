typedef struct _SESSION_BUFFER
{
  /* 0x0000 */ unsigned char lsn;
  /* 0x0001 */ unsigned char state;
  /* 0x0002 */ unsigned char local_name[16];
  /* 0x0012 */ unsigned char remote_name[16];
  /* 0x0022 */ unsigned char rcvs_outstanding;
  /* 0x0023 */ unsigned char sends_outstanding;
} SESSION_BUFFER, *PSESSION_BUFFER; /* size: 0x0024 */

