/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Mon, 28, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/User.h
*********************************************************************/

#ifndef User_H
#define User_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor User
// Uzytkownik aplikacji chcacy dowiedziec sie o stanie
// powietrza i bedaczy ostrzegany w razie znacznego
// niebezpieczenstwa zwiazanego z zanieczyszczeniami.
class User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUser;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    User();
    
    //## auto_generated
    ~User();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUser : virtual public AOMInstance {
    DECLARE_META(User, OMAnimatedUser)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/User.h
*********************************************************************/
