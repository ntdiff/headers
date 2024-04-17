class utl::vector<CROTItem *,utl::allocator<CROTItem *> >
{
  /* 0x0000 */ class CROTItem** _MyBegin;
  /* 0x0008 */ class CROTItem** _MyEnd;
  /* 0x0010 */ class CROTItem** _MyLimit;
}; /* size: 0x0018 */

class CCliRotHintTable
{
  /* 0x0008 */ void* _hSm;
}; /* size: 0x0010 */

class CRunningObjectTable
{
  /* 0x0010 */ class utl::vector<CROTItem *,utl::allocator<CROTItem *> > _rotList;
  /* 0x0028 */ class CCliRotHintTable _crht;
  /* 0x0038 */ unsigned short _wSigRotItem;
}; /* size: 0x0040 */

