/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Ikona
//!	Generated Date	: Tue, 29, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Ikona.h
*********************************************************************/

#ifndef Ikona_H
#define Ikona_H

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
//## link itsOdbiornikGPS
class OdbiornikGPS;

//## package Default

//## class Ikona
class Ikona : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIkona;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Ikona(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Ikona();
    
    ////    Operations    ////
    
    //## operation czytajUstawienia()
    virtual std::string czytajUstawienia();
    
    //## operation zapiszUstawienia()
    virtual bool zapiszUstawienia();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OdbiornikGPS* getItsOdbiornikGPS() const;
    
    //## auto_generated
    void setItsOdbiornikGPS(OdbiornikGPS* p_OdbiornikGPS);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
    OdbiornikGPS* itsOdbiornikGPS;		//## link itsOdbiornikGPS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsOdbiornikGPS(OdbiornikGPS* p_OdbiornikGPS);
    
    //## auto_generated
    void _setItsOdbiornikGPS(OdbiornikGPS* p_OdbiornikGPS);
    
    //## auto_generated
    void _clearItsOdbiornikGPS();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // Oczekujaca:
    //## statechart_method
    inline bool Oczekujaca_IN() const;
    
    // Nieaktywowana:
    //## statechart_method
    inline bool Nieaktywowana_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Ikona_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        Oczekujaca = 2,
        Nieaktywowana = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIkona : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Ikona, OMAnimatedIkona)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Oczekujaca_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Nieaktywowana_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Ikona::rootState_IN() const {
    return true;
}

inline bool Ikona::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Ikona::Oczekujaca_IN() const {
    return rootState_subState == Oczekujaca;
}

inline bool Ikona::Nieaktywowana_IN() const {
    return rootState_subState == Nieaktywowana;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Ikona.h
*********************************************************************/
