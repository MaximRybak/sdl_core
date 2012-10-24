#ifndef STARTTIME_INCLUDE
#define STARTTIME_INCLUDE




/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/



class StartTime
{
public:

  StartTime(const StartTime& c);
  StartTime(void);

  bool checkIntegrity(void);
// getters

  unsigned int get_hours(void) const;
  unsigned int get_minutes(void) const;
  unsigned int get_seconds(void) const;

// setters

  bool set_hours(unsigned int hours_);
  bool set_minutes(unsigned int minutes_);
  bool set_seconds(unsigned int seconds_);

private:

  friend class StartTimeMarshaller;

  unsigned int hours;	//!<  (0,59)
  unsigned int minutes;	//!<  (0,59)
  unsigned int seconds;	//!<  (0,59)
};

#endif
