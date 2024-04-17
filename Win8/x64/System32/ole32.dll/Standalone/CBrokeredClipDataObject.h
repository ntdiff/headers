class Microsoft::WRL::ComPtr<IDataObject>
{
  /* 0x0000 */ struct IDataObject* ptr_;
}; /* size: 0x0008 */

class CBrokeredClipDataObject
{
  union
  {
    /* 0x0000 */ unsigned short s_cfPreferredDropEffect;
    /* 0x0000 */ unsigned short s_cfPerformedDropEffect;
    /* 0x0000 */ unsigned short s_cfLogicalPerformedDropEffect;
    /* 0x0000 */ unsigned short s_cfPasteSucceeded;
  }; /* size: 0x0002 */
  /* 0x0010 */ long m_refs;
  /* 0x0018 */ void* m_hOwnerToken;
  /* 0x0020 */ unsigned long m_dwSourceProcessId;
  /* 0x0024 */ BOOL m_fOwnerIsPackaged;
  /* 0x0028 */ class Microsoft::WRL::ComPtr<IDataObject> m_pDataObject;
}; /* size: 0x0030 */

