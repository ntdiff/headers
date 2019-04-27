typedef struct _IMAGE_DATA_DIRECTORY
{
  /* 0x0000 */ unsigned long VirtualAddress;
  /* 0x0004 */ unsigned long Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY; /* size: 0x0008 */

typedef struct _IMAGE_OPTIONAL_HEADER64
{
  /* 0x0000 */ unsigned short Magic;
  /* 0x0002 */ unsigned char MajorLinkerVersion;
  /* 0x0003 */ unsigned char MinorLinkerVersion;
  /* 0x0004 */ unsigned long SizeOfCode;
  /* 0x0008 */ unsigned long SizeOfInitializedData;
  /* 0x000c */ unsigned long SizeOfUninitializedData;
  /* 0x0010 */ unsigned long AddressOfEntryPoint;
  /* 0x0014 */ unsigned long BaseOfCode;
  /* 0x0018 */ unsigned __int64 ImageBase;
  /* 0x0020 */ unsigned long SectionAlignment;
  /* 0x0024 */ unsigned long FileAlignment;
  /* 0x0028 */ unsigned short MajorOperatingSystemVersion;
  /* 0x002a */ unsigned short MinorOperatingSystemVersion;
  /* 0x002c */ unsigned short MajorImageVersion;
  /* 0x002e */ unsigned short MinorImageVersion;
  /* 0x0030 */ unsigned short MajorSubsystemVersion;
  /* 0x0032 */ unsigned short MinorSubsystemVersion;
  /* 0x0034 */ unsigned long Win32VersionValue;
  /* 0x0038 */ unsigned long SizeOfImage;
  /* 0x003c */ unsigned long SizeOfHeaders;
  /* 0x0040 */ unsigned long CheckSum;
  /* 0x0044 */ unsigned short Subsystem;
  /* 0x0046 */ unsigned short DllCharacteristics;
  /* 0x0048 */ unsigned __int64 SizeOfStackReserve;
  /* 0x0050 */ unsigned __int64 SizeOfStackCommit;
  /* 0x0058 */ unsigned __int64 SizeOfHeapReserve;
  /* 0x0060 */ unsigned __int64 SizeOfHeapCommit;
  /* 0x0068 */ unsigned long LoaderFlags;
  /* 0x006c */ unsigned long NumberOfRvaAndSizes;
  /* 0x0070 */ struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64; /* size: 0x00f0 */

