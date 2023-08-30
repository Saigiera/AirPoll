/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Brama
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Brama.h
*********************************************************************/

#ifndef Brama_H
#define Brama_H

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
//## auto_generated
#include <oxf/omlist.h>
//## link itsSterownik
#include "Sterownik.h"
//## link itsUstawienia
class Ustawienia;

//## package Default

//## class Brama
class Brama : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBrama;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Brama(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Brama();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Sterownik* getItsSterownik() const;
    
    //## auto_generated
    OMIterator<Ustawienia*> getItsUstawienia() const;
    
    //## auto_generated
    Ustawienia* newItsUstawienia();
    
    //## auto_generated
    void deleteItsUstawienia(Ustawienia* p_Ustawienia);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Sterownik itsSterownik;		//## link itsSterownik
    
    OMList<Ustawienia*> itsUstawienia;		//## link itsUstawienia
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsUstawienia(Ustawienia* p_Ustawienia);
    
    //## auto_generated
    void _removeItsUstawienia(Ustawienia* p_Ustawienia);
    
    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBrama : virtual public AOMInstance {
    DECLARE_META(Brama, OMAnimatedBrama)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Brama.h
*********************************************************************/
