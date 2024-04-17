typedef struct _USER_MARSHAL_ROUTINE_QUADRUPLE
{
  /* 0x0000 */ void* pfnBufferSize /* function */;
  /* 0x0008 */ void* pfnMarshall /* function */;
  /* 0x0010 */ void* pfnUnmarshall /* function */;
  /* 0x0018 */ void* pfnFree /* function */;
} USER_MARSHAL_ROUTINE_QUADRUPLE, *PUSER_MARSHAL_ROUTINE_QUADRUPLE; /* size: 0x0020 */

struct OLEAUTOMATION_FUNCTIONS
{
  /* 0x0000 */ struct HINSTANCE__* hOleAut32;
  /* 0x0008 */ int fProcAddressesLoaded;
  /* 0x0010 */ struct _USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[3];
}; /* size: 0x0070 */

