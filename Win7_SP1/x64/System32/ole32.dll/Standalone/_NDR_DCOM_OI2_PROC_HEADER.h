struct INTERPRETER_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char FullPtrUsed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char RpcSsAllocUsed : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char ObjectProc : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char HasRpcFlags : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char IgnoreObjectException : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char HasCommOrFault : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char UseNewInitRoutines : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char Unused : 1; /* bit position: 7 */
  }; /* bitfield */
}; /* size: 0x0001 */

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

typedef struct _NDR_DCOM_OI2_PROC_HEADER
{
  /* 0x0000 */ unsigned char HandleType;
  /* 0x0001 */ struct INTERPRETER_FLAGS OldOiFlags;
  /* 0x0002 */ unsigned short RpcFlagsLow;
  /* 0x0004 */ unsigned short RpcFlagsHi;
  /* 0x0006 */ unsigned short ProcNum;
  /* 0x0008 */ unsigned short StackSize;
  /* 0x000a */ unsigned short ClientBufferSize;
  /* 0x000c */ unsigned short ServerBufferSize;
  /* 0x000e */ struct INTERPRETER_OPT_FLAGS Oi2Flags;
  /* 0x000f */ unsigned char NumberParams;
} NDR_DCOM_OI2_PROC_HEADER, *PNDR_DCOM_OI2_PROC_HEADER; /* size: 0x0010 */

