typedef struct _NDIS_NET_BUFFER_LIST_8021Q_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned int UserPriority : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned int CanonicalFormatId : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned int VlanId : 12; /* bit position: 4 */
        /* 0x0000 */ unsigned int Reserved : 16; /* bit position: 16 */
      }; /* bitfield */
    } /* size: 0x0004 */ TagHeader;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned int UserPriority : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned int CanonicalFormatId : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned int VlanId : 12; /* bit position: 4 */
        /* 0x0000 */ unsigned int WMMInfo : 4; /* bit position: 16 */
        /* 0x0000 */ unsigned int Reserved : 12; /* bit position: 20 */
      }; /* bitfield */
    } /* size: 0x0004 */ WLanTagHeader;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0004 */
} NDIS_NET_BUFFER_LIST_8021Q_INFO, *PNDIS_NET_BUFFER_LIST_8021Q_INFO; /* size: 0x0004 */

