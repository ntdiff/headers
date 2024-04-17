struct APP_DATA::FreeListElem
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ void* pvData;
}; /* size: 0x0010 */

struct APP_DATA::FreeList
{
  /* 0x0000 */ struct APP_DATA::FreeListElem rgFreeList[6];
}; /* size: 0x0060 */

struct APP_DATA
{
  /* 0x0000 */ struct IMalloc* m_pimalloc;
  /* 0x0008 */ class OLE_TYPEMGR* m_poletmgr;
  /* 0x0010 */ struct APP_DATA::FreeList m_rgFreeLists[4];
  /* 0x0190 */ const class CDateInfo* m_pDateInfo;
  /* 0x0198 */ const class CNumInfo* m_pNumInfo;
}; /* size: 0x01a0 */

