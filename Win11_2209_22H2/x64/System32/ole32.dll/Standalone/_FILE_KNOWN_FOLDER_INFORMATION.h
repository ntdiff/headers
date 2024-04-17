typedef enum _FILE_KNOWN_FOLDER_TYPE
{
  KnownFolderNone = 0,
  KnownFolderDesktop = 1,
  KnownFolderDocuments = 2,
  KnownFolderDownloads = 3,
  KnownFolderMusic = 4,
  KnownFolderPictures = 5,
  KnownFolderVideos = 6,
  KnownFolderOther = 7,
  KnownFolderMax = 7,
} FILE_KNOWN_FOLDER_TYPE, *PFILE_KNOWN_FOLDER_TYPE;

typedef struct _FILE_KNOWN_FOLDER_INFORMATION
{
  /* 0x0000 */ enum _FILE_KNOWN_FOLDER_TYPE Type;
} FILE_KNOWN_FOLDER_INFORMATION, *PFILE_KNOWN_FOLDER_INFORMATION; /* size: 0x0004 */

