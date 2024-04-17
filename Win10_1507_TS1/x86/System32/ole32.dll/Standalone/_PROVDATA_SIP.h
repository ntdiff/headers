typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PROVDATA_SIP
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ struct _GUID gSubject;
  /* 0x0014 */ struct SIP_DISPATCH_INFO_* pSip;
  /* 0x0018 */ struct SIP_DISPATCH_INFO_* pCATSip;
  /* 0x001c */ struct SIP_SUBJECTINFO_* psSipSubjectInfo;
  /* 0x0020 */ struct SIP_SUBJECTINFO_* psSipCATSubjectInfo;
  /* 0x0024 */ struct SIP_INDIRECT_DATA_* psIndirectData;
} PROVDATA_SIP, *PPROVDATA_SIP; /* size: 0x0028 */

