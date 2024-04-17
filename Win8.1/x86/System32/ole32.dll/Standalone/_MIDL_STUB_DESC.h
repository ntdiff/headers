typedef struct _MIDL_STUB_DESC
{
  /* 0x0000 */ void* RpcInterfaceInformation;
  /* 0x0004 */ void* pfnAllocate /* function */;
  /* 0x0008 */ void* pfnFree /* function */;
  union
  {
    union
    {
      /* 0x000c */ void** pAutoHandle;
      /* 0x000c */ void** pPrimitiveHandle;
      /* 0x000c */ struct __GENERIC_BINDING_INFO* pGenericBindingInfo;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ IMPLICIT_HANDLE_INFO;
  /* 0x0010 */ void* const* apfnNdrRundownRoutines /* function */;
  /* 0x0014 */ const struct _GENERIC_BINDING_ROUTINE_PAIR* aGenericBindingRoutinePairs;
  /* 0x0018 */ void* const* apfnExprEval /* function */;
  /* 0x001c */ const struct _XMIT_ROUTINE_QUINTUPLE* aXmitQuintuple;
  /* 0x0020 */ const unsigned char* pFormatTypes;
  /* 0x0024 */ int fCheckBounds;
  /* 0x0028 */ unsigned long Version;
  /* 0x002c */ struct _MALLOC_FREE_STRUCT* pMallocFreeStruct;
  /* 0x0030 */ long MIDLVersion;
  /* 0x0034 */ const struct _COMM_FAULT_OFFSETS* CommFaultOffsets;
  /* 0x0038 */ const struct _USER_MARSHAL_ROUTINE_QUADRUPLE* aUserMarshalQuadruple;
  /* 0x003c */ void* const* NotifyRoutineTable /* function */;
  /* 0x0040 */ unsigned long mFlags;
  /* 0x0044 */ const struct _NDR_CS_ROUTINES* CsRoutineTables;
  /* 0x0048 */ void* ProxyServerInfo;
  /* 0x004c */ const struct _NDR_EXPR_DESC* pExprInfo;
} MIDL_STUB_DESC, *PMIDL_STUB_DESC; /* size: 0x0050 */

