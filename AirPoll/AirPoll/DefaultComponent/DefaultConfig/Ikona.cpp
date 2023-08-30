/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Ikona
//!	Generated Date	: Tue, 29, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Ikona.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Ikona.h"
//## link itsOdbiornikGPS
#include "OdbiornikGPS.h"
//#[ ignore
#define Default_Ikona_Ikona_SERIALIZE OM_NO_OP

#define Default_Ikona_czytajUstawienia_SERIALIZE OM_NO_OP

#define Default_Ikona_zapiszUstawienia_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Ikona
Ikona::Ikona(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Ikona, Ikona(), 0, Default_Ikona_Ikona_SERIALIZE);
    setActiveContext(this, true);
    itsOdbiornikGPS = NULL;
    initStatechart();
}

Ikona::~Ikona() {
    NOTIFY_DESTRUCTOR(~Ikona, true);
    cleanUpRelations();
    cancelTimeouts();
}

std::string Ikona::czytajUstawienia() {
    NOTIFY_OPERATION(czytajUstawienia, czytajUstawienia(), 0, Default_Ikona_czytajUstawienia_SERIALIZE);
    //#[ operation czytajUstawienia()
    return "";
    //#]
}

bool Ikona::zapiszUstawienia() {
    NOTIFY_OPERATION(zapiszUstawienia, zapiszUstawienia(), 0, Default_Ikona_zapiszUstawienia_SERIALIZE);
    //#[ operation zapiszUstawienia()
    return true;
    //#]
}

OdbiornikGPS* Ikona::getItsOdbiornikGPS() const {
    return itsOdbiornikGPS;
}

void Ikona::setItsOdbiornikGPS(OdbiornikGPS* p_OdbiornikGPS) {
    _setItsOdbiornikGPS(p_OdbiornikGPS);
}

bool Ikona::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void Ikona::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Ikona::cleanUpRelations() {
    if(itsOdbiornikGPS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOdbiornikGPS");
            itsOdbiornikGPS = NULL;
        }
}

void Ikona::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Ikona::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Ikona::__setItsOdbiornikGPS(OdbiornikGPS* p_OdbiornikGPS) {
    itsOdbiornikGPS = p_OdbiornikGPS;
    if(p_OdbiornikGPS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOdbiornikGPS", p_OdbiornikGPS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOdbiornikGPS");
        }
}

void Ikona::_setItsOdbiornikGPS(OdbiornikGPS* p_OdbiornikGPS) {
    __setItsOdbiornikGPS(p_OdbiornikGPS);
}

void Ikona::_clearItsOdbiornikGPS() {
    NOTIFY_RELATION_CLEARED("itsOdbiornikGPS");
    itsOdbiornikGPS = NULL;
}

void Ikona::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Nieaktywowana");
        rootState_subState = Nieaktywowana;
        rootState_active = Nieaktywowana;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Ikona::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Nieaktywowana
        case Nieaktywowana:
        {
            if(IS_EVENT_TYPE_OF(evKlikniecie_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Nieaktywowana");
                    //#[ transition 1 
                    std::cout << "Odpalaj";
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Oczekujaca");
                    rootState_subState = Oczekujaca;
                    rootState_active = Oczekujaca;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Oczekujaca
        case Oczekujaca:
        {
            if(IS_EVENT_TYPE_OF(evKlikniecie_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Oczekujaca");
                    NOTIFY_STATE_ENTERED("ROOT.Nieaktywowana");
                    rootState_subState = Nieaktywowana;
                    rootState_active = Nieaktywowana;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evImpuls_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Oczekujaca");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    itsOdbiornikGPS->GEN(evKlikniecie);
                    //#]
                    rootState_timeout = scheduleTimeout(3, "ROOT.sendaction_2");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                            NOTIFY_STATE_ENTERED("ROOT.Oczekujaca");
                            rootState_subState = Oczekujaca;
                            rootState_active = Oczekujaca;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedIkona::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsOdbiornikGPS", false, true);
    if(myReal->itsOdbiornikGPS)
        {
            aomsRelations->ADD_ITEM(myReal->itsOdbiornikGPS);
        }
}

void OMAnimatedIkona::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Ikona::Nieaktywowana:
        {
            Nieaktywowana_serializeStates(aomsState);
        }
        break;
        case Ikona::Oczekujaca:
        {
            Oczekujaca_serializeStates(aomsState);
        }
        break;
        case Ikona::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedIkona::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedIkona::Oczekujaca_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Oczekujaca");
}

void OMAnimatedIkona::Nieaktywowana_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Nieaktywowana");
}
//#]

IMPLEMENT_REACTIVE_META_P(Ikona, Default, Default, false, OMAnimatedIkona)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Ikona.cpp
*********************************************************************/
