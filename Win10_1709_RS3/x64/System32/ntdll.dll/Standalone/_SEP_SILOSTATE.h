typedef struct _SEP_SILOSTATE
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;
  /* 0x0008 */ struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;
  /* 0x0010 */ void* AnonymousLogonToken;
  /* 0x0018 */ void* AnonymousLogonTokenNoEveryone;
  /* 0x0020 */ struct _UNICODE_STRING* UncSystemPaths;
  /* 0x0028 */ struct _CI_NGEN_PATHS* NgenPaths;
} SEP_SILOSTATE, *PSEP_SILOSTATE; /* size: 0x0030 */

