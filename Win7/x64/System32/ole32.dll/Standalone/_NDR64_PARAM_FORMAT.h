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

