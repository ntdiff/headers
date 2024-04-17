typedef struct _CTL_FIND_SUBJECT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _CTL_FIND_USAGE_PARA* pUsagePara;
  /* 0x0008 */ unsigned long dwSubjectType;
  /* 0x000c */ void* pvSubject;
} CTL_FIND_SUBJECT_PARA, *PCTL_FIND_SUBJECT_PARA; /* size: 0x0010 */

