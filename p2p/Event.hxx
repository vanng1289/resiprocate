#ifndef P2P_Event_hxx
#define P2P_Event_hxx

#include "p2p.hxx"

namespace p2p
{

class EventConsumer;

class Event 
{
   public:
      virtual ~Event(){};
      virtual void dispatch(EventConsumer& consumer) = 0;
};

}

#endif // P2P_Event_hxx
