typedef struct _USER_MARSHAL_ROUTINE_QUADRUPLE
{
  /* 0x0000 */ void* pfnBufferSize /* function */;
  /* 0x0004 */ void* pfnMarshall /* function */;
  /* 0x0008 */ void* pfnUnmarshall /* function */;
  /* 0x000c */ void* pfnFree /* function */;
} USER_MARSHAL_ROUTINE_QUADRUPLE, *PUSER_MARSHAL_ROUTINE_QUADRUPLE; /* size: 0x0010 */

