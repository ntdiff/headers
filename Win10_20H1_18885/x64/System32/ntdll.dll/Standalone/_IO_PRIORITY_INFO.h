typedef enum _IO_PRIORITY_HINT
{
  IoPriorityVeryLow = 0,
  IoPriorityLow = 1,
  IoPriorityNormal = 2,
  IoPriorityHigh = 3,
  IoPriorityCritical = 4,
  MaxIoPriorityTypes = 5,
} IO_PRIORITY_HINT, *PIO_PRIORITY_HINT;

typedef struct _IO_PRIORITY_INFO
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long ThreadPriority;
  /* 0x0008 */ unsigned long PagePriority;
  /* 0x000c */ enum _IO_PRIORITY_HINT IoPriority;
} IO_PRIORITY_INFO, *PIO_PRIORITY_INFO; /* size: 0x0010 */

