struct ComTelemetryProvider::StaticHandle
{
  /* 0x0000 */ const struct _TlgProvider_t* handle;
}; /* size: 0x0004 */

class ComTelemetryProvider
{
  /* 0x0010 */ struct ComTelemetryProvider::StaticHandle m_staticHandle;
}; /* size: 0x0014 */

