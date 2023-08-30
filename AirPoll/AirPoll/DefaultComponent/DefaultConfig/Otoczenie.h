/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Otoczenie
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Otoczenie.h
*********************************************************************/

#ifndef Otoczenie_H
#define Otoczenie_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor Otoczenie
class Otoczenie {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOtoczenie;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Otoczenie();
    
    //## auto_generated
    ~Otoczenie();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOtoczenie : virtual public AOMInstance {
    DECLARE_META(Otoczenie, OMAnimatedOtoczenie)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Otoczenie.h
*********************************************************************/
