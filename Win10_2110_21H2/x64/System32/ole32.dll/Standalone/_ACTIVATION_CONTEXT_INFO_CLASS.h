typedef enum _ACTIVATION_CONTEXT_INFO_CLASS
{
  ActivationContextBasicInformation = 1,
  ActivationContextDetailedInformation = 2,
  AssemblyDetailedInformationInActivationContext = 3,
  FileInformationInAssemblyOfAssemblyInActivationContext = 4,
  RunlevelInformationInActivationContext = 5,
  CompatibilityInformationInActivationContext = 6,
  ActivationContextManifestResourceName = 7,
  MaxActivationContextInfoClass = 8,
  AssemblyDetailedInformationInActivationContxt = 3,
  FileInformationInAssemblyOfAssemblyInActivationContxt = 4,
} ACTIVATION_CONTEXT_INFO_CLASS, *PACTIVATION_CONTEXT_INFO_CLASS;

