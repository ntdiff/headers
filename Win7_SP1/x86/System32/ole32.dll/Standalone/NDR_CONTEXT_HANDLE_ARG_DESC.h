struct NDR_CONTEXT_HANDLE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char CannotBeNull : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Serialize : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char NoSerialize : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char IsStrict : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char IsReturn : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char IsOut : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char IsIn : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char IsViaPtr : 1; /* bit position: 7 */
  }; /* bitfield */
}; /* size: 0x0001 */

struct NDR_CONTEXT_HANDLE_ARG_DESC
{
  /* 0x0000 */ unsigned char Fc;
  /* 0x0001 */ struct NDR_CONTEXT_HANDLE_FLAGS Flags;
  /* 0x0002 */ unsigned char RundownRtnIndex;
  /* 0x0003 */ unsigned char ParamOrdinal;
}; /* size: 0x0004 */

