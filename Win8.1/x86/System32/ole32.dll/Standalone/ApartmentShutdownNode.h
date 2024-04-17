class Microsoft::WRL::ComPtr<ApartmentShutdownNode>
{
  /* 0x0000 */ struct ApartmentShutdownNode* ptr_;
}; /* size: 0x0004 */

class Microsoft::WRL::ComPtr<IApartmentShutdown>
{
  /* 0x0000 */ struct IApartmentShutdown* ptr_;
}; /* size: 0x0004 */

struct ApartmentShutdownNode
{
  /* 0x000c */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> spNext;
  /* 0x0010 */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> spPrev;
  /* 0x0014 */ struct APARTMENT_SHUTDOWN_REGISTRATION_COOKIE__* cookie;
  /* 0x0018 */ class Microsoft::WRL::ComPtr<IApartmentShutdown> spShutdown;
  /* 0x001c */ unsigned char bCallbackInvoked;
  /* 0x001d */ char __PADDING__[3];
}; /* size: 0x0020 */

