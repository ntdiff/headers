typedef enum __MIDL_XmitDefs_0004
{
  WINRT_ASYNC_CALL_SUCCESS = 0,
  WINRT_ASYNC_CALL_FAILURE = 1,
} _MIDL_XmitDefs_0004, *P_MIDL_XmitDefs_0004;

typedef struct __MIDL_XmitDefs_0005
{
  /* 0x0000 */ unsigned long sizeOfMarshaledResults;
  /* 0x0004 */ unsigned long reserved;
  /* 0x0008 */ unsigned char* pMarshaledResults;
} _MIDL_XmitDefs_0005, *P_MIDL_XmitDefs_0005; /* size: 0x000c */

typedef enum __MIDL_XmitDefs_0006
{
  WINRT_ASYNC_CALL_POINT_OF_FAILURE_BAD_SERVER_OPERATION = 0,
  WINRT_ASYNC_CALL_POINT_OF_FAILURE_PUT_COMPLETED = 1,
  WINRT_ASYNC_CALL_POINT_OF_FAILURE_COMPLETED_HANDLER_NOT_INVOKED = 2,
  WINRT_ASYNC_CALL_POINT_OF_FAILURE_COMPLETED_HANDLER_BAD_PARAMETERS = 3,
  WINRT_ASYNC_CALL_POINT_OF_FAILURE_ASYNC_OPERATION_FAILURE = 4,
  WINRT_ASYNC_CALL_POINT_OF_FAILURE_GET_RESULTS = 5,
  WINRT_ASYNC_CALL_POINT_OF_FAILURE_MARSHALING_RESULTS = 6,
} _MIDL_XmitDefs_0006, *P_MIDL_XmitDefs_0006;

typedef struct __MIDL_XmitDefs_0007
{
  /* 0x0000 */ enum __MIDL_XmitDefs_0006 pointOfFailure;
  /* 0x0004 */ HRESULT hrFailure;
  /* 0x0008 */ unsigned long sizeOfMarshaledErrorInfo;
  /* 0x000c */ unsigned long reserved;
  /* 0x0010 */ unsigned char* pMarshaledErrorInfo;
} _MIDL_XmitDefs_0007, *P_MIDL_XmitDefs_0007; /* size: 0x0014 */

typedef struct __MIDL_XmitDefs_0008
{
  /* 0x0000 */ enum __MIDL_XmitDefs_0004 outcome;
  union
  {
    /* 0x0004 */ struct __MIDL_XmitDefs_0005 successDetails;
    /* 0x0004 */ struct __MIDL_XmitDefs_0007 failureDetails;
  }; /* size: 0x0014 */
} _MIDL_XmitDefs_0008, *P_MIDL_XmitDefs_0008; /* size: 0x0018 */

