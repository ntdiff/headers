typedef enum _TRACE_INFORMATION_CLASS
{
  TraceIdClass = 0,
  TraceHandleClass = 1,
  TraceEnableFlagsClass = 2,
  TraceEnableLevelClass = 3,
  GlobalLoggerHandleClass = 4,
  EventLoggerHandleClass = 5,
  AllLoggerHandlesClass = 6,
  TraceHandleByNameClass = 7,
  LoggerEventsLostClass = 8,
  TraceSessionSettingsClass = 9,
  LoggerEventsLoggedClass = 10,
  DiskIoNotifyRoutinesClass = 11,
  TraceInformationClassReserved1 = 12,
  AllPossibleNotifyRoutinesClass = 12,
  FltIoNotifyRoutinesClass = 13,
  TraceInformationClassReserved2 = 14,
  HypervisorStackwalkRoutineClass = 14,
  WdfNotifyRoutinesClass = 15,
  MaxTraceInformationClass = 16,
} TRACE_INFORMATION_CLASS, *PTRACE_INFORMATION_CLASS;

