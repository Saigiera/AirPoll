/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowiadomienieOZlymPOW
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/PowiadomienieOZlymPOW.h
*********************************************************************/

#ifndef PowiadomienieOZlymPOW_H
#define PowiadomienieOZlymPOW_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## link itsAplikacja
class Aplikacja;

//## package Default

//## class PowiadomienieOZlymPOW
class PowiadomienieOZlymPOW : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPowiadomienieOZlymPOW;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PowiadomienieOZlymPOW(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~PowiadomienieOZlymPOW();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Aplikacja* getItsAplikacja() const;
    
    //## auto_generated
    void setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Aplikacja* itsAplikacja;		//## link itsAplikacja
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    void _setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    void _clearItsAplikacja();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPowiadomienieOZlymPOW : virtual public AOMInstance {
    DECLARE_META(PowiadomienieOZlymPOW, OMAnimatedPowiadomienieOZlymPOW)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/PowiadomienieOZlymPOW.h
*********************************************************************/
