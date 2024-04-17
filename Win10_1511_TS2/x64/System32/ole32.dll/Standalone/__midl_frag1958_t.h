typedef struct _NDR64_PROC_FORMAT
{
  /* 0x0000 */ unsigned int Flags;
  /* 0x0004 */ unsigned int StackSize;
  /* 0x0008 */ unsigned int ConstantClientBufferSize;
  /* 0x000c */ unsigned int ConstantServerBufferSize;
  /* 0x0010 */ unsigned short RpcFlags;
  /* 0x0012 */ unsigned short FloatDoubleMask;
  /* 0x0014 */ unsigned short NumberOfParams;
  /* 0x0016 */ unsigned short ExtensionSize;
} NDR64_PROC_FORMAT, *PNDR64_PROC_FORMAT; /* size: 0x0018 */

typedef struct _NDR64_PARAM_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short MustSize : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short MustFree : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned short IsPipe : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned short IsIn : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short IsOut : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned short IsReturn : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned short IsBasetype : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned short IsByValue : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned short IsSimpleRef : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned short IsDontCallFreeInst : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned short SaveForAsyncFinish : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned short IsPartialIgnore : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned short IsForceAllocate : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned short Reserved : 2; /* bit position: 13 */
    /* 0x0000 */ unsigned short UseCache : 1; /* bit position: 15 */
  }; /* bitfield */
} NDR64_PARAM_FLAGS, *PNDR64_PARAM_FLAGS; /* size: 0x0002 */

typedef struct _NDR64_PARAM_FORMAT
{
  /* 0x0000 */ const void* Type;
  /* 0x0008 */ struct _NDR64_PARAM_FLAGS Attributes;
  /* 0x000a */ unsigned short Reserved;
  /* 0x000c */ unsigned int StackOffset;
} NDR64_PARAM_FORMAT, *PNDR64_PARAM_FORMAT; /* size: 0x0010 */

typedef struct __midl_frag1958_t
{
  /* 0x0000 */ struct _NDR64_PROC_FORMAT frag1;
  /* 0x0018 */ struct _NDR64_PARAM_FORMAT frag2;
  /* 0x0028 */ struct _NDR64_PARAM_FORMAT frag3;
} _midl_frag1958_t, *P_midl_frag1958_t; /* size: 0x0038 */

