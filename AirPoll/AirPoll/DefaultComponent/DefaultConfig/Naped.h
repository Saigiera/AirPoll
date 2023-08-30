/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Naped
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Naped.h
*********************************************************************/

#ifndef Naped_H
#define Naped_H

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
//## link itsSterownik
class Sterownik;

//## package Default

//## class Naped
class Naped : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNaped;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Naped(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Naped();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Sterownik* getItsSterownik() const;
    
    //## auto_generated
    void setItsSterownik(Sterownik* p_Sterownik);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Sterownik* itsSterownik;		//## link itsSterownik
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSterownik(Sterownik* p_Sterownik);
    
    //## auto_generated
    void _setItsSterownik(Sterownik* p_Sterownik);
    
    //## auto_generated
    void _clearItsSterownik();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNaped : virtual public AOMInstance {
    DECLARE_META(Naped, OMAnimatedNaped)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Naped.h
*********************************************************************/
