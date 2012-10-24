#ifndef UNREGISTERAPPINTERFACE_RESPONSE_INCLUDE
#define UNREGISTERAPPINTERFACE_RESPONSE_INCLUDE

#include <string>

#include "Result.h"
#include "../../../JSONHandler/ALRPCResponse.hh"


/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/


class UnregisterAppInterface_response : public ALRPCResponse
{
public:

  UnregisterAppInterface_response(const UnregisterAppInterface_response& c);
  UnregisterAppInterface_response(void);
  
  virtual ~UnregisterAppInterface_response(void);

  UnregisterAppInterface_response& operator =(const UnregisterAppInterface_response&);

  bool checkIntegrity(void);

  bool get_success(void) const;
  const Result& get_resultCode(void) const;
  const std::string* get_info(void) const;

  bool set_success(bool success_);
  bool set_resultCode(const Result& resultCode_);
  void reset_info(void);
  bool set_info(const std::string& info_);

private:

  friend class UnregisterAppInterface_responseMarshaller;

  bool success;
  Result resultCode;
  std::string* info;	//!< (1000)
};

#endif
