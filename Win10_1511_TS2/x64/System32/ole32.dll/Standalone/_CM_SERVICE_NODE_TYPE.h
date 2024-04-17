typedef enum _CM_SERVICE_NODE_TYPE
{
  DriverType = 1,
  FileSystemType = 2,
  Win32ServiceOwnProcess = 16,
  Win32ServiceShareProcess = 32,
  AdapterType = 4,
  RecognizerType = 8,
} CM_SERVICE_NODE_TYPE, *PCM_SERVICE_NODE_TYPE;

