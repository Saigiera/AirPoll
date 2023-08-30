/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pilot
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Pilot.h
*********************************************************************/

#ifndef Pilot_H
#define Pilot_H

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

//## class Pilot
class Pilot : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPilot;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Pilot(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Pilot();
    
    ////    Operations    ////
    
    //## operation czytajUstawienia()
    virtual std::string czytajUstawienia();
    
    //## operation zapiszUstawienia()
    virtual bool zapiszUstawienia();
    
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
class OMAnimatedPilot : virtual public AOMInstance {
    DECLARE_META(Pilot, OMAnimatedPilot)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Pilot.h
*********************************************************************/
