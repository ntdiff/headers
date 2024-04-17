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

struct INTERPRETER_OPT_FLAGS2
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char HasNewCorrDesc : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char ClientCorrCheck : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char ServerCorrCheck : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char HasNotify : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char HasNotify2 : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char HasComplexReturn : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char HasConformanceRange : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char HasBigByValueParam : 1; /* bit position: 7 */
  }; /* bitfield */
}; /* size: 0x0001 */

struct NDR_PROC_HEADER_EXTS
{
  /* 0x0000 */ unsigned char Size;
  /* 0x0001 */ struct INTERPRETER_OPT_FLAGS2 Flags2;
  /* 0x0002 */ unsigned short ClientCorrHint;
  /* 0x0004 */ unsigned short ServerCorrHint;
  /* 0x0006 */ unsigned short NotifyIndex;
}; /* size: 0x0008 */

typedef struct _NDR_PROC_DESC
{
  /* 0x0000 */ unsigned short ClientBufferSize;
  /* 0x0002 */ unsigned short ServerBufferSize;
  /* 0x0004 */ struct INTERPRETER_OPT_FLAGS Oi2Flags;
  /* 0x0005 */ unsigned char NumberParams;
  /* 0x0006 */ struct NDR_PROC_HEADER_EXTS NdrExts;
} NDR_PROC_DESC, *PNDR_PROC_DESC; /* size: 0x000e */

