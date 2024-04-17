typedef enum _PROCESS_ENERGY_COMPONENT_TYPE_NUM
{
  PsEnergyComponentTypeCpu = 0,
  PsEnergyComponentTypeStorage = 1,
  PsEnergyComponentTypeNetwork = 2,
  PsEnergyComponentTypeMBB = 3,
  PsEnergyComponentTypeForegroundTime = 4,
  PsEnergyComponentTypeDesktopVisibleTime = 5,
  PsEnergyComponentTypeWindowResource = 6,
  PsEnergyComponentTypeCompositorResource = 7,
  PsEnergyComponentTypeTrackingState = 8,
  PsEnergyComponentTypeMax = 9,
} PROCESS_ENERGY_COMPONENT_TYPE_NUM, *PPROCESS_ENERGY_COMPONENT_TYPE_NUM;

