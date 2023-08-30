/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Paczka
//!	Generated Date	: Tue, 29, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Paczka.h
*********************************************************************/

#ifndef Paczka_H
#define Paczka_H

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
//## link itsAplikacja
#include "Aplikacja.h"
//## link itsUstawienia
class Ustawienia;

//## package Default

//## class Paczka
class Paczka : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPaczka;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Paczka(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Paczka();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Aplikacja* getItsAplikacja() const;
    
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
    
    Aplikacja itsAplikacja;		//## link itsAplikacja
    
    OMList<Ustawienia*> itsUstawienia;		//## link itsUstawienia
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsUstawienia(Ustawienia* p_Ustawienia);
    
    //## auto_generated
    void _removeItsUstawienia(Ustawienia* p_Ustawienia);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPaczka : virtual public AOMInstance {
    DECLARE_META(Paczka, OMAnimatedPaczka)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Paczka.h
*********************************************************************/
