typedef enum _MI_PAGE_HASH_ERROR_BEHAVIOR
{
  MiPageHashErrorBugcheck = 0,
  MiPageHashErrorReturnError = 1,
  MiPageHashErrorIgnore = 2,
} MI_PAGE_HASH_ERROR_BEHAVIOR, *PMI_PAGE_HASH_ERROR_BEHAVIOR;

