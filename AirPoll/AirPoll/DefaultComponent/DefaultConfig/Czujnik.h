/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Czujnik
//!	Generated Date	: Tue, 29, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Czujnik.h
*********************************************************************/

#ifndef Czujnik_H
#define Czujnik_H

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

//## class Czujnik
class Czujnik : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCzujnik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Czujnik(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Czujnik();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getNormaZanieczyszczen() const;
    
    //## auto_generated
    void setNormaZanieczyszczen(int p_NormaZanieczyszczen);
    
    //## auto_generated
    int getZanieczyszczeniaTeraz() const;
    
    //## auto_generated
    void setZanieczyszczeniaTeraz(int p_ZanieczyszczeniaTeraz);
    
    //## auto_generated
    Stany getPraca() const;
    
    //## auto_generated
    void setPraca(Stany p_praca);
    
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
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int NormaZanieczyszczen;		//## attribute NormaZanieczyszczen
    
    int ZanieczyszczeniaTeraz;		//## attribute ZanieczyszczeniaTeraz
    
    Stany praca;		//## attribute praca
    
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
    
    // Wysylanie:
    //## statechart_method
    inline bool Wysylanie_IN() const;
    
    // Wylaczony:
    //## statechart_method
    inline bool Wylaczony_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // Mierzenie:
    //## statechart_method
    inline bool Mierzenie_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Czujnik_Enum {
        OMNonState = 0,
        Wysylanie = 1,
        Wylaczony = 2,
        sendaction_3 = 3,
        Mierzenie = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCzujnik : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Czujnik, OMAnimatedCzujnik)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Wysylanie_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Wylaczony_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Mierzenie_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Czujnik::rootState_IN() const {
    return true;
}

inline bool Czujnik::Wysylanie_IN() const {
    return rootState_subState == Wysylanie;
}

inline bool Czujnik::Wylaczony_IN() const {
    return rootState_subState == Wylaczony;
}

inline bool Czujnik::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool Czujnik::Mierzenie_IN() const {
    return rootState_subState == Mierzenie;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Czujnik.h
*********************************************************************/
