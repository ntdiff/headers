typedef enum _IO_PRIORITY_HINT
{
  IoPriorityVeryLow = 0,
  IoPriorityLow = 1,
  IoPriorityNormal = 2,
  IoPriorityHigh = 3,
  IoPriorityCritical = 4,
  MaxIoPriorityTypes = 5,
} IO_PRIORITY_HINT, *PIO_PRIORITY_HINT;

typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION_EX
{
  /* 0x0000 */ enum _IO_PRIORITY_HINT PriorityHint;
  /* 0x0004 */ unsigned char BoostOutstanding;
  /* 0x0005 */ char __PADDING__[3];
} FILE_IO_PRIORITY_HINT_INFORMATION_EX, *PFILE_IO_PRIORITY_HINT_INFORMATION_EX; /* size: 0x0008 */

