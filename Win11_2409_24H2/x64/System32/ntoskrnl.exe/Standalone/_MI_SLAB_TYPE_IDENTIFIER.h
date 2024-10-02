typedef struct _MI_SLAB_TYPE_IDENTIFIER
{
  /* 0x0000 */ unsigned char SlabType;
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char SlabIdentity : 7; /* bit position: 0 */
    /* 0x0001 */ unsigned char ChargesAcquired : 1; /* bit position: 7 */
  }; /* bitfield */
} MI_SLAB_TYPE_IDENTIFIER, *PMI_SLAB_TYPE_IDENTIFIER; /* size: 0x0002 */

