typedef struct _NDIS_REQUEST_XLATION_CONTEXT
{
  /* 0x0000 */ unsigned long OldOid;
  /* 0x0004 */ void* InfoBuf;
  /* 0x0008 */ unsigned int InfoBufLength;
  /* 0x0010 */ unsigned __int64 RcvErrorValue;
  /* 0x0018 */ unsigned __int64 RcvNoBufferValue;
  /* 0x0020 */ unsigned __int64 RcvDiscardsValue;
  /* 0x0028 */ unsigned __int64 XmitErrorValue;
  /* 0x0030 */ int Status;
  /* 0x0034 */ long __PADDING__[1];
} NDIS_REQUEST_XLATION_CONTEXT, *PNDIS_REQUEST_XLATION_CONTEXT; /* size: 0x0038 */

