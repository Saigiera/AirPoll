/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Aplikacja
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Aplikacja.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Aplikacja.h"
//## link itsPaczka
#include "Paczka.h"
//#[ ignore
#define Default_Aplikacja_Aplikacja_SERIALIZE OM_NO_OP

#define Default_Aplikacja_ustawStan_SERIALIZE aomsmethod->addAttribute("stanLok", x2String((int)stanLok));

#define Default_Aplikacja_ustawstanLok_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Aplikacja
Aplikacja::Aplikacja(IOxfActive* theActiveContext) : rejestrBledow(0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Aplikacja, Aplikacja(), 0, Default_Aplikacja_Aplikacja_SERIALIZE);
    setActiveContext(this, true);
    {
        {
            itsPowiadomieniePrz.setShouldDelete(false);
        }
        {
            itsOdbiornikGPS.setShouldDelete(false);
        }
        {
            itsCzujnik.setShouldDelete(false);
        }
        {
            itsNorma.setShouldDelete(false);
        }
    }
    itsPaczka = NULL;
    initRelations();
    initStatechart();
}

Aplikacja::~Aplikacja() {
    NOTIFY_DESTRUCTOR(~Aplikacja, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Aplikacja::ustawStan(const Stany& stanLok) {
    NOTIFY_OPERATION(ustawStan, ustawStan(const Stany&), 1, Default_Aplikacja_ustawStan_SERIALIZE);
    //#[ operation ustawStan(Stany)
    //#]
}

void Aplikacja::ustawstanLok() {
    NOTIFY_OPERATION(ustawstanLok, ustawstanLok(), 0, Default_Aplikacja_ustawstanLok_SERIALIZE);
    //#[ operation ustawstanLok()
    //#]
}

int Aplikacja::getNormaZanieczyszczen() const {
    return NormaZanieczyszczen;
}

void Aplikacja::setNormaZanieczyszczen(int p_NormaZanieczyszczen) {
    NormaZanieczyszczen = p_NormaZanieczyszczen;
}

Poll Aplikacja::getPowiadomienie() const {
    return Powiadomienie;
}

void Aplikacja::setPowiadomienie(Poll p_Powiadomienie) {
    Powiadomienie = p_Powiadomienie;
}

int Aplikacja::getZanieczyszczeniaTeraz() const {
    return ZanieczyszczeniaTeraz;
}

void Aplikacja::setZanieczyszczeniaTeraz(int p_ZanieczyszczeniaTeraz) {
    ZanieczyszczeniaTeraz = p_ZanieczyszczeniaTeraz;
}

int Aplikacja::getOkres() const {
    return okres;
}

void Aplikacja::setOkres(int p_okres) {
    okres = p_okres;
}

Stany Aplikacja::getStan() const {
    return stan;
}

void Aplikacja::setStan(Stany p_stan) {
    stan = p_stan;
}

bool Aplikacja::getStanLok() const {
    return stanLok;
}

void Aplikacja::setStanLok(bool p_stanLok) {
    stanLok = p_stanLok;
}

Poll Aplikacja::getStanPow() const {
    return stanPow;
}

void Aplikacja::setStanPow(Poll p_stanPow) {
    stanPow = p_stanPow;
}

Czujnik* Aplikacja::getItsCzujnik() const {
    return (Czujnik*) &itsCzujnik;
}

Norma* Aplikacja::getItsNorma() const {
    return (Norma*) &itsNorma;
}

OdbiornikGPS* Aplikacja::getItsOdbiornikGPS() const {
    return (OdbiornikGPS*) &itsOdbiornikGPS;
}

Paczka* Aplikacja::getItsPaczka() const {
    return itsPaczka;
}

void Aplikacja::setItsPaczka(Paczka* p_Paczka) {
    _setItsPaczka(p_Paczka);
}

PowiadomieniePrz* Aplikacja::getItsPowiadomieniePrz() const {
    return (PowiadomieniePrz*) &itsPowiadomieniePrz;
}

bool Aplikacja::startBehavior() {
    bool done = true;
    done &= itsCzujnik.startBehavior();
    done &= itsNorma.startBehavior();
    done &= itsOdbiornikGPS.startBehavior();
    done &= itsPowiadomieniePrz.startBehavior();
    done &= OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void Aplikacja::initRelations() {
    itsCzujnik._setItsAplikacja(this);
    itsNorma._setItsAplikacja(this);
    itsOdbiornikGPS._setItsAplikacja(this);
    itsPowiadomieniePrz._setItsAplikacja(this);
}

void Aplikacja::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    TworzeniePowiadomien_subState = OMNonState;
    rootState_timeout = NULL;
}

void Aplikacja::cleanUpRelations() {
    if(itsPaczka != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPaczka");
            itsPaczka = NULL;
        }
}

void Aplikacja::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Aplikacja::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

int Aplikacja::getRejestrBledow() const {
    return rejestrBledow;
}

void Aplikacja::setRejestrBledow(int p_rejestrBledow) {
    rejestrBledow = p_rejestrBledow;
}

void Aplikacja::__setItsPaczka(Paczka* p_Paczka) {
    itsPaczka = p_Paczka;
    if(p_Paczka != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPaczka", p_Paczka, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPaczka");
        }
}

void Aplikacja::_setItsPaczka(Paczka* p_Paczka) {
    __setItsPaczka(p_Paczka);
}

void Aplikacja::_clearItsPaczka() {
    NOTIFY_RELATION_CLEARED("itsPaczka");
    itsPaczka = NULL;
}

void Aplikacja::destroy() {
    itsCzujnik.destroy();
    itsNorma.destroy();
    itsOdbiornikGPS.destroy();
    itsPowiadomieniePrz.destroy();
    OMReactive::destroy();
}

void Aplikacja::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Inicjalizacja");
        rootState_subState = Inicjalizacja;
        rootState_active = Inicjalizacja;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Aplikacja::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inicjalizacja
        case Inicjalizacja:
        {
            if(IS_EVENT_TYPE_OF(evTestowanie_Default_id))
                {
                    //## transition 2 
                    if(rejestrBledow != 0)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.Inicjalizacja");
                            NOTIFY_STATE_ENTERED("ROOT.Blad");
                            rootState_subState = Blad;
                            rootState_active = Blad;
                            //#[ state Blad.(Entry) 
                             std::cout << ":Bledy: " << rejestrBledow;
                            //#]
                            rootState_timeout = scheduleTimeout(100, "ROOT.Blad");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.Inicjalizacja");
                            NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                            rootState_subState = Oczekiwanie;
                            rootState_active = Oczekiwanie;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Blad
        case Blad:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Blad");
                            NOTIFY_STATE_ENTERED("ROOT.terminationstate_2");
                            rootState_subState = terminationstate_2;
                            rootState_active = terminationstate_2;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Oczekiwanie
        case Oczekiwanie:
        {
            if(IS_EVENT_TYPE_OF(evLokalizowanie_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_19");
                    rootState_subState = sendaction_19;
                    rootState_active = sendaction_19;
                    //#[ state sendaction_19.(Entry) 
                    itsOdbiornikGPS.GEN(evLokalizowanie);
                    //#]
                    rootState_timeout = scheduleTimeout(okres, "ROOT.sendaction_19");
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evPrzesylanieInformacji_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie");
                    NOTIFY_STATE_ENTERED("ROOT.PowiadomieniaPrzesyl");
                    pushNullTransition();
                    rootState_subState = PowiadomieniaPrzesyl;
                    rootState_active = PowiadomieniaPrzesyl;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.sendaction_6");
                    NOTIFY_STATE_ENTERED("ROOT.TworzeniePowiadomien.sendaction_7");
                    pushNullTransition();
                    TworzeniePowiadomien_subState = sendaction_7;
                    rootState_active = sendaction_7;
                    //#[ state TworzeniePowiadomien.sendaction_7.(Entry) 
                    itsNorma.GEN(evRozpoczeniciePracy);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TworzeniePowiadomien_handleEvent();
                }
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            res = sendaction_7_handleEvent();
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.sendaction_8");
                    NOTIFY_STATE_ENTERED("ROOT.TworzeniePowiadomien.terminationstate_9");
                    TworzeniePowiadomien_subState = terminationstate_9;
                    rootState_active = terminationstate_9;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TworzeniePowiadomien_handleEvent();
                }
        }
        break;
        // State terminationstate_9
        case terminationstate_9:
        {
            res = TworzeniePowiadomien_handleEvent();
        }
        break;
        // State BladOdpalania
        case BladOdpalania:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.BladOdpalania");
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
        }
        break;
        // State PowiadomieniaPrzesyl
        case PowiadomieniaPrzesyl:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.PowiadomieniaPrzesyl");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_16");
                    pushNullTransition();
                    rootState_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state sendaction_16.(Entry) 
                    itsCzujnik.GEN(evPomiar);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_16");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_17");
                    pushNullTransition();
                    rootState_subState = sendaction_17;
                    rootState_active = sendaction_17;
                    //#[ state sendaction_17.(Entry) 
                    itsNorma.GEN(evSprawdzeniePomiaru);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_17
        case sendaction_17:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 19 
                    if(ZanieczyszczeniaTeraz> NormaZanieczyszczen)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            NOTIFY_TRANSITION_STARTED("19");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_17");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_18");
                            pushNullTransition();
                            rootState_subState = sendaction_18;
                            rootState_active = sendaction_18;
                            NOTIFY_TRANSITION_TERMINATED("19");
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            NOTIFY_TRANSITION_STARTED("20");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_17");
                            NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                            rootState_subState = Oczekiwanie;
                            rootState_active = Oczekiwanie;
                            NOTIFY_TRANSITION_TERMINATED("20");
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_18
        case sendaction_18:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_18");
                    NOTIFY_STATE_ENTERED("ROOT.Informacja");
                    rootState_subState = Informacja;
                    rootState_active = Informacja;
                    //#[ state Informacja.(Entry) 
                    std::cout << "Powietrze jest" << Powiadomienie;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_19
        case sendaction_19:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            //## transition 5 
                            if(stanLok == Powodzenie)
                                {
                                    NOTIFY_TRANSITION_STARTED("22");
                                    NOTIFY_TRANSITION_STARTED("5");
                                    cancel(rootState_timeout);
                                    NOTIFY_STATE_EXITED("ROOT.sendaction_19");
                                    TworzeniePowiadomien_entDef();
                                    NOTIFY_TRANSITION_TERMINATED("5");
                                    NOTIFY_TRANSITION_TERMINATED("22");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 6 
                                    if(stanLok == Blad)
                                        {
                                            NOTIFY_TRANSITION_STARTED("22");
                                            NOTIFY_TRANSITION_STARTED("6");
                                            cancel(rootState_timeout);
                                            NOTIFY_STATE_EXITED("ROOT.sendaction_19");
                                            NOTIFY_STATE_ENTERED("ROOT.BladOdpalania");
                                            pushNullTransition();
                                            rootState_subState = BladOdpalania;
                                            rootState_active = BladOdpalania;
                                            NOTIFY_TRANSITION_TERMINATED("6");
                                            NOTIFY_TRANSITION_TERMINATED("22");
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
        }
        break;
        // State Informacja
        case Informacja:
        {
            if(IS_EVENT_TYPE_OF(evPrzesylanieInformacji_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    NOTIFY_STATE_EXITED("ROOT.Informacja");
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Aplikacja::TworzeniePowiadomien_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.TworzeniePowiadomien");
    pushNullTransition();
    rootState_subState = TworzeniePowiadomien;
    NOTIFY_TRANSITION_STARTED("12");
    NOTIFY_STATE_ENTERED("ROOT.TworzeniePowiadomien.sendaction_6");
    pushNullTransition();
    TworzeniePowiadomien_subState = sendaction_6;
    rootState_active = sendaction_6;
    //#[ state TworzeniePowiadomien.sendaction_6.(Entry) 
    itsCzujnik.GEN(evRozpoczeniciePracy);
    //#]
    NOTIFY_TRANSITION_TERMINATED("12");
}

void Aplikacja::TworzeniePowiadomien_exit() {
    popNullTransition();
    switch (TworzeniePowiadomien_subState) {
        // State sendaction_6
        case sendaction_6:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.sendaction_6");
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.sendaction_7");
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.sendaction_8");
        }
        break;
        // State terminationstate_9
        case terminationstate_9:
        {
            NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.terminationstate_9");
        }
        break;
        default:
            break;
    }
    TworzeniePowiadomien_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien");
}

IOxfReactive::TakeEventStatus Aplikacja::TworzeniePowiadomien_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 14 
            if(IS_COMPLETED(TworzeniePowiadomien)==true)
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    TworzeniePowiadomien_exit();
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Aplikacja::sendaction_7_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 9 
            if(Powiadomienie == Zle)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.TworzeniePowiadomien.sendaction_8");
                    pushNullTransition();
                    TworzeniePowiadomien_subState = sendaction_8;
                    rootState_active = sendaction_8;
                    //#[ state TworzeniePowiadomien.sendaction_8.(Entry) 
                    itsPowiadomieniePrz.GEN(evRozpoczeniciePracy);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TworzeniePowiadomien.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.TworzeniePowiadomien.terminationstate_9");
                    TworzeniePowiadomien_subState = terminationstate_9;
                    rootState_active = terminationstate_9;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = TworzeniePowiadomien_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAplikacja::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stanLok", x2String(myReal->stanLok));
    aomsAttributes->addAttribute("Powiadomienie", x2String((int)myReal->Powiadomienie));
    aomsAttributes->addAttribute("stanPow", x2String((int)myReal->stanPow));
    aomsAttributes->addAttribute("okres", x2String(myReal->okres));
    aomsAttributes->addAttribute("rejestrBledow", x2String(myReal->rejestrBledow));
    aomsAttributes->addAttribute("stan", x2String((int)myReal->stan));
    aomsAttributes->addAttribute("ZanieczyszczeniaTeraz", x2String(myReal->ZanieczyszczeniaTeraz));
    aomsAttributes->addAttribute("NormaZanieczyszczen", x2String(myReal->NormaZanieczyszczen));
}

void OMAnimatedAplikacja::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPaczka", false, true);
    if(myReal->itsPaczka)
        {
            aomsRelations->ADD_ITEM(myReal->itsPaczka);
        }
    aomsRelations->addRelation("itsPowiadomieniePrz", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPowiadomieniePrz);
    aomsRelations->addRelation("itsOdbiornikGPS", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsOdbiornikGPS);
    aomsRelations->addRelation("itsCzujnik", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCzujnik);
    aomsRelations->addRelation("itsNorma", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNorma);
}

void OMAnimatedAplikacja::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Aplikacja::Inicjalizacja:
        {
            Inicjalizacja_serializeStates(aomsState);
        }
        break;
        case Aplikacja::Blad:
        {
            Blad_serializeStates(aomsState);
        }
        break;
        case Aplikacja::terminationstate_2:
        {
            terminationstate_2_serializeStates(aomsState);
        }
        break;
        case Aplikacja::Oczekiwanie:
        {
            Oczekiwanie_serializeStates(aomsState);
        }
        break;
        case Aplikacja::TworzeniePowiadomien:
        {
            TworzeniePowiadomien_serializeStates(aomsState);
        }
        break;
        case Aplikacja::BladOdpalania:
        {
            BladOdpalania_serializeStates(aomsState);
        }
        break;
        case Aplikacja::PowiadomieniaPrzesyl:
        {
            PowiadomieniaPrzesyl_serializeStates(aomsState);
        }
        break;
        case Aplikacja::sendaction_16:
        {
            sendaction_16_serializeStates(aomsState);
        }
        break;
        case Aplikacja::sendaction_17:
        {
            sendaction_17_serializeStates(aomsState);
        }
        break;
        case Aplikacja::sendaction_18:
        {
            sendaction_18_serializeStates(aomsState);
        }
        break;
        case Aplikacja::sendaction_19:
        {
            sendaction_19_serializeStates(aomsState);
        }
        break;
        case Aplikacja::Informacja:
        {
            Informacja_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAplikacja::TworzeniePowiadomien_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TworzeniePowiadomien");
    switch (myReal->TworzeniePowiadomien_subState) {
        case Aplikacja::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        case Aplikacja::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case Aplikacja::sendaction_8:
        {
            sendaction_8_serializeStates(aomsState);
        }
        break;
        case Aplikacja::terminationstate_9:
        {
            terminationstate_9_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAplikacja::terminationstate_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TworzeniePowiadomien.terminationstate_9");
}

void OMAnimatedAplikacja::sendaction_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TworzeniePowiadomien.sendaction_8");
}

void OMAnimatedAplikacja::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TworzeniePowiadomien.sendaction_7");
}

void OMAnimatedAplikacja::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TworzeniePowiadomien.sendaction_6");
}

void OMAnimatedAplikacja::terminationstate_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_2");
}

void OMAnimatedAplikacja::sendaction_19_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_19");
}

void OMAnimatedAplikacja::sendaction_18_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_18");
}

void OMAnimatedAplikacja::sendaction_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_17");
}

void OMAnimatedAplikacja::sendaction_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_16");
}

void OMAnimatedAplikacja::PowiadomieniaPrzesyl_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PowiadomieniaPrzesyl");
}

void OMAnimatedAplikacja::Oczekiwanie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Oczekiwanie");
}

void OMAnimatedAplikacja::Inicjalizacja_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Inicjalizacja");
}

void OMAnimatedAplikacja::Informacja_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Informacja");
}

void OMAnimatedAplikacja::BladOdpalania_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BladOdpalania");
}

void OMAnimatedAplikacja::Blad_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Blad");
}
//#]

IMPLEMENT_REACTIVE_META_P(Aplikacja, Default, Default, false, OMAnimatedAplikacja)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Aplikacja.cpp
*********************************************************************/
