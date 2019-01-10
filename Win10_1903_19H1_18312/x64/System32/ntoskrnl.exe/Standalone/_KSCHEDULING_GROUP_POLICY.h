typedef struct _KSCHEDULING_GROUP_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned short Weight;
    struct
    {
      /* 0x0000 */ unsigned short MinRate;
      /* 0x0002 */ unsigned short MaxRate;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long AllFlags;
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long Type : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long Disabled : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long RankBias : 1; /* bit position: 2 */
      /* 0x0004 */ unsigned long Spare1 : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KSCHEDULING_GROUP_POLICY, *PKSCHEDULING_GROUP_POLICY; /* size: 0x0008 */

