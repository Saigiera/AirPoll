/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DetektorKolizji
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/DetektorKolizji.h
*********************************************************************/

#ifndef DetektorKolizji_H
#define DetektorKolizji_H

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

//## class DetektorKolizji
class DetektorKolizji : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDetektorKolizji;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DetektorKolizji(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~DetektorKolizji();
    
    ////    Operations    ////
    
    //## operation zerujIloscImpulsow()
    void zerujIloscImpulsow();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getIloscImpulsowOdebranych() const;
    
    //## auto_generated
    void setIloscImpulsowOdebranych(int p_iloscImpulsowOdebranych);
    
    //## auto_generated
    int getIloscImpulsowWyslanych() const;
    
    //## auto_generated
    void setIloscImpulsowWyslanych(int p_iloscImpulsowWyslanych);
    
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
    
    int iloscImpulsowOdebranych;		//## attribute iloscImpulsowOdebranych
    
    int iloscImpulsowWyslanych;		//## attribute iloscImpulsowWyslanych
    
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
class OMAnimatedDetektorKolizji : virtual public AOMInstance {
    DECLARE_META(DetektorKolizji, OMAnimatedDetektorKolizji)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/DetektorKolizji.h
*********************************************************************/
