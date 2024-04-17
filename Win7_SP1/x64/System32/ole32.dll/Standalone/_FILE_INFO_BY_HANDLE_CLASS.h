typedef enum _FILE_INFO_BY_HANDLE_CLASS
{
  FileBasicInfo = 0,
  FileStandardInfo = 1,
  FileNameInfo = 2,
  FileRenameInfo = 3,
  FileDispositionInfo = 4,
  FileAllocationInfo = 5,
  FileEndOfFileInfo = 6,
  FileStreamInfo = 7,
  FileCompressionInfo = 8,
  FileAttributeTagInfo = 9,
  FileIdBothDirectoryInfo = 10,
  FileIdBothDirectoryRestartInfo = 11,
  FileIoPriorityHintInfo = 12,
  FileRemoteProtocolInfo = 13,
  MaximumFileInfoByHandleClass = 14,
} FILE_INFO_BY_HANDLE_CLASS, *PFILE_INFO_BY_HANDLE_CLASS;

