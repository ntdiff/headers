enum BANNER_NOTIFICATION_EVENT
{
  BNE_Rendered = 0,
  BNE_Hovered = 1,
  BNE_Closed = 2,
  BNE_Dismissed = 3,
  BNE_Button1Clicked = 4,
  BNE_Button2Clicked = 5,
};

struct BANNER_NOTIFICATION
{
  /* 0x0000 */ enum BANNER_NOTIFICATION_EVENT event;
  /* 0x0008 */ const wchar_t* providerIdentity;
  /* 0x0010 */ const wchar_t* contentId;
}; /* size: 0x0018 */

