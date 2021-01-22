typedef enum _EX_POOL_PRIORITY
{
  LowPoolPriority = 0,
  LowPoolPrioritySpecialPoolOverrun = 8,
  LowPoolPrioritySpecialPoolUnderrun = 9,
  NormalPoolPriority = 16,
  NormalPoolPrioritySpecialPoolOverrun = 24,
  NormalPoolPrioritySpecialPoolUnderrun = 25,
  HighPoolPriority = 32,
  HighPoolPrioritySpecialPoolOverrun = 40,
  HighPoolPrioritySpecialPoolUnderrun = 41,
} EX_POOL_PRIORITY, *PEX_POOL_PRIORITY;

typedef struct _POOL_EXTENDED_PARAMETER
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Type : 8; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Optional : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
  }; /* bitfield */
  union
  {
    /* 0x0008 */ unsigned __int64 Reserved2;
    /* 0x0008 */ void* Reserved3;
    /* 0x0008 */ enum _EX_POOL_PRIORITY Priority;
    /* 0x0008 */ struct _POOL_EXTENDED_PARAMS_SECURE_POOL* SecurePoolParams;
    struct
    {
      /* 0x0008 */ unsigned long PreferredNode;
      /* 0x000c */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} POOL_EXTENDED_PARAMETER, *PPOOL_EXTENDED_PARAMETER; /* size: 0x0010 */

