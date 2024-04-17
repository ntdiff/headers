enum LoadOrFreeWhy
{
  LoadingInprocServer = 0,
  CoLoadLibraryCalled = 1,
  CoFreeLibraryCalled = 2,
  FailedToCreateAPathEntry = 3,
  AnotherThreadBeatUsHere = 4,
  NoValidEntryPoint = 5,
  NoLongerInUse = 6,
};

