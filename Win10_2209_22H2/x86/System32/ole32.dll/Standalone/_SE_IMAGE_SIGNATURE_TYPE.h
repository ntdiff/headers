typedef enum _SE_IMAGE_SIGNATURE_TYPE
{
  SeImageSignatureNone = 0,
  SeImageSignatureEmbedded = 1,
  SeImageSignatureCache = 2,
  SeImageSignatureCatalogCached = 3,
  SeImageSignatureCatalogNotCached = 4,
  SeImageSignatureCatalogHint = 5,
  SeImageSignaturePackageCatalog = 6,
} SE_IMAGE_SIGNATURE_TYPE, *PSE_IMAGE_SIGNATURE_TYPE;

