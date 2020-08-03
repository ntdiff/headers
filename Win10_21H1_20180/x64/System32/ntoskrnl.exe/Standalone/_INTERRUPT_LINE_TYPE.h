typedef enum _INTERRUPT_LINE_TYPE
{
  InterruptLineInvalidType = 0,
  InterruptLineUnusable = 1,
  InterruptLineStandardPin = 2,
  InterruptLineProcessorLocal = 3,
  InterruptLineSoftwareOnly = 4,
  InterruptLineSoftwareOnlyProcessorLocal = 5,
  InterruptLineOutputPin = 6,
  InterruptLineMsi = 7,
} INTERRUPT_LINE_TYPE, *PINTERRUPT_LINE_TYPE;

