typedef struct _PHYSICAL_MEMORY_RUN
{
  /* 0x0000 */ unsigned __int64 BasePage;
  /* 0x0008 */ unsigned __int64 PageCount;
} PHYSICAL_MEMORY_RUN, *PPHYSICAL_MEMORY_RUN; /* size: 0x0010 */

typedef struct _PHYSICAL_MEMORY_DESCRIPTOR
{
  /* 0x0000 */ unsigned long NumberOfRuns;
  /* 0x0008 */ unsigned __int64 NumberOfPages;
  /* 0x0010 */ struct _PHYSICAL_MEMORY_RUN Run[1];
} PHYSICAL_MEMORY_DESCRIPTOR, *PPHYSICAL_MEMORY_DESCRIPTOR; /* size: 0x0020 */

