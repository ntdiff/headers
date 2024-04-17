typedef enum _CSV_CONTROL_OP
{
  CsvControlStartRedirectFile = 2,
  CsvControlStopRedirectFile = 3,
  CsvControlQueryRedirectState = 4,
  CsvControlQueryFileRevision = 6,
  CsvControlQueryMdsPath = 8,
} CSV_CONTROL_OP, *PCSV_CONTROL_OP;

