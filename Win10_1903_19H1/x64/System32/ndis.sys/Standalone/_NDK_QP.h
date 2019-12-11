struct NDK_VERSION
{
  /* 0x0000 */ unsigned short Major;
  /* 0x0002 */ unsigned short Minor;
}; /* size: 0x0004 */

typedef enum _NDK_OBJECT_TYPE
{
  NdkObjectTypeUndefined = 0,
  NdkObjectTypeAdapter = 1,
  NdkObjectTypeQp = 2,
  NdkObjectTypeCq = 3,
  NdkObjectTypeMr = 4,
  NdkObjectTypeMw = 5,
  NdkObjectTypePd = 6,
  NdkObjectTypeSharedEndpoint = 7,
  NdkObjectTypeConnector = 8,
  NdkObjectTypeListener = 9,
  NdkObjectTypeSrq = 10,
  NdkObjectTypeMax = 11,
} NDK_OBJECT_TYPE, *PNDK_OBJECT_TYPE;

typedef struct _NDK_OBJECT_HEADER_RESERVED_BLOCK
{
  /* 0x0000 */ void* rf[4];
} NDK_OBJECT_HEADER_RESERVED_BLOCK, *PNDK_OBJECT_HEADER_RESERVED_BLOCK; /* size: 0x0020 */

typedef struct _NDK_OBJECT_HEADER
{
  /* 0x0000 */ struct NDK_VERSION Version;
  /* 0x0004 */ enum _NDK_OBJECT_TYPE ObjectType;
  /* 0x0008 */ struct _NDK_OBJECT_HEADER_RESERVED_BLOCK NdkReserved;
} NDK_OBJECT_HEADER, *PNDK_OBJECT_HEADER; /* size: 0x0028 */

typedef struct _NDK_QP
{
  /* 0x0000 */ struct _NDK_OBJECT_HEADER Header;
  /* 0x0028 */ const struct _NDK_QP_DISPATCH* Dispatch;
} NDK_QP, *PNDK_QP; /* size: 0x0030 */

