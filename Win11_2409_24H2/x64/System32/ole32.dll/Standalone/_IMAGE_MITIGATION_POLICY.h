typedef enum _IMAGE_MITIGATION_POLICY
{
  ImageDepPolicy = 0,
  ImageAslrPolicy = 1,
  ImageDynamicCodePolicy = 2,
  ImageStrictHandleCheckPolicy = 3,
  ImageSystemCallDisablePolicy = 4,
  ImageMitigationOptionsMask = 5,
  ImageExtensionPointDisablePolicy = 6,
  ImageControlFlowGuardPolicy = 7,
  ImageSignaturePolicy = 8,
  ImageFontDisablePolicy = 9,
  ImageImageLoadPolicy = 10,
  ImagePayloadRestrictionPolicy = 11,
  ImageChildProcessPolicy = 12,
  ImageSehopPolicy = 13,
  ImageHeapPolicy = 14,
  ImageUserShadowStackPolicy = 15,
  ImageRedirectionTrustPolicy = 16,
  ImageUserPointerAuthPolicy = 17,
  MaxImageMitigationPolicy = 18,
} IMAGE_MITIGATION_POLICY, *PIMAGE_MITIGATION_POLICY;

