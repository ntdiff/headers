typedef enum _WWAN_SMS_CDMA_ENCODING
{
  WwanSmsCdmaEncodingOctet = 0,
  WwanSmsCdmaEncodingEpm = 1,
  WwanSmsCdmaEncoding7BitAscii = 2,
  WwanSmsCdmaEncodingIa5 = 3,
  WwanSmsCdmaEncodingUnicode = 4,
  WwanSmsCdmaEncodingShiftJis = 5,
  WwanSmsCdmaEncodingKorean = 6,
  WwanSmsCdmaEncodingLatinHebrew = 7,
  WwanSmsCdmaEncodingLatin = 8,
  WwanSmsCdmaEncodingGsm7Bit = 9,
  WwanSmsCdmaEncodingMax = 10,
} WWAN_SMS_CDMA_ENCODING, *PWWAN_SMS_CDMA_ENCODING;

typedef enum _WWAN_SMS_CDMA_LANG
{
  WwanSmsCdmaLangUnknown = 0,
  WwanSmsCdmaLangEnglish = 1,
  WwanSmsCdmaLangFrench = 2,
  WwanSmsCdmaLangSpanish = 3,
  WwanSmsCdmaLangJapanese = 4,
  WwanSmsCdmaLangKorean = 5,
  WwanSmsCdmaLangChinese = 6,
  WwanSmsCdmaLangHebrew = 7,
  WwanSmsCdmaLangMax = 8,
} WWAN_SMS_CDMA_LANG, *PWWAN_SMS_CDMA_LANG;

typedef struct _WWAN_SMS_SEND_CDMA
{
  /* 0x0000 */ enum _WWAN_SMS_CDMA_ENCODING EncodingId;
  /* 0x0004 */ enum _WWAN_SMS_CDMA_LANG LanguageId;
  /* 0x0008 */ char Address[50];
  /* 0x003a */ unsigned short SizeInBytes;
  /* 0x003c */ unsigned char SizeInCharacters;
  /* 0x003d */ unsigned char EncodedMsg[160];
  /* 0x00dd */ char __PADDING__[3];
} WWAN_SMS_SEND_CDMA, *PWWAN_SMS_SEND_CDMA; /* size: 0x00e0 */

