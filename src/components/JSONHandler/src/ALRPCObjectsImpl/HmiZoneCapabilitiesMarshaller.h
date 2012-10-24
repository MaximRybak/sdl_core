#ifndef HMIZONECAPABILITIESMARSHALLER_INCLUDE
#define HMIZONECAPABILITIESMARSHALLER_INCLUDE

#include <string>
#include <jsoncpp/json.h>

#include "PerfectHashTable.h"

#include "../../include/JSONHandler/ALRPCObjects/HmiZoneCapabilities.h"


/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/


//! marshalling class for HmiZoneCapabilities

class HmiZoneCapabilitiesMarshaller
{
public:

  static std::string toName(const HmiZoneCapabilities& e) 	{ return getName(e.mInternal) ?: ""; }

  static bool fromName(HmiZoneCapabilities& e,const std::string& s)
  { 
    return (e.mInternal=getIndex(s.c_str()))!=HmiZoneCapabilities::INVALID_ENUM;
  }

  static bool checkIntegrity(HmiZoneCapabilities& e)		{ return e.mInternal!=HmiZoneCapabilities::INVALID_ENUM; } 
  static bool checkIntegrityConst(const HmiZoneCapabilities& e)	{ return e.mInternal!=HmiZoneCapabilities::INVALID_ENUM; } 

  static bool fromString(const std::string& s,HmiZoneCapabilities& e);
  static const std::string toString(const HmiZoneCapabilities& e);

  static bool fromJSON(const Json::Value& s,HmiZoneCapabilities& e);
  static Json::Value toJSON(const HmiZoneCapabilities& e);

  static const char* getName(HmiZoneCapabilities::HmiZoneCapabilitiesInternal e)
  {
     return (e>=0 && e<2) ? mHashTable[e].name : NULL;
  }

  static const HmiZoneCapabilities::HmiZoneCapabilitiesInternal getIndex(const char* s);

  static const PerfectHashTable mHashTable[2];
};

#endif
