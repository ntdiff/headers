typedef struct _NDIS_TASK_IPSEC
{
  struct
  {
    /* 0x0000 */ unsigned long AH_ESP_COMBINED;
    /* 0x0004 */ unsigned long TRANSPORT_TUNNEL_COMBINED;
    /* 0x0008 */ unsigned long V4_OPTIONS;
    /* 0x000c */ unsigned long RESERVED;
  } /* size: 0x0010 */ Supported;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0010 */ unsigned long MD5 : 1; /* bit position: 0 */
      /* 0x0010 */ unsigned long SHA_1 : 1; /* bit position: 1 */
      /* 0x0010 */ unsigned long Transport : 1; /* bit position: 2 */
      /* 0x0010 */ unsigned long Tunnel : 1; /* bit position: 3 */
      /* 0x0010 */ unsigned long Send : 1; /* bit position: 4 */
      /* 0x0010 */ unsigned long Receive : 1; /* bit position: 5 */
    }; /* bitfield */
  } /* size: 0x0004 */ V4AH;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long DES : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned long RESERVED : 1; /* bit position: 1 */
      /* 0x0014 */ unsigned long TRIPLE_DES : 1; /* bit position: 2 */
      /* 0x0014 */ unsigned long NULL_ESP : 1; /* bit position: 3 */
      /* 0x0014 */ unsigned long Transport : 1; /* bit position: 4 */
      /* 0x0014 */ unsigned long Tunnel : 1; /* bit position: 5 */
      /* 0x0014 */ unsigned long Send : 1; /* bit position: 6 */
      /* 0x0014 */ unsigned long Receive : 1; /* bit position: 7 */
    }; /* bitfield */
  } /* size: 0x0004 */ V4ESP;
} NDIS_TASK_IPSEC, *PNDIS_TASK_IPSEC; /* size: 0x0018 */

