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

typedef struct _NDR_PROC_INFO
{
  /* 0x0000 */ struct INTERPRETER_FLAGS InterpreterFlags;
  /* 0x0004 */ struct _NDR_PROC_DESC* pProcDesc;
} NDR_PROC_INFO, *PNDR_PROC_INFO; /* size: 0x0008 */

