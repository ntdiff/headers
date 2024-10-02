typedef enum _KTBFLUSH_TYPE
{
  FlushKernel = 0,
  FlushUser = 1,
  FlushEntire = 2,
  FlushEntireAttributeChange = 3,
} KTBFLUSH_TYPE, *PKTBFLUSH_TYPE;

