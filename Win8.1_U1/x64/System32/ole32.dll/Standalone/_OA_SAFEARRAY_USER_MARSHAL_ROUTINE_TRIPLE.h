typedef struct _OA_SAFEARRAY_USER_MARSHAL_ROUTINE_TRIPLE
{
  /* 0x0000 */ void* pfnBufferSize /* function */;
  /* 0x0008 */ void* pfnMarshall /* function */;
  /* 0x0010 */ void* pfnUnmarshall /* function */;
} OA_SAFEARRAY_USER_MARSHAL_ROUTINE_TRIPLE, *POA_SAFEARRAY_USER_MARSHAL_ROUTINE_TRIPLE; /* size: 0x0018 */

