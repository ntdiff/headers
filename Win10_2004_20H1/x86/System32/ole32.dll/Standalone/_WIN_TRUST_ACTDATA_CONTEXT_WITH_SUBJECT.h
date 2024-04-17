typedef struct _WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT
{
  /* 0x0000 */ void* hClientToken;
  /* 0x0004 */ struct _GUID* SubjectType;
  /* 0x0008 */ void* Subject;
} WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT, *PWIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT; /* size: 0x000c */

