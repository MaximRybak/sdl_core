#ifndef GPSDATAMARSHALLER_INCLUDE
#define GPSDATAMARSHALLER_INCLUDE

#include <string>
#include <jsoncpp/json.h>

#include "../../include/JSONHandler/ALRPCObjects/GPSData.h"


/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/


struct GPSDataMarshaller
{
  static bool checkIntegrity(GPSData& e);
  static bool checkIntegrityConst(const GPSData& e);

  static bool fromString(const std::string& s,GPSData& e);
  static const std::string toString(const GPSData& e);

  static bool fromJSON(const Json::Value& s,GPSData& e);
  static Json::Value toJSON(const GPSData& e);
};
#endif
