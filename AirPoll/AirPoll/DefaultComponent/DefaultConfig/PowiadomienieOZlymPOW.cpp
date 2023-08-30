/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowiadomienieOZlymPOW
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/PowiadomienieOZlymPOW.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PowiadomienieOZlymPOW.h"
//## link itsAplikacja
#include "Aplikacja.h"
//#[ ignore
#define Default_PowiadomienieOZlymPOW_PowiadomienieOZlymPOW_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PowiadomienieOZlymPOW
PowiadomienieOZlymPOW::PowiadomienieOZlymPOW(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PowiadomienieOZlymPOW, PowiadomienieOZlymPOW(), 0, Default_PowiadomienieOZlymPOW_PowiadomienieOZlymPOW_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsAplikacja = NULL;
}

PowiadomienieOZlymPOW::~PowiadomienieOZlymPOW() {
    NOTIFY_DESTRUCTOR(~PowiadomienieOZlymPOW, true);
    cleanUpRelations();
}

Aplikacja* PowiadomienieOZlymPOW::getItsAplikacja() const {
    return itsAplikacja;
}

void PowiadomienieOZlymPOW::setItsAplikacja(Aplikacja* p_Aplikacja) {
    _setItsAplikacja(p_Aplikacja);
}

bool PowiadomienieOZlymPOW::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PowiadomienieOZlymPOW::cleanUpRelations() {
    if(itsAplikacja != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAplikacja");
            itsAplikacja = NULL;
        }
}

void PowiadomienieOZlymPOW::__setItsAplikacja(Aplikacja* p_Aplikacja) {
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

void PowiadomienieOZlymPOW::_setItsAplikacja(Aplikacja* p_Aplikacja) {
    __setItsAplikacja(p_Aplikacja);
}

void PowiadomienieOZlymPOW::_clearItsAplikacja() {
    NOTIFY_RELATION_CLEARED("itsAplikacja");
    itsAplikacja = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPowiadomienieOZlymPOW::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAplikacja", false, true);
    if(myReal->itsAplikacja)
        {
            aomsRelations->ADD_ITEM(myReal->itsAplikacja);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(PowiadomienieOZlymPOW, Default, Default, false, OMAnimatedPowiadomienieOZlymPOW)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/PowiadomienieOZlymPOW.cpp
*********************************************************************/
