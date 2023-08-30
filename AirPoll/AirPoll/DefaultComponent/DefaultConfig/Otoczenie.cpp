/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Otoczenie
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Otoczenie.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Otoczenie.h"
//#[ ignore
#define Default_Otoczenie_Otoczenie_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Otoczenie
Otoczenie::Otoczenie() {
    NOTIFY_CONSTRUCTOR(Otoczenie, Otoczenie(), 0, Default_Otoczenie_Otoczenie_SERIALIZE);
}

Otoczenie::~Otoczenie() {
    NOTIFY_DESTRUCTOR(~Otoczenie, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOtoczenie::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Otoczenie, Default, Default, false, OMAnimatedOtoczenie)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Otoczenie.cpp
*********************************************************************/
