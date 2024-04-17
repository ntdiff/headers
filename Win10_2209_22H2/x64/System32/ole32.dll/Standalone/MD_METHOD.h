struct INTERPRETER_OPT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char ServerMustSize : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char ClientMustSize : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char HasReturn : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char HasPipes : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Unused : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char HasAsyncUuid : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char HasExtensions : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char HasAsyncHandle : 1; /* bit position: 7 */
  }; /* bitfield */
}; /* size: 0x0001 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct __MIDL_ICallFrame_0001
{
  /* 0x0000 */ unsigned long iMethod;
  /* 0x0004 */ int fHasInValues;
  /* 0x0008 */ int fHasInOutValues;
  /* 0x000c */ int fHasOutValues;
  /* 0x0010 */ int fDerivesFromIDispatch;
  /* 0x0014 */ long cInInterfacesMax;
  /* 0x0018 */ long cInOutInterfacesMax;
  /* 0x001c */ long cOutInterfacesMax;
  /* 0x0020 */ long cTopLevelInInterfaces;
  /* 0x0024 */ struct _GUID iid;
  /* 0x0034 */ unsigned long cMethod;
  /* 0x0038 */ unsigned long cParams;
} _MIDL_ICallFrame_0001, *P_MIDL_ICallFrame_0001; /* size: 0x003c */

struct MD_METHOD
{
  /* 0x0000 */ unsigned long m_numberOfParams;
  /* 0x0008 */ struct PARAM_DESCRIPTION* m_params;
  /* 0x0010 */ struct INTERPRETER_OPT_FLAGS m_optFlags;
  /* 0x0014 */ unsigned long m_rpcFlags;
  /* 0x0018 */ const struct _MIDL_STUB_DESC* m_pStubDesc;
  /* 0x0020 */ unsigned long m_cbPushedByCaller;
  /* 0x0024 */ unsigned short m_cbClientBuffer;
  /* 0x0026 */ unsigned short m_cbServerBuffer;
  /* 0x0028 */ unsigned long m_cbStackInclRet;
  /* 0x002c */ struct __MIDL_ICallFrame_0001 m_info;
  /* 0x0068 */ int m_fCanShareAllParameters;
  /* 0x0070 */ const struct tagCInterfaceStubHeader* m_pHeader;
  /* 0x0078 */ unsigned long m_iMethod;
  /* 0x0080 */ struct MD_INTERFACE* m_pmdInterface;
  /* 0x0088 */ struct MD_PARAM* m_rgParams;
  /* 0x0090 */ wchar_t* m_wszMethodName;
  /* 0x0098 */ struct NDR_PROC_HEADER_EXTS* m_pHeaderExts;
}; /* size: 0x00a0 */

