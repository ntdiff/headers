enum EChannelState
{
  client_cs = 1,
  proxy_cs = 2,
  server_cs = 4,
  freethreaded_cs = 8,
  process_local_cs = 32,
  locked_cs = 64,
  neutral_cs = 256,
  fake_async_cs = 512,
  app_security_cs = 1024,
  thread_local_cs = 2048,
  syntax_negotiate_cs = 4096,
};

