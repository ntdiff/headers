typedef enum _IO_ALLOCATION_ACTION
{
  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3,
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;

