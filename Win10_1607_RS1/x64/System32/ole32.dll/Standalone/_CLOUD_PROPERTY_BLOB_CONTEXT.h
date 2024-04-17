typedef struct _CLOUD_PROPERTY_BLOB_CONTEXT
{
  /* 0x0000 */ unsigned long BlobType;
  /* 0x0004 */ unsigned long BufferLength;
  union
  {
    /* 0x0008 */ void* Buffer;
    /* 0x0008 */ unsigned __int64 Alignment;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long BlobLength;
  /* 0x0014 */ long Status;
} CLOUD_PROPERTY_BLOB_CONTEXT, *PCLOUD_PROPERTY_BLOB_CONTEXT; /* size: 0x0018 */

