/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Odbiornik
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/

#ifndef Odbiornik_H
#define Odbiornik_H

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

//## class Odbiornik
class Odbiornik : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOdbiornik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Odbiornik(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Odbiornik();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getImpulsOK() const;
    
    //## auto_generated
    void setImpulsOK(bool p_ImpulsOK);
    
    //## auto_generated
    Sterownik* getItsSterownik() const;
    
    //## auto_generated
    void setItsSterownik(Sterownik* p_Sterownik);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool ImpulsOK;		//## attribute ImpulsOK
    
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
class OMAnimatedOdbiornik : virtual public AOMInstance {
    DECLARE_META(Odbiornik, OMAnimatedOdbiornik)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/
