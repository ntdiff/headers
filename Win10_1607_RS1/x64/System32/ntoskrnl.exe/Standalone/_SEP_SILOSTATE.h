typedef struct _SEP_SILOSTATE
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;
  /* 0x0008 */ struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;
  /* 0x0010 */ void* AnonymousLogonToken;
  /* 0x0018 */ void* AnonymousLogonTokenNoEveryone;
} SEP_SILOSTATE, *PSEP_SILOSTATE; /* size: 0x0020 */

