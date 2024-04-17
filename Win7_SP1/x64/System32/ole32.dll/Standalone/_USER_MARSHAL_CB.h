typedef enum _USER_MARSHAL_CB_TYPE
{
  USER_MARSHAL_CB_BUFFER_SIZE = 0,
  USER_MARSHAL_CB_MARSHALL = 1,
  USER_MARSHAL_CB_UNMARSHALL = 2,
  USER_MARSHAL_CB_FREE = 3,
} USER_MARSHAL_CB_TYPE, *PUSER_MARSHAL_CB_TYPE;

typedef struct _USER_MARSHAL_CB
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ struct _MIDL_STUB_MESSAGE* pStubMsg;
  /* 0x0010 */ const unsigned char* pReserve;
  /* 0x0018 */ unsigned long Signature;
  /* 0x001c */ enum _USER_MARSHAL_CB_TYPE CBType;
  /* 0x0020 */ const unsigned char* pFormat;
  /* 0x0028 */ const unsigned char* pTypeFormat;
} USER_MARSHAL_CB, *PUSER_MARSHAL_CB; /* size: 0x0030 */

