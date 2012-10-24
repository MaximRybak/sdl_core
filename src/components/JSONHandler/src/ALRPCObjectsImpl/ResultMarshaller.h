#ifndef RESULTMARSHALLER_INCLUDE
#define RESULTMARSHALLER_INCLUDE

#include <string>
#include <jsoncpp/json.h>

#include "PerfectHashTable.h"

#include "../../include/JSONHandler/ALRPCObjects/Result.h"


/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/


//! marshalling class for Result

class ResultMarshaller
{
public:

  static std::string toName(const Result& e) 	{ return getName(e.mInternal) ?: ""; }

  static bool fromName(Result& e,const std::string& s)
  { 
    return (e.mInternal=getIndex(s.c_str()))!=Result::INVALID_ENUM;
  }

  static bool checkIntegrity(Result& e)		{ return e.mInternal!=Result::INVALID_ENUM; } 
  static bool checkIntegrityConst(const Result& e)	{ return e.mInternal!=Result::INVALID_ENUM; } 

  static bool fromString(const std::string& s,Result& e);
  static const std::string toString(const Result& e);

  static bool fromJSON(const Json::Value& s,Result& e);
  static Json::Value toJSON(const Result& e);

  static const char* getName(Result::ResultInternal e)
  {
     return (e>=0 && e<28) ? mHashTable[e].name : NULL;
  }

  static const Result::ResultInternal getIndex(const char* s);

  static const PerfectHashTable mHashTable[28];
};

#endif
