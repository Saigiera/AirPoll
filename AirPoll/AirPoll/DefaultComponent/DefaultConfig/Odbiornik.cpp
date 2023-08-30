/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Odbiornik
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Odbiornik.h"
//## link itsSterownik
#include "Sterownik.h"
//#[ ignore
#define Default_Odbiornik_Odbiornik_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Odbiornik
Odbiornik::Odbiornik(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Odbiornik, Odbiornik(), 0, Default_Odbiornik_Odbiornik_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsSterownik = NULL;
}

Odbiornik::~Odbiornik() {
    NOTIFY_DESTRUCTOR(~Odbiornik, true);
    cleanUpRelations();
}

bool Odbiornik::getImpulsOK() const {
    return ImpulsOK;
}

void Odbiornik::setImpulsOK(bool p_ImpulsOK) {
    ImpulsOK = p_ImpulsOK;
}

Sterownik* Odbiornik::getItsSterownik() const {
    return itsSterownik;
}

void Odbiornik::setItsSterownik(Sterownik* p_Sterownik) {
    _setItsSterownik(p_Sterownik);
}

bool Odbiornik::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Odbiornik::cleanUpRelations() {
    if(itsSterownik != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSterownik");
            itsSterownik = NULL;
        }
}

void Odbiornik::__setItsSterownik(Sterownik* p_Sterownik) {
    itsSterownik = p_Sterownik;
    if(p_Sterownik != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSterownik", p_Sterownik, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSterownik");
        }
}

void Odbiornik::_setItsSterownik(Sterownik* p_Sterownik) {
    __setItsSterownik(p_Sterownik);
}

void Odbiornik::_clearItsSterownik() {
    NOTIFY_RELATION_CLEARED("itsSterownik");
    itsSterownik = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOdbiornik::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("ImpulsOK", x2String(myReal->ImpulsOK));
}

void OMAnimatedOdbiornik::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSterownik", false, true);
    if(myReal->itsSterownik)
        {
            aomsRelations->ADD_ITEM(myReal->itsSterownik);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Odbiornik, Default, Default, false, OMAnimatedOdbiornik)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.cpp
*********************************************************************/
