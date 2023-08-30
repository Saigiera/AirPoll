/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DetektorKolizji
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/DetektorKolizji.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DetektorKolizji.h"
//## link itsSterownik
#include "Sterownik.h"
//#[ ignore
#define Default_DetektorKolizji_DetektorKolizji_SERIALIZE OM_NO_OP

#define Default_DetektorKolizji_zerujIloscImpulsow_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class DetektorKolizji
DetektorKolizji::DetektorKolizji(IOxfActive* theActiveContext) : iloscImpulsowOdebranych(0), iloscImpulsowWyslanych(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DetektorKolizji, DetektorKolizji(), 0, Default_DetektorKolizji_DetektorKolizji_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsSterownik = NULL;
}

DetektorKolizji::~DetektorKolizji() {
    NOTIFY_DESTRUCTOR(~DetektorKolizji, true);
    cleanUpRelations();
}

void DetektorKolizji::zerujIloscImpulsow() {
    NOTIFY_OPERATION(zerujIloscImpulsow, zerujIloscImpulsow(), 0, Default_DetektorKolizji_zerujIloscImpulsow_SERIALIZE);
    //#[ operation zerujIloscImpulsow()
    iloscImpulsowWyslanych = 0;
    iloscImpulsowOdebranych = 0;
    //#]
}

int DetektorKolizji::getIloscImpulsowOdebranych() const {
    return iloscImpulsowOdebranych;
}

void DetektorKolizji::setIloscImpulsowOdebranych(int p_iloscImpulsowOdebranych) {
    iloscImpulsowOdebranych = p_iloscImpulsowOdebranych;
}

int DetektorKolizji::getIloscImpulsowWyslanych() const {
    return iloscImpulsowWyslanych;
}

void DetektorKolizji::setIloscImpulsowWyslanych(int p_iloscImpulsowWyslanych) {
    iloscImpulsowWyslanych = p_iloscImpulsowWyslanych;
}

Sterownik* DetektorKolizji::getItsSterownik() const {
    return itsSterownik;
}

void DetektorKolizji::setItsSterownik(Sterownik* p_Sterownik) {
    _setItsSterownik(p_Sterownik);
}

bool DetektorKolizji::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DetektorKolizji::cleanUpRelations() {
    if(itsSterownik != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSterownik");
            itsSterownik = NULL;
        }
}

void DetektorKolizji::__setItsSterownik(Sterownik* p_Sterownik) {
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

void DetektorKolizji::_setItsSterownik(Sterownik* p_Sterownik) {
    __setItsSterownik(p_Sterownik);
}

void DetektorKolizji::_clearItsSterownik() {
    NOTIFY_RELATION_CLEARED("itsSterownik");
    itsSterownik = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDetektorKolizji::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("iloscImpulsowOdebranych", x2String(myReal->iloscImpulsowOdebranych));
    aomsAttributes->addAttribute("iloscImpulsowWyslanych", x2String(myReal->iloscImpulsowWyslanych));
}

void OMAnimatedDetektorKolizji::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSterownik", false, true);
    if(myReal->itsSterownik)
        {
            aomsRelations->ADD_ITEM(myReal->itsSterownik);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(DetektorKolizji, Default, Default, false, OMAnimatedDetektorKolizji)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/DetektorKolizji.cpp
*********************************************************************/
