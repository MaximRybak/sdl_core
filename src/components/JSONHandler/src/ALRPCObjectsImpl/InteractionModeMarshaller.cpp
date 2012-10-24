#include <cstring>
#include "../../include/JSONHandler/ALRPCObjects/InteractionMode.h"
#include "InteractionModeMarshaller.h"
#include "InteractionModeMarshaller.inc"


/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/



const InteractionMode::InteractionModeInternal InteractionModeMarshaller::getIndex(const char* s)
{
  if(!s)
    return InteractionMode::INVALID_ENUM;
  const struct PerfectHashTable* p=InteractionMode_intHash::getPointer(s,strlen(s));
  return p ? static_cast<InteractionMode::InteractionModeInternal>(p->idx) : InteractionMode::INVALID_ENUM;
}


bool InteractionModeMarshaller::fromJSON(const Json::Value& s,InteractionMode& e)
{
  e.mInternal=InteractionMode::INVALID_ENUM;
  if(!s.isString())
    return false;

  e.mInternal=getIndex(s.asString().c_str());
  return (e.mInternal!=InteractionMode::INVALID_ENUM);
}


Json::Value InteractionModeMarshaller::toJSON(const InteractionMode& e)
{
  if(e.mInternal==InteractionMode::INVALID_ENUM) 
    return Json::Value(Json::nullValue);
  const char* s=getName(e.mInternal);
  return s ? Json::Value(s) : Json::Value(Json::nullValue);
}


bool InteractionModeMarshaller::fromString(const std::string& s,InteractionMode& e)
{
  e.mInternal=InteractionMode::INVALID_ENUM;
  try
  {
    Json::Reader reader;
    Json::Value json;
    if(!reader.parse(s,json,false))  return false;
    if(fromJSON(json,e))  return true;
  }
  catch(...)
  {
    return false;
  }
  return false;
}

const std::string InteractionModeMarshaller::toString(const InteractionMode& e)
{
  Json::FastWriter writer;
  return e.mInternal==InteractionMode::INVALID_ENUM ? "" : writer.write(toJSON(e));

}

const PerfectHashTable InteractionModeMarshaller::mHashTable[3]=
{
  {"MANUAL_ONLY",0},
  {"VR_ONLY",1},
  {"BOTH",2}
};
