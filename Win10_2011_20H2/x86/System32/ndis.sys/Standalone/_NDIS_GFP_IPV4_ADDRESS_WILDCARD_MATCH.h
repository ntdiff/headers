typedef enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
  NdisGfpWildcardMatchTypeUndefined = 0,
  NdisGfpWildcardMatchTypeEqual = 1,
  NdisGfpWildcardMatchTypeMaskEqual = 2,
  NdisGfpWildcardMatchTypeInRange = 3,
  NdisGfpWildcardMatchTypeMax = 4,
} NDIS_GFP_WILDCARD_MATCH_TYPE, *PNDIS_GFP_WILDCARD_MATCH_TYPE;

struct in_addr
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned char s_b1;
        /* 0x0001 */ unsigned char s_b2;
        /* 0x0002 */ unsigned char s_b3;
        /* 0x0003 */ unsigned char s_b4;
      } /* size: 0x0004 */ S_un_b;
      struct
      {
        /* 0x0000 */ unsigned short s_w1;
        /* 0x0002 */ unsigned short s_w2;
      } /* size: 0x0004 */ S_un_w;
      /* 0x0000 */ unsigned long S_addr;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ S_un;
}; /* size: 0x0004 */

typedef struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH
{
  /* 0x0000 */ enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;
  /* 0x0004 */ struct in_addr IPAddress;
  union
  {
    union
    {
      /* 0x0008 */ unsigned long PrefixLength;
      /* 0x0008 */ unsigned long RangeSize;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ MatchValue;
} NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH, *PNDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH; /* size: 0x000c */

