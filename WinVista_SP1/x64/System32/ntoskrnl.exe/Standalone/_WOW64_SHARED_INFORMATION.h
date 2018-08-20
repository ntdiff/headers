typedef enum _WOW64_SHARED_INFORMATION
{
  SharedNtdll32LdrInitializeThunk = 0,
  SharedNtdll32KiUserExceptionDispatcher = 1,
  SharedNtdll32KiUserApcDispatcher = 2,
  SharedNtdll32KiUserCallbackDispatcher = 3,
  SharedNtdll32LdrHotPatchRoutine = 4,
  SharedNtdll32ExpInterlockedPopEntrySListFault = 5,
  SharedNtdll32ExpInterlockedPopEntrySListResume = 6,
  SharedNtdll32ExpInterlockedPopEntrySListEnd = 7,
  SharedNtdll32RtlUserThreadStart = 8,
  SharedNtdll32pQueryProcessDebugInformationRemote = 9,
  SharedNtdll32EtwpNotificationThread = 10,
  SharedNtdll32BaseAddress = 11,
  Wow64SharedPageEntriesCount = 12,
} WOW64_SHARED_INFORMATION, *PWOW64_SHARED_INFORMATION;

