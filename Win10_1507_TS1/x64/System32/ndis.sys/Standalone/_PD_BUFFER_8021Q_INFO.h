typedef struct _PD_BUFFER_8021Q_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short UserPriority : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned short CanonicalFormatId : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short VlanId : 12; /* bit position: 4 */
  }; /* bitfield */
} PD_BUFFER_8021Q_INFO, *PPD_BUFFER_8021Q_INFO; /* size: 0x0002 */

