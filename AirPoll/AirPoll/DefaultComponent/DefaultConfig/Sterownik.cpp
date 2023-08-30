/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sterownik
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Sterownik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sterownik.h"
//## link itsBrama
#include "Brama.h"
//#[ ignore
#define Default_Sterownik_Sterownik_SERIALIZE OM_NO_OP

#define Default_Sterownik_ustawStan_SERIALIZE aomsmethod->addAttribute("stan", x2String((int)stan));
//#]

//## package Default

//## class Sterownik
Sterownik::Sterownik(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Sterownik, Sterownik(), 0, Default_Sterownik_Sterownik_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsPilot.setShouldDelete(false);
        }
        {
            itsLampa.setShouldDelete(false);
        }
        {
            itsOdbiornik.setShouldDelete(false);
        }
        {
            itsDetektorKolizji.setShouldDelete(false);
        }
        {
            itsNaped.setShouldDelete(false);
        }
    }
    itsBrama = NULL;
    initRelations();
}

Sterownik::~Sterownik() {
    NOTIFY_DESTRUCTOR(~Sterownik, true);
    cleanUpRelations();
}

void Sterownik::ustawStan(const Stany& stan) {
    NOTIFY_OPERATION(ustawStan, ustawStan(const Stany&), 1, Default_Sterownik_ustawStan_SERIALIZE);
    //#[ operation ustawStan(Stany)
    //#]
}

int Sterownik::getStan() const {
    return stan;
}

void Sterownik::setStan(int p_stan) {
    stan = p_stan;
}

Stany Sterownik::getStan0() const {
    return stan0;
}

void Sterownik::setStan0(Stany p_stan0) {
    stan0 = p_stan0;
}

bool Sterownik::getSygnalizacja() const {
    return sygnalizacja;
}

void Sterownik::setSygnalizacja(bool p_sygnalizacja) {
    sygnalizacja = p_sygnalizacja;
}

Brama* Sterownik::getItsBrama() const {
    return itsBrama;
}

void Sterownik::setItsBrama(Brama* p_Brama) {
    _setItsBrama(p_Brama);
}

DetektorKolizji* Sterownik::getItsDetektorKolizji() const {
    return (DetektorKolizji*) &itsDetektorKolizji;
}

Lampa* Sterownik::getItsLampa() const {
    return (Lampa*) &itsLampa;
}

Naped* Sterownik::getItsNaped() const {
    return (Naped*) &itsNaped;
}

Odbiornik* Sterownik::getItsOdbiornik() const {
    return (Odbiornik*) &itsOdbiornik;
}

Pilot* Sterownik::getItsPilot() const {
    return (Pilot*) &itsPilot;
}

bool Sterownik::startBehavior() {
    bool done = true;
    done &= itsDetektorKolizji.startBehavior();
    done &= itsLampa.startBehavior();
    done &= itsNaped.startBehavior();
    done &= itsOdbiornik.startBehavior();
    done &= itsPilot.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Sterownik::initRelations() {
    itsDetektorKolizji._setItsSterownik(this);
    itsLampa._setItsSterownik(this);
    itsNaped._setItsSterownik(this);
    itsOdbiornik._setItsSterownik(this);
    itsPilot._setItsSterownik(this);
}

void Sterownik::cleanUpRelations() {
    if(itsBrama != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsBrama");
            itsBrama = NULL;
        }
}

void Sterownik::__setItsBrama(Brama* p_Brama) {
    itsBrama = p_Brama;
    if(p_Brama != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsBrama", p_Brama, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsBrama");
        }
}

void Sterownik::_setItsBrama(Brama* p_Brama) {
    __setItsBrama(p_Brama);
}

void Sterownik::_clearItsBrama() {
    NOTIFY_RELATION_CLEARED("itsBrama");
    itsBrama = NULL;
}

void Sterownik::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsPilot.setActiveContext(theActiveContext, false);
        itsLampa.setActiveContext(theActiveContext, false);
        itsOdbiornik.setActiveContext(theActiveContext, false);
        itsDetektorKolizji.setActiveContext(theActiveContext, false);
        itsNaped.setActiveContext(theActiveContext, false);
    }
}

void Sterownik::destroy() {
    itsDetektorKolizji.destroy();
    itsLampa.destroy();
    itsNaped.destroy();
    itsOdbiornik.destroy();
    itsPilot.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSterownik::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stan", x2String(myReal->stan));
    aomsAttributes->addAttribute("stan0", x2String((int)myReal->stan0));
    aomsAttributes->addAttribute("sygnalizacja", x2String(myReal->sygnalizacja));
}

void OMAnimatedSterownik::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsBrama", false, true);
    if(myReal->itsBrama)
        {
            aomsRelations->ADD_ITEM(myReal->itsBrama);
        }
    aomsRelations->addRelation("itsPilot", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPilot);
    aomsRelations->addRelation("itsLampa", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLampa);
    aomsRelations->addRelation("itsOdbiornik", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsOdbiornik);
    aomsRelations->addRelation("itsDetektorKolizji", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDetektorKolizji);
    aomsRelations->addRelation("itsNaped", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNaped);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Sterownik, Default, Default, false, OMAnimatedSterownik)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Sterownik.cpp
*********************************************************************/
