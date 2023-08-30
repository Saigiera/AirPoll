/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Ustawienia
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Ustawienia.h
*********************************************************************/

#ifndef Ustawienia_H
#define Ustawienia_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## link itsPaczka
class Paczka;

//## package Default

//## class Ustawienia
class Ustawienia {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUstawienia;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Ustawienia();
    
    //## auto_generated
    ~Ustawienia();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Paczka* getItsPaczka() const;
    
    //## auto_generated
    void setItsPaczka(Paczka* p_Paczka);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Paczka* itsPaczka;		//## link itsPaczka
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPaczka(Paczka* p_Paczka);
    
    //## auto_generated
    void _setItsPaczka(Paczka* p_Paczka);
    
    //## auto_generated
    void _clearItsPaczka();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUstawienia : virtual public AOMInstance {
    DECLARE_META(Ustawienia, OMAnimatedUstawienia)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Ustawienia.h
*********************************************************************/
