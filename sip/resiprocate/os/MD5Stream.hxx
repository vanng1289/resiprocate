#ifndef MD5Stream_hxx
#define MD5Stream_hxx

#include <iostream>
#include "sip2/util/Data.hxx"
#include "sip2/util/vmd5.hxx"

namespace Vocal2
{

class MD5Buffer : public std::streambuf 
{
   public:
      MD5Buffer();
      virtual ~MD5Buffer();
      Data getHex();
   protected:
      virtual int sync();
      virtual int overflow(int c = -1);
   private:
      char mBuf[64];
      MD5Context mContext;
};

class MD5Stream : public std::ostream 
{
   public:
      MD5Stream();
      ~MD5Stream();
      Data getHex();
   private:
      MD5Buffer mStreambuf;
};

}


#endif
