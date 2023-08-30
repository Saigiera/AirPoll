/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Aplikacja;

//## auto_generated
class Czujnik;

//## auto_generated
class Ikona;

//## auto_generated
class Norma;

//## auto_generated
class OdbiornikGPS;

//## auto_generated
class Paczka;

//## auto_generated
class PowiadomieniePrz;

//## auto_generated
class Ustawienia;

//#[ ignore
#define evImpuls_Default_id 18601

#define evDekoduj_Default_id 18602

#define evStop_Default_id 18603

#define evStart_Default_id 18604

#define evKrokRuchu_Default_id 18605

#define evSprawdzanieKolizji_Default_id 18606

#define evKolizja_Default_id 18607

#define evMigaj_Default_id 18608

#define evLokalizowanie_Default_id 18609

#define evKlikniecie_Default_id 18610

#define evLokalizacja_Default_id 18611

#define evPomiar_Default_id 18612

#define evSprawdzaniePmoiaru_Default_id 18613

#define evSprawdzeniePomiaru_Default_id 18614

#define evInformacjaOStaniePowietrza_Default_id 18615

#define evRozpoczeniciePracy_Default_id 18616

#define evRozpoczenciePracy_Default_id 18617

#define evPrzesylanieInformacji_Default_id 18618

#define evInformacja_Default_id 18619

#define evBladLokalizacji_Default_id 18620

#define evTestowanie_Default_id 18621
//#]

//## package Default


//## type Stany
enum Stany {
    Powodzenie = 1,
    Blad = 0
};

//## type Poll
enum Poll {
    Dobre = 1,
    Zle = 0
};

//## event evImpuls()
class evImpuls : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevImpuls;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evImpuls();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevImpuls : virtual public AOMEvent {
    DECLARE_META_EVENT(evImpuls)
};
//#]
#endif // _OMINSTRUMENT

//## event evDekoduj()
class evDekoduj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDekoduj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDekoduj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDekoduj : virtual public AOMEvent {
    DECLARE_META_EVENT(evDekoduj)
};
//#]
#endif // _OMINSTRUMENT

//## event evStop()
class evStop : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStop;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStop : virtual public AOMEvent {
    DECLARE_META_EVENT(evStop)
};
//#]
#endif // _OMINSTRUMENT

//## event evStart()
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

//## event evKrokRuchu()
class evKrokRuchu : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevKrokRuchu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evKrokRuchu();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevKrokRuchu : virtual public AOMEvent {
    DECLARE_META_EVENT(evKrokRuchu)
};
//#]
#endif // _OMINSTRUMENT

//## event evSprawdzanieKolizji()
class evSprawdzanieKolizji : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSprawdzanieKolizji;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSprawdzanieKolizji();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSprawdzanieKolizji : virtual public AOMEvent {
    DECLARE_META_EVENT(evSprawdzanieKolizji)
};
//#]
#endif // _OMINSTRUMENT

//## event evKolizja()
class evKolizja : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevKolizja;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evKolizja();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevKolizja : virtual public AOMEvent {
    DECLARE_META_EVENT(evKolizja)
};
//#]
#endif // _OMINSTRUMENT

//## event evMigaj()
class evMigaj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMigaj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMigaj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMigaj : virtual public AOMEvent {
    DECLARE_META_EVENT(evMigaj)
};
//#]
#endif // _OMINSTRUMENT

//## event evLokalizowanie()
class evLokalizowanie : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLokalizowanie;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLokalizowanie();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLokalizowanie : virtual public AOMEvent {
    DECLARE_META_EVENT(evLokalizowanie)
};
//#]
#endif // _OMINSTRUMENT

//## event evKlikniecie()
class evKlikniecie : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevKlikniecie;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evKlikniecie();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevKlikniecie : virtual public AOMEvent {
    DECLARE_META_EVENT(evKlikniecie)
};
//#]
#endif // _OMINSTRUMENT

//## event evLokalizacja()
class evLokalizacja : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLokalizacja;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLokalizacja();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLokalizacja : virtual public AOMEvent {
    DECLARE_META_EVENT(evLokalizacja)
};
//#]
#endif // _OMINSTRUMENT

//## event evPomiar()
class evPomiar : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPomiar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPomiar();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPomiar : virtual public AOMEvent {
    DECLARE_META_EVENT(evPomiar)
};
//#]
#endif // _OMINSTRUMENT

//## event evSprawdzaniePmoiaru()
class evSprawdzaniePmoiaru : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSprawdzaniePmoiaru;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSprawdzaniePmoiaru();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSprawdzaniePmoiaru : virtual public AOMEvent {
    DECLARE_META_EVENT(evSprawdzaniePmoiaru)
};
//#]
#endif // _OMINSTRUMENT

//## event evSprawdzeniePomiaru()
class evSprawdzeniePomiaru : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSprawdzeniePomiaru;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSprawdzeniePomiaru();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSprawdzeniePomiaru : virtual public AOMEvent {
    DECLARE_META_EVENT(evSprawdzeniePomiaru)
};
//#]
#endif // _OMINSTRUMENT

//## event evInformacjaOStaniePowietrza()
class evInformacjaOStaniePowietrza : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInformacjaOStaniePowietrza;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInformacjaOStaniePowietrza();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInformacjaOStaniePowietrza : virtual public AOMEvent {
    DECLARE_META_EVENT(evInformacjaOStaniePowietrza)
};
//#]
#endif // _OMINSTRUMENT

//## event evRozpoczeniciePracy()
class evRozpoczeniciePracy : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRozpoczeniciePracy;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRozpoczeniciePracy();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRozpoczeniciePracy : virtual public AOMEvent {
    DECLARE_META_EVENT(evRozpoczeniciePracy)
};
//#]
#endif // _OMINSTRUMENT

//## event evRozpoczenciePracy()
class evRozpoczenciePracy : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRozpoczenciePracy;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRozpoczenciePracy();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRozpoczenciePracy : virtual public AOMEvent {
    DECLARE_META_EVENT(evRozpoczenciePracy)
};
//#]
#endif // _OMINSTRUMENT

//## event evPrzesylanieInformacji()
class evPrzesylanieInformacji : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPrzesylanieInformacji;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPrzesylanieInformacji();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPrzesylanieInformacji : virtual public AOMEvent {
    DECLARE_META_EVENT(evPrzesylanieInformacji)
};
//#]
#endif // _OMINSTRUMENT

//## event evInformacja()
class evInformacja : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInformacja;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInformacja();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInformacja : virtual public AOMEvent {
    DECLARE_META_EVENT(evInformacja)
};
//#]
#endif // _OMINSTRUMENT

//## event evBladLokalizacji()
class evBladLokalizacji : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBladLokalizacji;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBladLokalizacji();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBladLokalizacji : virtual public AOMEvent {
    DECLARE_META_EVENT(evBladLokalizacji)
};
//#]
#endif // _OMINSTRUMENT

//## event evTestowanie()
class evTestowanie : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTestowanie;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTestowanie();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTestowanie : virtual public AOMEvent {
    DECLARE_META_EVENT(evTestowanie)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/
