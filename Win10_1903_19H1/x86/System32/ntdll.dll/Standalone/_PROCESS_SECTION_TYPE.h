typedef enum _PROCESS_SECTION_TYPE
{
  ProcessSectionData = 0,
  ProcessSectionImage = 1,
  ProcessSectionImageNx = 2,
  ProcessSectionPagefileBacked = 3,
  ProcessSectionMax = 4,
} PROCESS_SECTION_TYPE, *PPROCESS_SECTION_TYPE;

