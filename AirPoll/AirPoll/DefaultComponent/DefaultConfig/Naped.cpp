/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Naped
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Naped.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Naped.h"
//## link itsSterownik
#include "Sterownik.h"
//#[ ignore
#define Default_Naped_Naped_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Naped
Naped::Naped(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Naped, Naped(), 0, Default_Naped_Naped_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsSterownik = NULL;
}

Naped::~Naped() {
    NOTIFY_DESTRUCTOR(~Naped, true);
    cleanUpRelations();
}

Sterownik* Naped::getItsSterownik() const {
    return itsSterownik;
}

void Naped::setItsSterownik(Sterownik* p_Sterownik) {
    _setItsSterownik(p_Sterownik);
}

bool Naped::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Naped::cleanUpRelations() {
    if(itsSterownik != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSterownik");
            itsSterownik = NULL;
        }
}

void Naped::__setItsSterownik(Sterownik* p_Sterownik) {
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

void Naped::_setItsSterownik(Sterownik* p_Sterownik) {
    __setItsSterownik(p_Sterownik);
}

void Naped::_clearItsSterownik() {
    NOTIFY_RELATION_CLEARED("itsSterownik");
    itsSterownik = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNaped::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSterownik", false, true);
    if(myReal->itsSterownik)
        {
            aomsRelations->ADD_ITEM(myReal->itsSterownik);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Naped, Default, Default, false, OMAnimatedNaped)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Naped.cpp
*********************************************************************/
