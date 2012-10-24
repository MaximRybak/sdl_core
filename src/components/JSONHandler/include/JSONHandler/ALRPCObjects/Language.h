#ifndef LANGUAGE_INCLUDE
#define LANGUAGE_INCLUDE


/*
  interface	Ford Sync RAPI
  version	2.0L
  date		2012-09-13
  generated at	Wed Oct 24 10:46:35 2012
  source stamp	Wed Oct 24 10:44:30 2012
  author	robok0der
*/


class Language
{
public:
  enum LanguageInternal
  {
    INVALID_ENUM=-1,

///  US English
    EN_US=0,

///  Mexican Spanish
    ES_MX=1,

///  Canadian French
    FR_CA=2,

///  EU German
    DE_EU=3,

///  EU Spanish
    ES_EU=4,

///  UK English
    EN_EU=5,

///  Russian
    RU_RU=6,

///  Turkish
    TR_TR=7,

///  EU Polish
    PL_EU=8,

///  French
    FR_EU=9,

///  Italian
    IT_EU=10,

///  Swedish
    SV_EU=11,

///  Portuguese
    PT_EU=12,

///  Dutch (Standard)
    NL_EU=13,

///  Australian English
    EN_AU=14,

///  Chinese (Mandarin)
    ZH_CN=15,

///  Taiwanese (Mandarin)
    ZH_TW=16,

///  Japanese
    JA_JP=17,

///  Arabic
    AR=18,

///  Korean
    KO_KR=19
  };

  Language() : mInternal(INVALID_ENUM)				{}
  Language(LanguageInternal e) : mInternal(e)		{}

  LanguageInternal get(void) const	{ return mInternal; }
  void set(LanguageInternal e)		{ mInternal=e; }

private:
  LanguageInternal mInternal;
  friend class LanguageMarshaller;
};

#endif
