typedef enum _IO_SESSION_EVENT
{
  IoSessionEventIgnore = 0,
  IoSessionEventCreated = 1,
  IoSessionEventTerminated = 2,
  IoSessionEventConnected = 3,
  IoSessionEventDisconnected = 4,
  IoSessionEventLogon = 5,
  IoSessionEventLogoff = 6,
  IoSessionEventMax = 7,
} IO_SESSION_EVENT, *PIO_SESSION_EVENT;

