typedef enum _DOT11_PHY_TYPE
{
  dot11_phy_type_unknown = 0,
  dot11_phy_type_any = 0,
  dot11_phy_type_fhss = 1,
  dot11_phy_type_dsss = 2,
  dot11_phy_type_irbaseband = 3,
  dot11_phy_type_ofdm = 4,
  dot11_phy_type_hrdsss = 5,
  dot11_phy_type_erp = 6,
  dot11_phy_type_IHV_start = -2147483648,
  dot11_phy_type_IHV_end = -1,
} DOT11_PHY_TYPE, *PDOT11_PHY_TYPE;

