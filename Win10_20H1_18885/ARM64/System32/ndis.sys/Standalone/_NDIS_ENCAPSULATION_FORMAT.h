typedef enum _NDIS_ENCAPSULATION
{
  UNSPECIFIED_Encapsulation = 0,
  NULL_Encapsulation = 1,
  IEEE_802_3_Encapsulation = 2,
  IEEE_802_5_Encapsulation = 3,
  LLC_SNAP_ROUTED_Encapsulation = 4,
  LLC_SNAP_BRIDGED_Encapsulation = 5,
} NDIS_ENCAPSULATION, *PNDIS_ENCAPSULATION;

typedef struct _NDIS_ENCAPSULATION_FORMAT
{
  /* 0x0000 */ enum _NDIS_ENCAPSULATION Encapsulation;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long FixedHeaderSize : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x0008 */ unsigned long EncapsulationHeaderSize;
} NDIS_ENCAPSULATION_FORMAT, *PNDIS_ENCAPSULATION_FORMAT; /* size: 0x000c */

