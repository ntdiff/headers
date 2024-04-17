typedef struct _ARG_QUEUE_INFO
{
  /* 0x0000 */ const unsigned char* pFormat;
  /* 0x0008 */ unsigned char* pArg;
  /* 0x0010 */ unsigned char** ppArg;
  /* 0x0018 */ short ParamNum;
  struct /* bitfield */
  {
    /* 0x001a */ short IsReturn : 1; /* bit position: 0 */
    /* 0x001a */ short IsBasetype : 1; /* bit position: 1 */
    /* 0x001a */ short IsIn : 1; /* bit position: 2 */
    /* 0x001a */ short IsOut : 1; /* bit position: 3 */
    /* 0x001a */ short IsOutOnly : 1; /* bit position: 4 */
    /* 0x001a */ short IsDeferredFree : 1; /* bit position: 5 */
    /* 0x001a */ short IsDontCallFreeInst : 1; /* bit position: 6 */
  }; /* bitfield */
  /* 0x001c */ long __PADDING__[1];
} ARG_QUEUE_INFO, *PARG_QUEUE_INFO; /* size: 0x0020 */

