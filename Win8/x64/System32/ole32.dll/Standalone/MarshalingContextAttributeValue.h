enum CO_MARSHALING_CONTEXT_ATTRIBUTES
{
  CO_MARSHALING_SOURCE_IS_APP_CONTAINER = 0,
};

struct MarshalingContextAttributeValue
{
  /* 0x0000 */ enum CO_MARSHALING_CONTEXT_ATTRIBUTES attribute;
  /* 0x0008 */ unsigned __int64 value;
}; /* size: 0x0010 */

