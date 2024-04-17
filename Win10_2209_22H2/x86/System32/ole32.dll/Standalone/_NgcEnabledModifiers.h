typedef enum _NgcEnabledModifiers
{
  NgcEnabledModifier_ModifiersNotPresent = 0,
  NgcEnabledModifier_PostLogonProvisioningDisabled = 1,
  NgcEnabledModifier_CertificateRequiredForOnPremAuth = 2,
  NgcEnabledModifier_UseHelloCertsAsSmartCardCerts = 4,
  NgcEnabledModifier_UseCloudTrustForOnPremAuth = 8,
  NgcEnabledModifier_QueryDeploymentPolicy = 16,
} NgcEnabledModifiers, *PNgcEnabledModifiers;

