enum EPrintPropertyType
{
  kPropertyTypeString = 1,
  kPropertyTypeInt32 = 2,
  kPropertyTypeInt64 = 3,
  kPropertyTypeByte = 4,
  kPropertyTypeTime = 5,
  kPropertyTypeDevMode = 6,
  kPropertyTypeSD = 7,
  kPropertyTypeNotificationReply = 8,
  kPropertyTypeNotificationOptions = 9,
  kPropertyTypeBuffer = 10,
};

struct PrintPropertyValue
{
  /* 0x0000 */ enum EPrintPropertyType ePropertyType;
  union
  {
    union
    {
      /* 0x0008 */ unsigned char propertyByte;
      /* 0x0008 */ wchar_t* propertyString;
      /* 0x0008 */ long propertyInt32;
      /* 0x0008 */ __int64 propertyInt64;
      struct
      {
        /* 0x0008 */ unsigned long cbBuf;
        /* 0x0010 */ void* pBuf;
      } /* size: 0x0010 */ propertyBlob;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ value;
}; /* size: 0x0018 */

