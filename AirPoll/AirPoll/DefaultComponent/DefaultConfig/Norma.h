/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Norma
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Norma.h
*********************************************************************/

#ifndef Norma_H
#define Norma_H

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

//## class Norma
class Norma : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNorma;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Norma(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Norma();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getParams() const;
    
    //## auto_generated
    void setParams(int p_params);
    
    //## auto_generated
    Stany getPraca() const;
    
    //## auto_generated
    void setPraca(Stany p_praca);
    
    //## auto_generated
    Stany getStanLok() const;
    
    //## auto_generated
    void setStanLok(Stany p_stanLok);
    
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
    
    int params;		//## attribute params
    
    Stany praca;		//## attribute praca
    
    Stany stanLok;		//## attribute stanLok
    
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
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // Porownywanie:
    //## statechart_method
    inline bool Porownywanie_IN() const;
    
    // Odcieta:
    //## statechart_method
    inline bool Odcieta_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Norma_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        Porownywanie = 2,
        Odcieta = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNorma : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Norma, OMAnimatedNorma)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Porownywanie_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Odcieta_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Norma::rootState_IN() const {
    return true;
}

inline bool Norma::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Norma::Porownywanie_IN() const {
    return rootState_subState == Porownywanie;
}

inline bool Norma::Odcieta_IN() const {
    return rootState_subState == Odcieta;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Norma.h
*********************************************************************/
