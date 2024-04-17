typedef enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
  IommuDomainPolicyAllowAll = 0,
  IommuDomainPolicyBlockPassthrough = 1,
  IommuDomainPolicyMax = 2,
} PNP_DEVICE_IOMMU_DOMAIN_POLICY, *PPNP_DEVICE_IOMMU_DOMAIN_POLICY;

