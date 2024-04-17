class wistd::unique_ptr<EdpDataPackageProtectMap,wistd::default_delete<EdpDataPackageProtectMap> >
{
}; /* size: 0x0004 */

class CClipboardBroker
{
  /* 0x0010 */ class wistd::unique_ptr<EdpDataPackageProtectMap,wistd::default_delete<EdpDataPackageProtectMap> > protectMap;
  /* 0x0018 */ struct
  {
    /* 0x0018 */ unsigned __int64 uniqueId;
    /* 0x0020 */ unsigned long processId;
    /* 0x0024 */ long __PADDING__[1];
  } /* size: 0x0010 */ m_processUniqueIdToProcessIdMap[10];
  /* 0x00b8 */ unsigned int m_processUniqueIdCacheIndex;
}; /* size: 0x00c0 */

