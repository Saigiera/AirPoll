/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowiadomieniePrz
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/PowiadomieniePrz.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PowiadomieniePrz.h"
//## link itsAplikacja
#include "Aplikacja.h"
//#[ ignore
#define Default_PowiadomieniePrz_PowiadomieniePrz_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PowiadomieniePrz
PowiadomieniePrz::PowiadomieniePrz(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(PowiadomieniePrz, PowiadomieniePrz(), 0, Default_PowiadomieniePrz_PowiadomieniePrz_SERIALIZE);
    setActiveContext(this, true);
    itsAplikacja = NULL;
    initStatechart();
}

PowiadomieniePrz::~PowiadomieniePrz() {
    NOTIFY_DESTRUCTOR(~PowiadomieniePrz, true);
    cleanUpRelations();
}

Poll PowiadomieniePrz::getJakosc() const {
    return jakosc;
}

void PowiadomieniePrz::setJakosc(Poll p_jakosc) {
    jakosc = p_jakosc;
}

Aplikacja* PowiadomieniePrz::getItsAplikacja() const {
    return itsAplikacja;
}

void PowiadomieniePrz::setItsAplikacja(Aplikacja* p_Aplikacja) {
    _setItsAplikacja(p_Aplikacja);
}

bool PowiadomieniePrz::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void PowiadomieniePrz::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PowiadomieniePrz::cleanUpRelations() {
    if(itsAplikacja != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAplikacja");
            itsAplikacja = NULL;
        }
}

void PowiadomieniePrz::__setItsAplikacja(Aplikacja* p_Aplikacja) {
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

void PowiadomieniePrz::_setItsAplikacja(Aplikacja* p_Aplikacja) {
    __setItsAplikacja(p_Aplikacja);
}

void PowiadomieniePrz::_clearItsAplikacja() {
    NOTIFY_RELATION_CLEARED("itsAplikacja");
    itsAplikacja = NULL;
}

void PowiadomieniePrz::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Wylaczone");
        rootState_subState = Wylaczone;
        rootState_active = Wylaczone;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PowiadomieniePrz::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Wylaczone
        case Wylaczone:
        {
            if(IS_EVENT_TYPE_OF(evSprawdzaniePmoiaru_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Wylaczone");
                    NOTIFY_STATE_ENTERED("ROOT.Odpalenie");
                    pushNullTransition();
                    rootState_subState = Odpalenie;
                    rootState_active = Odpalenie;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Odpalenie
        case Odpalenie:
        {
            if(IS_EVENT_TYPE_OF(evSprawdzaniePmoiaru_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Odpalenie");
                    NOTIFY_STATE_ENTERED("ROOT.Wylaczone");
                    rootState_subState = Wylaczone;
                    rootState_active = Wylaczone;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 3 
                    if(jakosc == Dobre)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Odpalenie");
                            NOTIFY_STATE_ENTERED("ROOT.Zanieczyszczone");
                            pushNullTransition();
                            rootState_subState = Zanieczyszczone;
                            rootState_active = Zanieczyszczone;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 4 
                            if(jakosc == Zle)
                                {
                                    NOTIFY_TRANSITION_STARTED("2");
                                    NOTIFY_TRANSITION_STARTED("4");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.Odpalenie");
                                    NOTIFY_STATE_ENTERED("ROOT.Czyste");
                                    pushNullTransition();
                                    rootState_subState = Czyste;
                                    rootState_active = Czyste;
                                    NOTIFY_TRANSITION_TERMINATED("4");
                                    NOTIFY_TRANSITION_TERMINATED("2");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        // State Zanieczyszczone
        case Zanieczyszczone:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Zanieczyszczone");
                    NOTIFY_STATE_ENTERED("ROOT.Odpalenie");
                    pushNullTransition();
                    rootState_subState = Odpalenie;
                    rootState_active = Odpalenie;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Czyste
        case Czyste:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Czyste");
                    NOTIFY_STATE_ENTERED("ROOT.Odpalenie");
                    pushNullTransition();
                    rootState_subState = Odpalenie;
                    rootState_active = Odpalenie;
                    NOTIFY_TRANSITION_TERMINATED("6");
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
void OMAnimatedPowiadomieniePrz::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("jakosc", x2String((int)myReal->jakosc));
}

void OMAnimatedPowiadomieniePrz::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAplikacja", false, true);
    if(myReal->itsAplikacja)
        {
            aomsRelations->ADD_ITEM(myReal->itsAplikacja);
        }
}

void OMAnimatedPowiadomieniePrz::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PowiadomieniePrz::Wylaczone:
        {
            Wylaczone_serializeStates(aomsState);
        }
        break;
        case PowiadomieniePrz::Odpalenie:
        {
            Odpalenie_serializeStates(aomsState);
        }
        break;
        case PowiadomieniePrz::Zanieczyszczone:
        {
            Zanieczyszczone_serializeStates(aomsState);
        }
        break;
        case PowiadomieniePrz::Czyste:
        {
            Czyste_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPowiadomieniePrz::Zanieczyszczone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Zanieczyszczone");
}

void OMAnimatedPowiadomieniePrz::Wylaczone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wylaczone");
}

void OMAnimatedPowiadomieniePrz::Odpalenie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Odpalenie");
}

void OMAnimatedPowiadomieniePrz::Czyste_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Czyste");
}
//#]

IMPLEMENT_REACTIVE_META_P(PowiadomieniePrz, Default, Default, false, OMAnimatedPowiadomieniePrz)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/PowiadomieniePrz.cpp
*********************************************************************/
