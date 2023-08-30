/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Zanieczyszczenia
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Zanieczyszczenia.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Zanieczyszczenia.h"
//#[ ignore
#define Default_Zanieczyszczenia_Zanieczyszczenia_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Zanieczyszczenia
Zanieczyszczenia::Zanieczyszczenia() {
    NOTIFY_CONSTRUCTOR(Zanieczyszczenia, Zanieczyszczenia(), 0, Default_Zanieczyszczenia_Zanieczyszczenia_SERIALIZE);
}

Zanieczyszczenia::~Zanieczyszczenia() {
    NOTIFY_DESTRUCTOR(~Zanieczyszczenia, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedZanieczyszczenia::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Zanieczyszczenia, Default, Default, false, OMAnimatedZanieczyszczenia)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Zanieczyszczenia.cpp
*********************************************************************/
