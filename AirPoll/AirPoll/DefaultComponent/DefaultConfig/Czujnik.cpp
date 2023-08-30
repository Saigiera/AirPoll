/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Czujnik
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Czujnik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Czujnik.h"
//## link itsAplikacja
#include "Aplikacja.h"
//#[ ignore
#define Default_Czujnik_Czujnik_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Czujnik
Czujnik::Czujnik(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Czujnik, Czujnik(), 0, Default_Czujnik_Czujnik_SERIALIZE);
    setActiveContext(this, true);
    itsAplikacja = NULL;
    initStatechart();
}

Czujnik::~Czujnik() {
    NOTIFY_DESTRUCTOR(~Czujnik, true);
    cleanUpRelations();
    cancelTimeouts();
}

int Czujnik::getNormaZanieczyszczen() const {
    return NormaZanieczyszczen;
}

void Czujnik::setNormaZanieczyszczen(int p_NormaZanieczyszczen) {
    NormaZanieczyszczen = p_NormaZanieczyszczen;
}

int Czujnik::getZanieczyszczeniaTeraz() const {
    return ZanieczyszczeniaTeraz;
}

void Czujnik::setZanieczyszczeniaTeraz(int p_ZanieczyszczeniaTeraz) {
    ZanieczyszczeniaTeraz = p_ZanieczyszczeniaTeraz;
}

Stany Czujnik::getPraca() const {
    return praca;
}

void Czujnik::setPraca(Stany p_praca) {
    praca = p_praca;
}

Aplikacja* Czujnik::getItsAplikacja() const {
    return itsAplikacja;
}

void Czujnik::setItsAplikacja(Aplikacja* p_Aplikacja) {
    _setItsAplikacja(p_Aplikacja);
}

bool Czujnik::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void Czujnik::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Czujnik::cleanUpRelations() {
    if(itsAplikacja != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAplikacja");
            itsAplikacja = NULL;
        }
}

void Czujnik::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Czujnik::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Czujnik::__setItsAplikacja(Aplikacja* p_Aplikacja) {
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

void Czujnik::_setItsAplikacja(Aplikacja* p_Aplikacja) {
    __setItsAplikacja(p_Aplikacja);
}

void Czujnik::_clearItsAplikacja() {
    NOTIFY_RELATION_CLEARED("itsAplikacja");
    itsAplikacja = NULL;
}

void Czujnik::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Wylaczony");
        rootState_subState = Wylaczony;
        rootState_active = Wylaczony;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Czujnik::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Wylaczony
        case Wylaczony:
        {
            if(IS_EVENT_TYPE_OF(evLokalizowanie_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Wylaczony");
                    NOTIFY_STATE_ENTERED("ROOT.Mierzenie");
                    rootState_subState = Mierzenie;
                    rootState_active = Mierzenie;
                    rootState_timeout = scheduleTimeout(0, "ROOT.Mierzenie");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Mierzenie
        case Mierzenie:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Mierzenie");
                            NOTIFY_STATE_ENTERED("ROOT.Wylaczony");
                            rootState_subState = Wylaczony;
                            rootState_active = Wylaczony;
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evPomiar_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.Mierzenie");
                    NOTIFY_STATE_ENTERED("ROOT.Wysylanie");
                    rootState_subState = Wysylanie;
                    rootState_active = Wysylanie;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Wysylanie
        case Wysylanie:
        {
            if(IS_EVENT_TYPE_OF(evInformacjaOStaniePowietrza_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Wysylanie");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                    rootState_subState = sendaction_3;
                    rootState_active = sendaction_3;
                    //#[ state sendaction_3.(Entry) 
                    itsAplikacja->GEN(evPomiar);
                    //#]
                    rootState_timeout = scheduleTimeout(0, "ROOT.sendaction_3");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                            NOTIFY_STATE_ENTERED("ROOT.Mierzenie");
                            rootState_subState = Mierzenie;
                            rootState_active = Mierzenie;
                            rootState_timeout = scheduleTimeout(0, "ROOT.Mierzenie");
                            NOTIFY_TRANSITION_TERMINATED("4");
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
void OMAnimatedCzujnik::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("ZanieczyszczeniaTeraz", x2String(myReal->ZanieczyszczeniaTeraz));
    aomsAttributes->addAttribute("NormaZanieczyszczen", x2String(myReal->NormaZanieczyszczen));
    aomsAttributes->addAttribute("praca", x2String((int)myReal->praca));
}

void OMAnimatedCzujnik::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAplikacja", false, true);
    if(myReal->itsAplikacja)
        {
            aomsRelations->ADD_ITEM(myReal->itsAplikacja);
        }
}

void OMAnimatedCzujnik::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Czujnik::Wylaczony:
        {
            Wylaczony_serializeStates(aomsState);
        }
        break;
        case Czujnik::Mierzenie:
        {
            Mierzenie_serializeStates(aomsState);
        }
        break;
        case Czujnik::Wysylanie:
        {
            Wysylanie_serializeStates(aomsState);
        }
        break;
        case Czujnik::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCzujnik::Wysylanie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wysylanie");
}

void OMAnimatedCzujnik::Wylaczony_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wylaczony");
}

void OMAnimatedCzujnik::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedCzujnik::Mierzenie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Mierzenie");
}
//#]

IMPLEMENT_REACTIVE_META_P(Czujnik, Default, Default, false, OMAnimatedCzujnik)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Czujnik.cpp
*********************************************************************/
