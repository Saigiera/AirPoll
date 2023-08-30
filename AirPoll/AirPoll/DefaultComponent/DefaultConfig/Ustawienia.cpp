/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Ustawienia
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Ustawienia.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Ustawienia.h"
//## link itsPaczka
#include "Paczka.h"
//#[ ignore
#define Default_Ustawienia_Ustawienia_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Ustawienia
Ustawienia::Ustawienia() {
    NOTIFY_CONSTRUCTOR(Ustawienia, Ustawienia(), 0, Default_Ustawienia_Ustawienia_SERIALIZE);
    itsPaczka = NULL;
}

Ustawienia::~Ustawienia() {
    NOTIFY_DESTRUCTOR(~Ustawienia, true);
    cleanUpRelations();
}

Paczka* Ustawienia::getItsPaczka() const {
    return itsPaczka;
}

void Ustawienia::setItsPaczka(Paczka* p_Paczka) {
    if(p_Paczka != NULL)
        {
            p_Paczka->_addItsUstawienia(this);
        }
    _setItsPaczka(p_Paczka);
}

void Ustawienia::cleanUpRelations() {
    if(itsPaczka != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPaczka");
            Paczka* current = itsPaczka;
            if(current != NULL)
                {
                    current->_removeItsUstawienia(this);
                }
            itsPaczka = NULL;
        }
}

void Ustawienia::__setItsPaczka(Paczka* p_Paczka) {
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

void Ustawienia::_setItsPaczka(Paczka* p_Paczka) {
    if(itsPaczka != NULL)
        {
            itsPaczka->_removeItsUstawienia(this);
        }
    __setItsPaczka(p_Paczka);
}

void Ustawienia::_clearItsPaczka() {
    NOTIFY_RELATION_CLEARED("itsPaczka");
    itsPaczka = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUstawienia::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPaczka", false, true);
    if(myReal->itsPaczka)
        {
            aomsRelations->ADD_ITEM(myReal->itsPaczka);
        }
}
//#]

IMPLEMENT_META_P(Ustawienia, Default, Default, false, OMAnimatedUstawienia)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Ustawienia.cpp
*********************************************************************/
