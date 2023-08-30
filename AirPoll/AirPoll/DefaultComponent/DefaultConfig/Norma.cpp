/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Norma
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Norma.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Norma.h"
//## link itsAplikacja
#include "Aplikacja.h"
//#[ ignore
#define Default_Norma_Norma_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Norma
Norma::Norma(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Norma, Norma(), 0, Default_Norma_Norma_SERIALIZE);
    setActiveContext(this, true);
    itsAplikacja = NULL;
    initStatechart();
}

Norma::~Norma() {
    NOTIFY_DESTRUCTOR(~Norma, true);
    cleanUpRelations();
}

int Norma::getParams() const {
    return params;
}

void Norma::setParams(int p_params) {
    params = p_params;
}

Stany Norma::getPraca() const {
    return praca;
}

void Norma::setPraca(Stany p_praca) {
    praca = p_praca;
}

Stany Norma::getStanLok() const {
    return stanLok;
}

void Norma::setStanLok(Stany p_stanLok) {
    stanLok = p_stanLok;
}

Aplikacja* Norma::getItsAplikacja() const {
    return itsAplikacja;
}

void Norma::setItsAplikacja(Aplikacja* p_Aplikacja) {
    _setItsAplikacja(p_Aplikacja);
}

bool Norma::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void Norma::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Norma::cleanUpRelations() {
    if(itsAplikacja != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAplikacja");
            itsAplikacja = NULL;
        }
}

void Norma::__setItsAplikacja(Aplikacja* p_Aplikacja) {
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

void Norma::_setItsAplikacja(Aplikacja* p_Aplikacja) {
    __setItsAplikacja(p_Aplikacja);
}

void Norma::_clearItsAplikacja() {
    NOTIFY_RELATION_CLEARED("itsAplikacja");
    itsAplikacja = NULL;
}

void Norma::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Odcieta");
        rootState_subState = Odcieta;
        rootState_active = Odcieta;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Norma::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Odcieta
        case Odcieta:
        {
            if(IS_EVENT_TYPE_OF(evPomiar_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Odcieta");
                    NOTIFY_STATE_ENTERED("ROOT.Porownywanie");
                    rootState_subState = Porownywanie;
                    rootState_active = Porownywanie;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Porownywanie
        // Description: Porownywanie pomiaru z norm¹
        case Porownywanie:
        {
            if(IS_EVENT_TYPE_OF(evRozpoczeniciePracy_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Porownywanie");
                    NOTIFY_STATE_ENTERED("ROOT.Odcieta");
                    rootState_subState = Odcieta;
                    rootState_active = Odcieta;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evPrzesylanieInformacji_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Porownywanie");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    pushNullTransition();
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    itsAplikacja->GEN(evPrzesylanieInformacji);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.Porownywanie");
                    rootState_subState = Porownywanie;
                    rootState_active = Porownywanie;
                    NOTIFY_TRANSITION_TERMINATED("4");
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
void OMAnimatedNorma::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stanLok", x2String((int)myReal->stanLok));
    aomsAttributes->addAttribute("praca", x2String((int)myReal->praca));
    aomsAttributes->addAttribute("params", x2String(myReal->params));
}

void OMAnimatedNorma::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAplikacja", false, true);
    if(myReal->itsAplikacja)
        {
            aomsRelations->ADD_ITEM(myReal->itsAplikacja);
        }
}

void OMAnimatedNorma::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Norma::Odcieta:
        {
            Odcieta_serializeStates(aomsState);
        }
        break;
        case Norma::Porownywanie:
        {
            Porownywanie_serializeStates(aomsState);
        }
        break;
        case Norma::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNorma::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedNorma::Porownywanie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Porownywanie");
}

void OMAnimatedNorma::Odcieta_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Odcieta");
}
//#]

IMPLEMENT_REACTIVE_META_P(Norma, Default, Default, false, OMAnimatedNorma)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Norma.cpp
*********************************************************************/
