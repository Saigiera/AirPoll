/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OdbiornikGPS
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/OdbiornikGPS.h
*********************************************************************/

#ifndef OdbiornikGPS_H
#define OdbiornikGPS_H

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
//## link itsIkona
#include "Ikona.h"
//## link itsAplikacja
class Aplikacja;

//## package Default

//## class OdbiornikGPS
class OdbiornikGPS : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOdbiornikGPS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    OdbiornikGPS(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~OdbiornikGPS();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getLokalizacja() const;
    
    //## auto_generated
    void setLokalizacja(bool p_Lokalizacja);
    
    //## auto_generated
    Aplikacja* getItsAplikacja() const;
    
    //## auto_generated
    void setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    Ikona* getItsIkona() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool Lokalizacja;		//## attribute Lokalizacja
    
    ////    Relations and components    ////
    
    Aplikacja* itsAplikacja;		//## link itsAplikacja
    
    Ikona itsIkona;		//## link itsIkona
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    void _setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    void _clearItsAplikacja();
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Wylaczony:
    //## statechart_method
    inline bool Wylaczony_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // Oczekiwanie:
    //## statechart_method
    inline bool Oczekiwanie_IN() const;
    
    // LokalizowanieStan:
    //## statechart_method
    inline bool LokalizowanieStan_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum OdbiornikGPS_Enum {
        OMNonState = 0,
        Wylaczony = 1,
        sendaction_3 = 2,
        Oczekiwanie = 3,
        LokalizowanieStan = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOdbiornikGPS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(OdbiornikGPS, OMAnimatedOdbiornikGPS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Wylaczony_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Oczekiwanie_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LokalizowanieStan_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool OdbiornikGPS::rootState_IN() const {
    return true;
}

inline bool OdbiornikGPS::Wylaczony_IN() const {
    return rootState_subState == Wylaczony;
}

inline bool OdbiornikGPS::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool OdbiornikGPS::Oczekiwanie_IN() const {
    return rootState_subState == Oczekiwanie;
}

inline bool OdbiornikGPS::LokalizowanieStan_IN() const {
    return rootState_subState == LokalizowanieStan;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/OdbiornikGPS.h
*********************************************************************/
