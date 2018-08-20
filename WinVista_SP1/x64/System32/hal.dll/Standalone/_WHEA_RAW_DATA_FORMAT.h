typedef enum _WHEA_RAW_DATA_FORMAT
{
  WheaRawDataFormatIPFSalRecord = 0,
  WheaRawDataFormatIA32MCA = 1,
  WheaRawDataFormatIntel64MCA = 2,
  WheaRawDataFormatAMD64MCA = 3,
  WheaRawDataFormatMemory = 4,
  WheaRawDataFormatPCIExpress = 5,
  WheaRawDataFormatNMIPort = 6,
  WheaRawDataFormatPCIXBus = 7,
  WheaRawDataFormatPCIXDevice = 8,
  WheaRawDataFormatGeneric = 9,
  WheaRawDataFormatMax = 10,
} WHEA_RAW_DATA_FORMAT, *PWHEA_RAW_DATA_FORMAT;

