#include <cstring>
#include "../../include/JSONHandler/ALRPCObjects/TextAlignment.h"
#include "TextAlignmentMarshaller.h"
#include "TextAlignmentMarshaller.inc"


/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/



const TextAlignment::TextAlignmentInternal TextAlignmentMarshaller::getIndex(const char* s)
{
  if(!s)
    return TextAlignment::INVALID_ENUM;
  const struct PerfectHashTable* p=TextAlignment_intHash::getPointer(s,strlen(s));
  return p ? static_cast<TextAlignment::TextAlignmentInternal>(p->idx) : TextAlignment::INVALID_ENUM;
}


bool TextAlignmentMarshaller::fromJSON(const Json::Value& s,TextAlignment& e)
{
  e.mInternal=TextAlignment::INVALID_ENUM;
  if(!s.isString())
    return false;

  e.mInternal=getIndex(s.asString().c_str());
  return (e.mInternal!=TextAlignment::INVALID_ENUM);
}


Json::Value TextAlignmentMarshaller::toJSON(const TextAlignment& e)
{
  if(e.mInternal==TextAlignment::INVALID_ENUM) 
    return Json::Value(Json::nullValue);
  const char* s=getName(e.mInternal);
  return s ? Json::Value(s) : Json::Value(Json::nullValue);
}


bool TextAlignmentMarshaller::fromString(const std::string& s,TextAlignment& e)
{
  e.mInternal=TextAlignment::INVALID_ENUM;
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

const std::string TextAlignmentMarshaller::toString(const TextAlignment& e)
{
  Json::FastWriter writer;
  return e.mInternal==TextAlignment::INVALID_ENUM ? "" : writer.write(toJSON(e));

}

const PerfectHashTable TextAlignmentMarshaller::mHashTable[3]=
{
  {"LEFT_ALIGNED",0},
  {"RIGHT_ALIGNED",1},
  {"CENTERED",2}
};
