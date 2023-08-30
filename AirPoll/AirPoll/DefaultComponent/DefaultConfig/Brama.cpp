/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Brama
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Brama.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Brama.h"
//## link itsUstawienia
#include "Ustawienia.h"
//#[ ignore
#define Default_Brama_Brama_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Brama
Brama::Brama(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Brama, Brama(), 0, Default_Brama_Brama_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsSterownik.setShouldDelete(false);
        }
    }
    initRelations();
}

Brama::~Brama() {
    NOTIFY_DESTRUCTOR(~Brama, true);
    cleanUpRelations();
}

Sterownik* Brama::getItsSterownik() const {
    return (Sterownik*) &itsSterownik;
}

OMIterator<Ustawienia*> Brama::getItsUstawienia() const {
    OMIterator<Ustawienia*> iter(itsUstawienia);
    return iter;
}

Ustawienia* Brama::newItsUstawienia() {
    Ustawienia* newUstawienia = new Ustawienia;
    newUstawienia->_setItsBrama(this);
    itsUstawienia.add(newUstawienia);
    NOTIFY_RELATION_ITEM_ADDED("itsUstawienia", newUstawienia, true, false);
    return newUstawienia;
}

void Brama::deleteItsUstawienia(Ustawienia* p_Ustawienia) {
    p_Ustawienia->_setItsBrama(NULL);
    itsUstawienia.remove(p_Ustawienia);
    NOTIFY_RELATION_ITEM_REMOVED("itsUstawienia", p_Ustawienia);
    delete p_Ustawienia;
}

bool Brama::startBehavior() {
    bool done = true;
    done &= itsSterownik.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Brama::initRelations() {
    itsSterownik._setItsBrama(this);
}

void Brama::cleanUpRelations() {
    {
        OMIterator<Ustawienia*> iter(itsUstawienia);
        while (*iter){
            deleteItsUstawienia(*iter);
            iter.reset();
        }
    }
}

void Brama::_addItsUstawienia(Ustawienia* p_Ustawienia) {
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

void Brama::_removeItsUstawienia(Ustawienia* p_Ustawienia) {
    NOTIFY_RELATION_ITEM_REMOVED("itsUstawienia", p_Ustawienia);
    itsUstawienia.remove(p_Ustawienia);
}

void Brama::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsSterownik.setActiveContext(theActiveContext, false);
    }
}

void Brama::destroy() {
    itsSterownik.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBrama::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSterownik", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSterownik);
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

IMPLEMENT_REACTIVE_META_SIMPLE_P(Brama, Default, Default, false, OMAnimatedBrama)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Brama.cpp
*********************************************************************/
