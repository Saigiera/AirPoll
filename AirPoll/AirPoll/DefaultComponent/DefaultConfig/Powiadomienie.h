/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Powiadomienie
//!	Generated Date	: Tue, 29, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Powiadomienie.h
*********************************************************************/

#ifndef Powiadomienie_H
#define Powiadomienie_H

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
//## link itsAplikacja
class Aplikacja;

//## package Default

//## class Powiadomienie
class Powiadomienie : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPowiadomienie;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Powiadomienie(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Powiadomienie();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Poll getJakosc() const;
    
    //## auto_generated
    void setJakosc(Poll p_jakosc);
    
    //## auto_generated
    Aplikacja* getItsAplikacja() const;
    
    //## auto_generated
    void setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    Poll jakosc;		//## attribute jakosc
    
    ////    Relations and components    ////
    
    Aplikacja* itsAplikacja;		//## link itsAplikacja
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    void _setItsAplikacja(Aplikacja* p_Aplikacja);
    
    //## auto_generated
    void _clearItsAplikacja();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Zanieczyszczone:
    //## statechart_method
    inline bool Zanieczyszczone_IN() const;
    
    // Wylaczone:
    //## statechart_method
    inline bool Wylaczone_IN() const;
    
    // Odpalenie:
    //## statechart_method
    inline bool Odpalenie_IN() const;
    
    // Czyste:
    //## statechart_method
    inline bool Czyste_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Powiadomienie_Enum {
        OMNonState = 0,
        Zanieczyszczone = 1,
        Wylaczone = 2,
        Odpalenie = 3,
        Czyste = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPowiadomienie : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Powiadomienie, OMAnimatedPowiadomienie)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Zanieczyszczone_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Wylaczone_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Odpalenie_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Czyste_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Powiadomienie::rootState_IN() const {
    return true;
}

inline bool Powiadomienie::Zanieczyszczone_IN() const {
    return rootState_subState == Zanieczyszczone;
}

inline bool Powiadomienie::Wylaczone_IN() const {
    return rootState_subState == Wylaczone;
}

inline bool Powiadomienie::Odpalenie_IN() const {
    return rootState_subState == Odpalenie;
}

inline bool Powiadomienie::Czyste_IN() const {
    return rootState_subState == Czyste;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Powiadomienie.h
*********************************************************************/
