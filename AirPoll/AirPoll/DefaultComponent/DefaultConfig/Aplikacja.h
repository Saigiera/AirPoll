/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Aplikacja
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Aplikacja.h
*********************************************************************/

#ifndef Aplikacja_H
#define Aplikacja_H

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
//## link itsCzujnik
#include "Czujnik.h"
//## link itsNorma
#include "Norma.h"
//## link itsOdbiornikGPS
#include "OdbiornikGPS.h"
//## link itsPowiadomieniePrz
#include "PowiadomieniePrz.h"
//## link itsPaczka
class Paczka;

//## package Default

//## class Aplikacja
class Aplikacja : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAplikacja;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Aplikacja(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Aplikacja();
    
    ////    Operations    ////
    
    //## operation ustawStan(Stany)
    void ustawStan(const Stany& stanLok);
    
    //## operation ustawstanLok()
    void ustawstanLok();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getNormaZanieczyszczen() const;
    
    //## auto_generated
    void setNormaZanieczyszczen(int p_NormaZanieczyszczen);
    
    //## auto_generated
    Poll getPowiadomienie() const;
    
    //## auto_generated
    void setPowiadomienie(Poll p_Powiadomienie);
    
    //## auto_generated
    int getZanieczyszczeniaTeraz() const;
    
    //## auto_generated
    void setZanieczyszczeniaTeraz(int p_ZanieczyszczeniaTeraz);
    
    //## auto_generated
    int getOkres() const;
    
    //## auto_generated
    void setOkres(int p_okres);
    
    //## auto_generated
    Stany getStan() const;
    
    //## auto_generated
    void setStan(Stany p_stan);
    
    //## auto_generated
    bool getStanLok() const;
    
    //## auto_generated
    void setStanLok(bool p_stanLok);
    
    //## auto_generated
    Poll getStanPow() const;
    
    //## auto_generated
    void setStanPow(Poll p_stanPow);
    
    //## auto_generated
    Czujnik* getItsCzujnik() const;
    
    //## auto_generated
    Norma* getItsNorma() const;
    
    //## auto_generated
    OdbiornikGPS* getItsOdbiornikGPS() const;
    
    //## auto_generated
    Paczka* getItsPaczka() const;
    
    //## auto_generated
    void setItsPaczka(Paczka* p_Paczka);
    
    //## auto_generated
    PowiadomieniePrz* getItsPowiadomieniePrz() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);

private :

    //## auto_generated
    int getRejestrBledow() const;
    
    //## auto_generated
    void setRejestrBledow(int p_rejestrBledow);
    
    ////    Attributes    ////

protected :

    int NormaZanieczyszczen;		//## attribute NormaZanieczyszczen
    
    Poll Powiadomienie;		//## attribute Powiadomienie
    
    int ZanieczyszczeniaTeraz;		//## attribute ZanieczyszczeniaTeraz
    
    int okres;		//## attribute okres
    
    int rejestrBledow;		//## attribute rejestrBledow
    
    Stany stan;		//## attribute stan
    
    bool stanLok;		//## attribute stanLok
    
    Poll stanPow;		//## attribute stanPow
    
    ////    Relations and components    ////
    
    Czujnik itsCzujnik;		//## link itsCzujnik
    
    Norma itsNorma;		//## link itsNorma
    
    OdbiornikGPS itsOdbiornikGPS;		//## link itsOdbiornikGPS
    
    Paczka* itsPaczka;		//## link itsPaczka
    
    PowiadomieniePrz itsPowiadomieniePrz;		//## link itsPowiadomieniePrz
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPaczka(Paczka* p_Paczka);
    
    //## auto_generated
    void _setItsPaczka(Paczka* p_Paczka);
    
    //## auto_generated
    void _clearItsPaczka();
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // TworzeniePowiadomien:
    //## statechart_method
    inline bool TworzeniePowiadomien_IN() const;
    
    //## statechart_method
    inline bool TworzeniePowiadomien_isCompleted();
    
    //## statechart_method
    void TworzeniePowiadomien_entDef();
    
    //## statechart_method
    void TworzeniePowiadomien_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TworzeniePowiadomien_handleEvent();
    
    // terminationstate_9:
    //## statechart_method
    inline bool terminationstate_9_IN() const;
    
    // sendaction_8:
    //## statechart_method
    inline bool sendaction_8_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus sendaction_7_handleEvent();
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // terminationstate_2:
    //## statechart_method
    inline bool terminationstate_2_IN() const;
    
    // sendaction_19:
    //## statechart_method
    inline bool sendaction_19_IN() const;
    
    // sendaction_18:
    //## statechart_method
    inline bool sendaction_18_IN() const;
    
    // sendaction_17:
    //## statechart_method
    inline bool sendaction_17_IN() const;
    
    // sendaction_16:
    //## statechart_method
    inline bool sendaction_16_IN() const;
    
    // PowiadomieniaPrzesyl:
    //## statechart_method
    inline bool PowiadomieniaPrzesyl_IN() const;
    
    // Oczekiwanie:
    //## statechart_method
    inline bool Oczekiwanie_IN() const;
    
    // Inicjalizacja:
    //## statechart_method
    inline bool Inicjalizacja_IN() const;
    
    // Informacja:
    //## statechart_method
    inline bool Informacja_IN() const;
    
    // BladOdpalania:
    //## statechart_method
    inline bool BladOdpalania_IN() const;
    
    // Blad:
    //## statechart_method
    inline bool Blad_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Aplikacja_Enum {
        OMNonState = 0,
        TworzeniePowiadomien = 1,
        terminationstate_9 = 2,
        sendaction_8 = 3,
        sendaction_7 = 4,
        sendaction_6 = 5,
        terminationstate_2 = 6,
        sendaction_19 = 7,
        sendaction_18 = 8,
        sendaction_17 = 9,
        sendaction_16 = 10,
        PowiadomieniaPrzesyl = 11,
        Oczekiwanie = 12,
        Inicjalizacja = 13,
        Informacja = 14,
        BladOdpalania = 15,
        Blad = 16
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int TworzeniePowiadomien_subState;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAplikacja : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Aplikacja, OMAnimatedAplikacja)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TworzeniePowiadomien_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_19_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_18_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PowiadomieniaPrzesyl_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Oczekiwanie_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Inicjalizacja_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Informacja_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BladOdpalania_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Blad_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Aplikacja::rootState_IN() const {
    return true;
}

inline bool Aplikacja::rootState_isCompleted() {
    return ( IS_IN(terminationstate_2) );
}

inline bool Aplikacja::TworzeniePowiadomien_IN() const {
    return rootState_subState == TworzeniePowiadomien;
}

inline bool Aplikacja::TworzeniePowiadomien_isCompleted() {
    return ( IS_IN(terminationstate_9) );
}

inline bool Aplikacja::terminationstate_9_IN() const {
    return TworzeniePowiadomien_subState == terminationstate_9;
}

inline bool Aplikacja::sendaction_8_IN() const {
    return TworzeniePowiadomien_subState == sendaction_8;
}

inline bool Aplikacja::sendaction_7_IN() const {
    return TworzeniePowiadomien_subState == sendaction_7;
}

inline bool Aplikacja::sendaction_6_IN() const {
    return TworzeniePowiadomien_subState == sendaction_6;
}

inline bool Aplikacja::terminationstate_2_IN() const {
    return rootState_subState == terminationstate_2;
}

inline bool Aplikacja::sendaction_19_IN() const {
    return rootState_subState == sendaction_19;
}

inline bool Aplikacja::sendaction_18_IN() const {
    return rootState_subState == sendaction_18;
}

inline bool Aplikacja::sendaction_17_IN() const {
    return rootState_subState == sendaction_17;
}

inline bool Aplikacja::sendaction_16_IN() const {
    return rootState_subState == sendaction_16;
}

inline bool Aplikacja::PowiadomieniaPrzesyl_IN() const {
    return rootState_subState == PowiadomieniaPrzesyl;
}

inline bool Aplikacja::Oczekiwanie_IN() const {
    return rootState_subState == Oczekiwanie;
}

inline bool Aplikacja::Inicjalizacja_IN() const {
    return rootState_subState == Inicjalizacja;
}

inline bool Aplikacja::Informacja_IN() const {
    return rootState_subState == Informacja;
}

inline bool Aplikacja::BladOdpalania_IN() const {
    return rootState_subState == BladOdpalania;
}

inline bool Aplikacja::Blad_IN() const {
    return rootState_subState == Blad;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Aplikacja.h
*********************************************************************/
