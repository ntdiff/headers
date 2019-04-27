typedef struct _SMBIOS3_TABLE_HEADER
{
  /* 0x0000 */ unsigned char Signature[5];
  /* 0x0005 */ unsigned char Checksum;
  /* 0x0006 */ unsigned char Length;
  /* 0x0007 */ unsigned char MajorVersion;
  /* 0x0008 */ unsigned char MinorVersion;
  /* 0x0009 */ unsigned char Docrev;
  /* 0x000a */ unsigned char EntryPointRevision;
  /* 0x000b */ unsigned char Reserved;
  /* 0x000c */ unsigned long StructureTableMaximumSize;
  /* 0x0010 */ unsigned __int64 StructureTableAddress;
} SMBIOS3_TABLE_HEADER, *PSMBIOS3_TABLE_HEADER; /* size: 0x0018 */

