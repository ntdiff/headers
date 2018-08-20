typedef enum _IO_RATE_CONTROL_TYPE
{
  IoRateControlTypeCapMin = 0,
  IoRateControlTypeIopsCap = 0,
  IoRateControlTypeBandwidthCap = 1,
  IoRateControlTypeTimePercentCap = 2,
  IoRateControlTypeCapMax = 2,
  IoRateControlTypeReservationMin = 3,
  IoRateControlTypeIopsReservation = 3,
  IoRateControlTypeBandwidthReservation = 4,
  IoRateControlTypeTimePercentReservation = 5,
  IoRateControlTypeReservationMax = 5,
  IoRateControlTypeCriticalReservationMin = 6,
  IoRateControlTypeIopsCriticalReservation = 6,
  IoRateControlTypeBandwidthCriticalReservation = 7,
  IoRateControlTypeTimePercentCriticalReservation = 8,
  IoRateControlTypeCriticalReservationMax = 8,
  IoRateControlTypeMax = 9,
} IO_RATE_CONTROL_TYPE, *PIO_RATE_CONTROL_TYPE;

