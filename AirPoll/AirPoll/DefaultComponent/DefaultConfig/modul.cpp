/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: modul
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/modul.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "modul.h"
//#[ ignore
#define Default_modul_modul_SERIALIZE OM_NO_OP

#define Default_modul_czytajUstawienia_SERIALIZE OM_NO_OP

#define Default_modul_zapiszUstawienia_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class modul
modul::modul() {
    NOTIFY_CONSTRUCTOR(modul, modul(), 0, Default_modul_modul_SERIALIZE);
}

modul::~modul() {
    NOTIFY_DESTRUCTOR(~modul, true);
}

int modul::getId() const {
    return id;
}

void modul::setId(int p_id) {
    id = p_id;
}

std::string modul::getNazwa() const {
    return nazwa;
}

void modul::setNazwa(std::string p_nazwa) {
    nazwa = p_nazwa;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedmodul::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("nazwa", UNKNOWN2STRING(myReal->nazwa));
    aomsAttributes->addAttribute("id", x2String(myReal->id));
}
//#]

IMPLEMENT_META_P(modul, Default, Default, false, OMAnimatedmodul)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/modul.cpp
*********************************************************************/
