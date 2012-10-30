#ifndef GENERICRESPONSE_RESPONSE_INCLUDE
#define GENERICRESPONSE_RESPONSE_INCLUDE

#include <string>

#include "Result.h"
#include "JSONHandler/ALRPCResponse.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Tue Oct 30 08:29:32 2012
  source stamp	Thu Oct 25 06:49:27 2012
  author	robok0der
*/


/**
     Generic Response is sent, when the name of a received msg cannot be retrieved. Only used in case of an error.
     Currently, only resultCode INVALID_DATA is used.
*/

class GenericResponse_response : public ALRPCResponse
{
public:

  GenericResponse_response(const GenericResponse_response& c);
  GenericResponse_response(void);
  
  virtual ~GenericResponse_response(void);

  GenericResponse_response& operator =(const GenericResponse_response&);

  bool checkIntegrity(void);

  bool get_success(void) const;
  const Result& get_resultCode(void) const;
  const std::string* get_info(void) const;

  bool set_success(bool success_);
  bool set_resultCode(const Result& resultCode_);
  void reset_info(void);
  bool set_info(const std::string& info_);

private:

  friend class GenericResponse_responseMarshaller;


/**
     true, if successful
     false, if failed
*/
    bool success;

///  See Result
    Result resultCode;

///  Provides additional human readable info regarding the result.
    std::string* info;	//!< (1000)
};

#endif
