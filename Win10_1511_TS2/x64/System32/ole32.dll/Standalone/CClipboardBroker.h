class wistd::unique_ptr<EdpDataPackageProtectMap,wistd::default_delete<EdpDataPackageProtectMap> >
{
}; /* size: 0x0008 */

class CClipboardBroker
{
  /* 0x0018 */ class wistd::unique_ptr<EdpDataPackageProtectMap,wistd::default_delete<EdpDataPackageProtectMap> > protectMap;
  /* 0x0020 */ struct
  {
    /* 0x0020 */ unsigned __int64 uniqueId;
    /* 0x0028 */ unsigned long processId;
    /* 0x002c */ long __PADDING__[1];
  } /* size: 0x0010 */ m_processUniqueIdToProcessIdMap[10];
  /* 0x00c0 */ unsigned int m_processUniqueIdCacheIndex;
}; /* size: 0x00c8 */

