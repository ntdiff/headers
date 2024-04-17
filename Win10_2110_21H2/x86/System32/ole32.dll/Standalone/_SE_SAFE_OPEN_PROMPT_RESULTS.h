typedef enum _SE_SAFE_OPEN_PROMPT_EXPERIENCE_RESULTS
{
  SeSafeOpenExperienceNone = 0,
  SeSafeOpenExperienceCalled = 1,
  SeSafeOpenExperienceAppRepCalled = 2,
  SeSafeOpenExperiencePromptDisplayed = 4,
  SeSafeOpenExperienceUAC = 8,
  SeSafeOpenExperienceUninstaller = 16,
  SeSafeOpenExperienceIgnoreUnknownOrBad = 32,
  SeSafeOpenExperienceDefenderTrustedInstaller = 64,
} SE_SAFE_OPEN_PROMPT_EXPERIENCE_RESULTS, *PSE_SAFE_OPEN_PROMPT_EXPERIENCE_RESULTS;

typedef struct _SE_SAFE_OPEN_PROMPT_RESULTS
{
  /* 0x0000 */ enum _SE_SAFE_OPEN_PROMPT_EXPERIENCE_RESULTS Results;
  /* 0x0004 */ wchar_t Path[260];
} SE_SAFE_OPEN_PROMPT_RESULTS, *PSE_SAFE_OPEN_PROMPT_RESULTS; /* size: 0x020c */

