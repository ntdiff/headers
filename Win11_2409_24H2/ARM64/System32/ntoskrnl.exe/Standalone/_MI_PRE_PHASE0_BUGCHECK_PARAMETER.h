typedef enum _MI_PRE_PHASE0_BUGCHECK_PARAMETER
{
  LoaderPfnDatabaseAllGood = 0,
  LoaderPfnDatabaseNoBytes = 1,
  LoaderPfnDatabaseBadPxeFormat = 2,
  LoaderPfnDatabaseInsufficientSetPxes = 3,
  LoaderPfnDatabaseInconsistentBits = 4,
  LoaderPfnDatabaseNoRegionSpace = 5,
} MI_PRE_PHASE0_BUGCHECK_PARAMETER, *PMI_PRE_PHASE0_BUGCHECK_PARAMETER;

