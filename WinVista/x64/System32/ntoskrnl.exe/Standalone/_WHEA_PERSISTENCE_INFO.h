typedef struct _WHEA_PERSISTENCE_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Identifier : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Length : 24; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Reserved : 6; /* bit position: 40 */
    /* 0x0000 */ unsigned __int64 Attributes : 2; /* bit position: 46 */
    /* 0x0000 */ unsigned __int64 Signature : 16; /* bit position: 48 */
  }; /* bitfield */
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO; /* size: 0x0008 */

