/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pilot
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Pilot.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Pilot.h"
//## link itsSterownik
#include "Sterownik.h"
//#[ ignore
#define Default_Pilot_Pilot_SERIALIZE OM_NO_OP

#define Default_Pilot_czytajUstawienia_SERIALIZE OM_NO_OP

#define Default_Pilot_zapiszUstawienia_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Pilot
Pilot::Pilot(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Pilot, Pilot(), 0, Default_Pilot_Pilot_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsSterownik = NULL;
}

Pilot::~Pilot() {
    NOTIFY_DESTRUCTOR(~Pilot, true);
    cleanUpRelations();
}

std::string Pilot::czytajUstawienia() {
    NOTIFY_OPERATION(czytajUstawienia, czytajUstawienia(), 0, Default_Pilot_czytajUstawienia_SERIALIZE);
    //#[ operation czytajUstawienia()
    return "";
    //#]
}

bool Pilot::zapiszUstawienia() {
    NOTIFY_OPERATION(zapiszUstawienia, zapiszUstawienia(), 0, Default_Pilot_zapiszUstawienia_SERIALIZE);
    //#[ operation zapiszUstawienia()
    return true;
    //#]
}

Sterownik* Pilot::getItsSterownik() const {
    return itsSterownik;
}

void Pilot::setItsSterownik(Sterownik* p_Sterownik) {
    _setItsSterownik(p_Sterownik);
}

bool Pilot::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Pilot::cleanUpRelations() {
    if(itsSterownik != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSterownik");
            itsSterownik = NULL;
        }
}

void Pilot::__setItsSterownik(Sterownik* p_Sterownik) {
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

void Pilot::_setItsSterownik(Sterownik* p_Sterownik) {
    __setItsSterownik(p_Sterownik);
}

void Pilot::_clearItsSterownik() {
    NOTIFY_RELATION_CLEARED("itsSterownik");
    itsSterownik = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPilot::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSterownik", false, true);
    if(myReal->itsSterownik)
        {
            aomsRelations->ADD_ITEM(myReal->itsSterownik);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Pilot, Default, Default, false, OMAnimatedPilot)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Pilot.cpp
*********************************************************************/
