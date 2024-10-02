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
  SeSafeOpenExperienceMOTWPresent = 128,
  SeSafeOpenExperienceElevatedNoPropagation = 256,
} SE_SAFE_OPEN_PROMPT_EXPERIENCE_RESULTS, *PSE_SAFE_OPEN_PROMPT_EXPERIENCE_RESULTS;

