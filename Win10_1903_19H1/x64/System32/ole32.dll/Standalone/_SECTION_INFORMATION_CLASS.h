typedef enum _SECTION_INFORMATION_CLASS
{
  SectionBasicInformation = 0,
  SectionImageInformation = 1,
  SectionRelocationInformation = 2,
  SectionOriginalBaseInformation = 3,
  SectionInternalImageInformation = 4,
  MaxSectionInfoClass = 5,
} SECTION_INFORMATION_CLASS, *PSECTION_INFORMATION_CLASS;

