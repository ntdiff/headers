typedef struct _NDR64_PROC_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int HandleType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned int ProcType : 3; /* bit position: 3 */
    /* 0x0000 */ unsigned int IsInterpreted : 2; /* bit position: 6 */
    /* 0x0000 */ unsigned int IsObject : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned int IsAsync : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned int IsEncode : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned int IsDecode : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned int UsesFullPtrPackage : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned int UsesRpcSmPackage : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned int UsesPipes : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned int HandlesExceptions : 2; /* bit position: 15 */
    /* 0x0000 */ unsigned int ServerMustSize : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned int ClientMustSize : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned int HasReturn : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned int HasComplexReturn : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned int ServerHasCorrelation : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned int ClientHasCorrelation : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned int HasNotify : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned int HasOtherExtensions : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned int HasBigByValueParam : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned int Reserved : 6; /* bit position: 26 */
  }; /* bitfield */
} NDR64_PROC_FLAGS, *PNDR64_PROC_FLAGS; /* size: 0x0004 */

