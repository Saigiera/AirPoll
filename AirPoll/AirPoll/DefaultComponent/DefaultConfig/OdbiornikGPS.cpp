/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OdbiornikGPS
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/OdbiornikGPS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "OdbiornikGPS.h"
//## link itsAplikacja
#include "Aplikacja.h"
//#[ ignore
#define Default_OdbiornikGPS_OdbiornikGPS_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class OdbiornikGPS
OdbiornikGPS::OdbiornikGPS(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(OdbiornikGPS, OdbiornikGPS(), 0, Default_OdbiornikGPS_OdbiornikGPS_SERIALIZE);
    setActiveContext(this, true);
    {
        {
            itsIkona.setShouldDelete(false);
        }
    }
    itsAplikacja = NULL;
    initRelations();
    initStatechart();
}

OdbiornikGPS::~OdbiornikGPS() {
    NOTIFY_DESTRUCTOR(~OdbiornikGPS, true);
    cleanUpRelations();
}

bool OdbiornikGPS::getLokalizacja() const {
    return Lokalizacja;
}

void OdbiornikGPS::setLokalizacja(bool p_Lokalizacja) {
    Lokalizacja = p_Lokalizacja;
}

Aplikacja* OdbiornikGPS::getItsAplikacja() const {
    return itsAplikacja;
}

void OdbiornikGPS::setItsAplikacja(Aplikacja* p_Aplikacja) {
    _setItsAplikacja(p_Aplikacja);
}

Ikona* OdbiornikGPS::getItsIkona() const {
    return (Ikona*) &itsIkona;
}

bool OdbiornikGPS::startBehavior() {
    bool done = true;
    done &= itsIkona.startBehavior();
    done &= OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void OdbiornikGPS::initRelations() {
    itsIkona._setItsOdbiornikGPS(this);
}

void OdbiornikGPS::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void OdbiornikGPS::cleanUpRelations() {
    if(itsAplikacja != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAplikacja");
            itsAplikacja = NULL;
        }
}

void OdbiornikGPS::__setItsAplikacja(Aplikacja* p_Aplikacja) {
    itsAplikacja = p_Aplikacja;
    if(p_Aplikacja != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAplikacja", p_Aplikacja, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAplikacja");
        }
}

void OdbiornikGPS::_setItsAplikacja(Aplikacja* p_Aplikacja) {
    __setItsAplikacja(p_Aplikacja);
}

void OdbiornikGPS::_clearItsAplikacja() {
    NOTIFY_RELATION_CLEARED("itsAplikacja");
    itsAplikacja = NULL;
}

void OdbiornikGPS::destroy() {
    itsIkona.destroy();
    OMReactive::destroy();
}

void OdbiornikGPS::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Wylaczony");
        rootState_subState = Wylaczony;
        rootState_active = Wylaczony;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus OdbiornikGPS::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Wylaczony
        case Wylaczony:
        {
            if(IS_EVENT_TYPE_OF(evImpuls_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Wylaczony");
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    pushNullTransition();
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Oczekiwanie
        case Oczekiwanie:
        {
            if(IS_EVENT_TYPE_OF(evLokalizacja_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie");
                    NOTIFY_STATE_ENTERED("ROOT.LokalizowanieStan");
                    pushNullTransition();
                    rootState_subState = LokalizowanieStan;
                    rootState_active = LokalizowanieStan;
                    //#[ state LokalizowanieStan.(Entry) 
                    evLokalizowanie();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie");
                    NOTIFY_STATE_ENTERED("ROOT.Wylaczony");
                    rootState_subState = Wylaczony;
                    rootState_active = Wylaczony;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State LokalizowanieStan
        case LokalizowanieStan:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 6 
                    if(Lokalizacja != true)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("6");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.LokalizowanieStan");
                            NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                            pushNullTransition();
                            rootState_subState = Oczekiwanie;
                            rootState_active = Oczekiwanie;
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("5");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.LokalizowanieStan");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state sendaction_3.(Entry) 
                            itsAplikacja->GEN(evImpuls);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    pushNullTransition();
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
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
void OMAnimatedOdbiornikGPS::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Lokalizacja", x2String(myReal->Lokalizacja));
}

void OMAnimatedOdbiornikGPS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAplikacja", false, true);
    if(myReal->itsAplikacja)
        {
            aomsRelations->ADD_ITEM(myReal->itsAplikacja);
        }
    aomsRelations->addRelation("itsIkona", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsIkona);
}

void OMAnimatedOdbiornikGPS::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case OdbiornikGPS::Wylaczony:
        {
            Wylaczony_serializeStates(aomsState);
        }
        break;
        case OdbiornikGPS::Oczekiwanie:
        {
            Oczekiwanie_serializeStates(aomsState);
        }
        break;
        case OdbiornikGPS::LokalizowanieStan:
        {
            LokalizowanieStan_serializeStates(aomsState);
        }
        break;
        case OdbiornikGPS::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedOdbiornikGPS::Wylaczony_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wylaczony");
}

void OMAnimatedOdbiornikGPS::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedOdbiornikGPS::Oczekiwanie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Oczekiwanie");
}

void OMAnimatedOdbiornikGPS::LokalizowanieStan_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LokalizowanieStan");
}
//#]

IMPLEMENT_REACTIVE_META_P(OdbiornikGPS, Default, Default, false, OMAnimatedOdbiornikGPS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/OdbiornikGPS.cpp
*********************************************************************/
