/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lampa
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Lampa.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Lampa.h"
//## link itsSterownik
#include "Sterownik.h"
//#[ ignore
#define Default_Lampa_Lampa_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Lampa
Lampa::Lampa(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Lampa, Lampa(), 0, Default_Lampa_Lampa_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsSterownik = NULL;
}

Lampa::~Lampa() {
    NOTIFY_DESTRUCTOR(~Lampa, true);
    cleanUpRelations();
}

Sterownik* Lampa::getItsSterownik() const {
    return itsSterownik;
}

void Lampa::setItsSterownik(Sterownik* p_Sterownik) {
    _setItsSterownik(p_Sterownik);
}

bool Lampa::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Lampa::cleanUpRelations() {
    if(itsSterownik != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSterownik");
            itsSterownik = NULL;
        }
}

void Lampa::__setItsSterownik(Sterownik* p_Sterownik) {
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

void Lampa::_setItsSterownik(Sterownik* p_Sterownik) {
    __setItsSterownik(p_Sterownik);
}

void Lampa::_clearItsSterownik() {
    NOTIFY_RELATION_CLEARED("itsSterownik");
    itsSterownik = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLampa::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSterownik", false, true);
    if(myReal->itsSterownik)
        {
            aomsRelations->ADD_ITEM(myReal->itsSterownik);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Lampa, Default, Default, false, OMAnimatedLampa)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Lampa.cpp
*********************************************************************/
