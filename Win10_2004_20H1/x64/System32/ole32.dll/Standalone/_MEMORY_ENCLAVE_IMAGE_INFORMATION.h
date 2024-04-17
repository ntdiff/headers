typedef struct _MEMORY_IMAGE_INFORMATION
{
  /* 0x0000 */ void* ImageBase;
  /* 0x0008 */ unsigned __int64 SizeOfImage;
  union
  {
    /* 0x0010 */ unsigned long ImageFlags;
    struct /* bitfield */
    {
      /* 0x0010 */ unsigned long ImagePartialMap : 1; /* bit position: 0 */
      /* 0x0010 */ unsigned long ImageNotExecutable : 1; /* bit position: 1 */
      /* 0x0010 */ unsigned long ImageSigningLevel : 4; /* bit position: 2 */
      /* 0x0010 */ unsigned long Reserved : 26; /* bit position: 6 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0014 */ long __PADDING__[1];
} MEMORY_IMAGE_INFORMATION, *PMEMORY_IMAGE_INFORMATION; /* size: 0x0018 */

typedef struct _MEMORY_ENCLAVE_IMAGE_INFORMATION
{
  /* 0x0000 */ struct _MEMORY_IMAGE_INFORMATION ImageInfo;
  /* 0x0018 */ unsigned char UniqueID[32];
  /* 0x0038 */ unsigned char AuthorID[32];
} MEMORY_ENCLAVE_IMAGE_INFORMATION, *PMEMORY_ENCLAVE_IMAGE_INFORMATION; /* size: 0x0058 */

