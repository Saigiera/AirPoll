/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Paczka
//!	Generated Date	: Tue, 29, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Paczka.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Paczka.h"
//## link itsUstawienia
#include "Ustawienia.h"
//#[ ignore
#define Default_Paczka_Paczka_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Paczka
Paczka::Paczka(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Paczka, Paczka(), 0, Default_Paczka_Paczka_SERIALIZE);
    setActiveContext(this, true);
    {
        {
            itsAplikacja.setShouldDelete(false);
        }
    }
    initRelations();
}

Paczka::~Paczka() {
    NOTIFY_DESTRUCTOR(~Paczka, true);
    cleanUpRelations();
}

Aplikacja* Paczka::getItsAplikacja() const {
    return (Aplikacja*) &itsAplikacja;
}

OMIterator<Ustawienia*> Paczka::getItsUstawienia() const {
    OMIterator<Ustawienia*> iter(itsUstawienia);
    return iter;
}

Ustawienia* Paczka::newItsUstawienia() {
    Ustawienia* newUstawienia = new Ustawienia;
    newUstawienia->_setItsPaczka(this);
    itsUstawienia.add(newUstawienia);
    NOTIFY_RELATION_ITEM_ADDED("itsUstawienia", newUstawienia, true, false);
    return newUstawienia;
}

void Paczka::deleteItsUstawienia(Ustawienia* p_Ustawienia) {
    p_Ustawienia->_setItsPaczka(NULL);
    itsUstawienia.remove(p_Ustawienia);
    NOTIFY_RELATION_ITEM_REMOVED("itsUstawienia", p_Ustawienia);
    delete p_Ustawienia;
}

bool Paczka::startBehavior() {
    bool done = true;
    done &= itsAplikacja.startBehavior();
    done &= OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void Paczka::initRelations() {
    itsAplikacja._setItsPaczka(this);
}

void Paczka::cleanUpRelations() {
    {
        OMIterator<Ustawienia*> iter(itsUstawienia);
        while (*iter){
            deleteItsUstawienia(*iter);
            iter.reset();
        }
    }
}

void Paczka::_addItsUstawienia(Ustawienia* p_Ustawienia) {
    if(p_Ustawienia != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUstawienia", p_Ustawienia, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUstawienia");
        }
    itsUstawienia.add(p_Ustawienia);
}

void Paczka::_removeItsUstawienia(Ustawienia* p_Ustawienia) {
    NOTIFY_RELATION_ITEM_REMOVED("itsUstawienia", p_Ustawienia);
    itsUstawienia.remove(p_Ustawienia);
}

void Paczka::destroy() {
    itsAplikacja.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPaczka::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAplikacja", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsAplikacja);
    aomsRelations->addRelation("itsUstawienia", true, false);
    {
        OMIterator<Ustawienia*> iter(myReal->itsUstawienia);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Paczka, Default, Default, false, OMAnimatedPaczka)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Paczka.cpp
*********************************************************************/
