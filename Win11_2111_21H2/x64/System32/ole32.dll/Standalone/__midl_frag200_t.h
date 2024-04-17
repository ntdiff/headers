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

typedef struct _NDR64_BIND_CONTEXT
{
  /* 0x0000 */ unsigned char HandleType;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short StackOffset;
  /* 0x0004 */ unsigned char RoutineIndex;
  /* 0x0005 */ unsigned char Ordinal;
} NDR64_BIND_CONTEXT, *PNDR64_BIND_CONTEXT; /* size: 0x0006 */

typedef struct _NDR64_BIND_AND_NOTIFY_EXTENSION
{
  /* 0x0000 */ struct _NDR64_BIND_CONTEXT Binding;
  /* 0x0006 */ unsigned short NotifyIndex;
} NDR64_BIND_AND_NOTIFY_EXTENSION, *PNDR64_BIND_AND_NOTIFY_EXTENSION; /* size: 0x0008 */

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

typedef struct __midl_frag200_t
{
  /* 0x0000 */ struct _NDR64_PROC_FORMAT frag1;
  /* 0x0018 */ struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
  /* 0x0020 */ struct _NDR64_PARAM_FORMAT frag3;
  /* 0x0030 */ struct _NDR64_PARAM_FORMAT frag4;
  /* 0x0040 */ struct _NDR64_PARAM_FORMAT frag5;
  /* 0x0050 */ struct _NDR64_PARAM_FORMAT frag6;
  /* 0x0060 */ struct _NDR64_PARAM_FORMAT frag7;
  /* 0x0070 */ struct _NDR64_PARAM_FORMAT frag8;
  /* 0x0080 */ struct _NDR64_PARAM_FORMAT frag9;
  /* 0x0090 */ struct _NDR64_PARAM_FORMAT frag10;
  /* 0x00a0 */ struct _NDR64_PARAM_FORMAT frag11;
} _midl_frag200_t, *P_midl_frag200_t; /* size: 0x00b0 */

