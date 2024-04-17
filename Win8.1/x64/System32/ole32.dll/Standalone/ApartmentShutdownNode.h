class Microsoft::WRL::ComPtr<ApartmentShutdownNode>
{
  /* 0x0000 */ struct ApartmentShutdownNode* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IApartmentShutdown>
{
  /* 0x0000 */ struct IApartmentShutdown* ptr_;
}; /* size: 0x0008 */

struct ApartmentShutdownNode
{
  /* 0x0010 */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> spNext;
  /* 0x0018 */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> spPrev;
  /* 0x0020 */ struct APARTMENT_SHUTDOWN_REGISTRATION_COOKIE__* cookie;
  /* 0x0028 */ class Microsoft::WRL::ComPtr<IApartmentShutdown> spShutdown;
  /* 0x0030 */ unsigned char bCallbackInvoked;
  /* 0x0031 */ char __PADDING__[7];
}; /* size: 0x0038 */

