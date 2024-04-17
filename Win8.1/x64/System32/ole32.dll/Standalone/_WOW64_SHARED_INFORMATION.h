typedef enum _WOW64_SHARED_INFORMATION
{
  SharedNtdll32LdrInitializeThunk = 0,
  SharedNtdll32KiUserExceptionDispatcher = 1,
  SharedNtdll32KiUserApcDispatcher = 2,
  SharedNtdll32KiUserCallbackDispatcher = 3,
  SharedNtdll32ExpInterlockedPopEntrySListFault = 4,
  SharedNtdll32ExpInterlockedPopEntrySListResume = 5,
  SharedNtdll32ExpInterlockedPopEntrySListEnd = 6,
  SharedNtdll32RtlUserThreadStart = 7,
  SharedNtdll32pQueryProcessDebugInformationRemote = 8,
  SharedNtdll32BaseAddress = 9,
  SharedNtdll32LdrSystemDllInitBlock = 10,
  Wow64SharedPageEntriesCount = 11,
} WOW64_SHARED_INFORMATION, *PWOW64_SHARED_INFORMATION;

