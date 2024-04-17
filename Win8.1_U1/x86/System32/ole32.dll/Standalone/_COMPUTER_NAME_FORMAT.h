typedef enum _COMPUTER_NAME_FORMAT
{
  ComputerNameNetBIOS = 0,
  ComputerNameDnsHostname = 1,
  ComputerNameDnsDomain = 2,
  ComputerNameDnsFullyQualified = 3,
  ComputerNamePhysicalNetBIOS = 4,
  ComputerNamePhysicalDnsHostname = 5,
  ComputerNamePhysicalDnsDomain = 6,
  ComputerNamePhysicalDnsFullyQualified = 7,
  ComputerNameMax = 8,
} COMPUTER_NAME_FORMAT, *PCOMPUTER_NAME_FORMAT;

