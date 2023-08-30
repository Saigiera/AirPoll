/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "User.h"
//#[ ignore
#define Default_User_User_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor User
User::User() {
    NOTIFY_CONSTRUCTOR(User, User(), 0, Default_User_User_SERIALIZE);
}

User::~User() {
    NOTIFY_DESTRUCTOR(~User, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUser::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(User, Default, Default, false, OMAnimatedUser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/User.cpp
*********************************************************************/
