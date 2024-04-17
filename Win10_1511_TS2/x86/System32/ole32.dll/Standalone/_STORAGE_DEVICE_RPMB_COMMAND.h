typedef enum _STORAGE_DEVICE_RPMB_COMMAND
{
  StorRpmbProgramAuthKey = 1,
  StorRpmbQueryWriteCounter = 2,
  StorRpmbAuthenticatedWrite = 3,
  StorRpmbAuthenticatedRead = 4,
  StorRpmbAuthenticatedDeviceConfigWrite = 6,
  StorRpmbAuthenticatedDeviceConfigRead = 7,
} STORAGE_DEVICE_RPMB_COMMAND, *PSTORAGE_DEVICE_RPMB_COMMAND;

