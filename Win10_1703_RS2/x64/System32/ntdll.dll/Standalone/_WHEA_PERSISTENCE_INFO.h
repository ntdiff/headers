typedef union _WHEA_PERSISTENCE_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Signature : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Length : 24; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Identifier : 16; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Attributes : 2; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 DoNotLog : 1; /* bit position: 58 */
      /* 0x0000 */ unsigned __int64 Reserved : 5; /* bit position: 59 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO; /* size: 0x0008 */

