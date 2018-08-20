typedef struct _SEP_SILOSTATE
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;
  /* 0x0004 */ struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;
  /* 0x0008 */ void* AnonymousLogonToken;
  /* 0x000c */ void* AnonymousLogonTokenNoEveryone;
} SEP_SILOSTATE, *PSEP_SILOSTATE; /* size: 0x0010 */

