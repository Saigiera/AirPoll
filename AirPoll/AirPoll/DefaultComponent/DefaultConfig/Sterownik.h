/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sterownik
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Sterownik.h
*********************************************************************/

#ifndef Sterownik_H
#define Sterownik_H

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
//## link itsDetektorKolizji
#include "DetektorKolizji.h"
//## link itsLampa
#include "Lampa.h"
//## link itsNaped
#include "Naped.h"
//## link itsOdbiornik
#include "Odbiornik.h"
//## link itsPilot
#include "Pilot.h"
//## link itsBrama
class Brama;

//## package Default

//## class Sterownik
class Sterownik : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSterownik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sterownik(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Sterownik();
    
    ////    Operations    ////
    
    //## operation ustawStan(Stany)
    void ustawStan(const Stany& stan);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getStan() const;
    
    //## auto_generated
    void setStan(int p_stan);
    
    //## auto_generated
    Stany getStan0() const;
    
    //## auto_generated
    void setStan0(Stany p_stan0);
    
    //## auto_generated
    bool getSygnalizacja() const;
    
    //## auto_generated
    void setSygnalizacja(bool p_sygnalizacja);
    
    //## auto_generated
    Brama* getItsBrama() const;
    
    //## auto_generated
    void setItsBrama(Brama* p_Brama);
    
    //## auto_generated
    DetektorKolizji* getItsDetektorKolizji() const;
    
    //## auto_generated
    Lampa* getItsLampa() const;
    
    //## auto_generated
    Naped* getItsNaped() const;
    
    //## auto_generated
    Odbiornik* getItsOdbiornik() const;
    
    //## auto_generated
    Pilot* getItsPilot() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int stan;		//## attribute stan
    
    Stany stan0;		//## attribute stan0
    
    bool sygnalizacja;		//## attribute sygnalizacja
    
    ////    Relations and components    ////
    
    Brama* itsBrama;		//## link itsBrama
    
    DetektorKolizji itsDetektorKolizji;		//## link itsDetektorKolizji
    
    Lampa itsLampa;		//## link itsLampa
    
    Naped itsNaped;		//## link itsNaped
    
    Odbiornik itsOdbiornik;		//## link itsOdbiornik
    
    Pilot itsPilot;		//## link itsPilot
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBrama(Brama* p_Brama);
    
    //## auto_generated
    void _setItsBrama(Brama* p_Brama);
    
    //## auto_generated
    void _clearItsBrama();
    
    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSterownik : virtual public AOMInstance {
    DECLARE_META(Sterownik, OMAnimatedSterownik)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Sterownik.h
*********************************************************************/
