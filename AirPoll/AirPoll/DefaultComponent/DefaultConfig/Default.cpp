/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Wed, 30, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "Aplikacja.h"
//## auto_generated
#include "Czujnik.h"
//## auto_generated
#include "Ikona.h"
//## auto_generated
#include "Norma.h"
//## auto_generated
#include "OdbiornikGPS.h"
//## auto_generated
#include "Paczka.h"
//## auto_generated
#include "PowiadomieniePrz.h"
//## auto_generated
#include "Ustawienia.h"
//#[ ignore
#define evImpuls_SERIALIZE OM_NO_OP

#define evImpuls_UNSERIALIZE OM_NO_OP

#define evImpuls_CONSTRUCTOR evImpuls()

#define evDekoduj_SERIALIZE OM_NO_OP

#define evDekoduj_UNSERIALIZE OM_NO_OP

#define evDekoduj_CONSTRUCTOR evDekoduj()

#define evStop_SERIALIZE OM_NO_OP

#define evStop_UNSERIALIZE OM_NO_OP

#define evStop_CONSTRUCTOR evStop()

#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()

#define evKrokRuchu_SERIALIZE OM_NO_OP

#define evKrokRuchu_UNSERIALIZE OM_NO_OP

#define evKrokRuchu_CONSTRUCTOR evKrokRuchu()

#define evSprawdzanieKolizji_SERIALIZE OM_NO_OP

#define evSprawdzanieKolizji_UNSERIALIZE OM_NO_OP

#define evSprawdzanieKolizji_CONSTRUCTOR evSprawdzanieKolizji()

#define evKolizja_SERIALIZE OM_NO_OP

#define evKolizja_UNSERIALIZE OM_NO_OP

#define evKolizja_CONSTRUCTOR evKolizja()

#define evMigaj_SERIALIZE OM_NO_OP

#define evMigaj_UNSERIALIZE OM_NO_OP

#define evMigaj_CONSTRUCTOR evMigaj()

#define evLokalizowanie_SERIALIZE OM_NO_OP

#define evLokalizowanie_UNSERIALIZE OM_NO_OP

#define evLokalizowanie_CONSTRUCTOR evLokalizowanie()

#define evKlikniecie_SERIALIZE OM_NO_OP

#define evKlikniecie_UNSERIALIZE OM_NO_OP

#define evKlikniecie_CONSTRUCTOR evKlikniecie()

#define evLokalizacja_SERIALIZE OM_NO_OP

#define evLokalizacja_UNSERIALIZE OM_NO_OP

#define evLokalizacja_CONSTRUCTOR evLokalizacja()

#define evPomiar_SERIALIZE OM_NO_OP

#define evPomiar_UNSERIALIZE OM_NO_OP

#define evPomiar_CONSTRUCTOR evPomiar()

#define evSprawdzaniePmoiaru_SERIALIZE OM_NO_OP

#define evSprawdzaniePmoiaru_UNSERIALIZE OM_NO_OP

#define evSprawdzaniePmoiaru_CONSTRUCTOR evSprawdzaniePmoiaru()

#define evSprawdzeniePomiaru_SERIALIZE OM_NO_OP

#define evSprawdzeniePomiaru_UNSERIALIZE OM_NO_OP

#define evSprawdzeniePomiaru_CONSTRUCTOR evSprawdzeniePomiaru()

#define evInformacjaOStaniePowietrza_SERIALIZE OM_NO_OP

#define evInformacjaOStaniePowietrza_UNSERIALIZE OM_NO_OP

#define evInformacjaOStaniePowietrza_CONSTRUCTOR evInformacjaOStaniePowietrza()

#define evRozpoczeniciePracy_SERIALIZE OM_NO_OP

#define evRozpoczeniciePracy_UNSERIALIZE OM_NO_OP

#define evRozpoczeniciePracy_CONSTRUCTOR evRozpoczeniciePracy()

#define evRozpoczenciePracy_SERIALIZE OM_NO_OP

#define evRozpoczenciePracy_UNSERIALIZE OM_NO_OP

#define evRozpoczenciePracy_CONSTRUCTOR evRozpoczenciePracy()

#define evPrzesylanieInformacji_SERIALIZE OM_NO_OP

#define evPrzesylanieInformacji_UNSERIALIZE OM_NO_OP

#define evPrzesylanieInformacji_CONSTRUCTOR evPrzesylanieInformacji()

#define evInformacja_SERIALIZE OM_NO_OP

#define evInformacja_UNSERIALIZE OM_NO_OP

#define evInformacja_CONSTRUCTOR evInformacja()

#define evBladLokalizacji_SERIALIZE OM_NO_OP

#define evBladLokalizacji_UNSERIALIZE OM_NO_OP

#define evBladLokalizacji_CONSTRUCTOR evBladLokalizacji()

#define evTestowanie_SERIALIZE OM_NO_OP

#define evTestowanie_UNSERIALIZE OM_NO_OP

#define evTestowanie_CONSTRUCTOR evTestowanie()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evImpuls()
evImpuls::evImpuls() {
    NOTIFY_EVENT_CONSTRUCTOR(evImpuls)
    setId(evImpuls_Default_id);
}

bool evImpuls::isTypeOf(const short id) const {
    return (evImpuls_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evImpuls, Default, Default, evImpuls())

//## event evDekoduj()
evDekoduj::evDekoduj() {
    NOTIFY_EVENT_CONSTRUCTOR(evDekoduj)
    setId(evDekoduj_Default_id);
}

bool evDekoduj::isTypeOf(const short id) const {
    return (evDekoduj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evDekoduj, Default, Default, evDekoduj())

//## event evStop()
evStop::evStop() {
    NOTIFY_EVENT_CONSTRUCTOR(evStop)
    setId(evStop_Default_id);
}

bool evStop::isTypeOf(const short id) const {
    return (evStop_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStop, Default, Default, evStop())

//## event evStart()
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_Default_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, Default, Default, evStart())

//## event evKrokRuchu()
evKrokRuchu::evKrokRuchu() {
    NOTIFY_EVENT_CONSTRUCTOR(evKrokRuchu)
    setId(evKrokRuchu_Default_id);
}

bool evKrokRuchu::isTypeOf(const short id) const {
    return (evKrokRuchu_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evKrokRuchu, Default, Default, evKrokRuchu())

//## event evSprawdzanieKolizji()
evSprawdzanieKolizji::evSprawdzanieKolizji() {
    NOTIFY_EVENT_CONSTRUCTOR(evSprawdzanieKolizji)
    setId(evSprawdzanieKolizji_Default_id);
}

bool evSprawdzanieKolizji::isTypeOf(const short id) const {
    return (evSprawdzanieKolizji_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSprawdzanieKolizji, Default, Default, evSprawdzanieKolizji())

//## event evKolizja()
evKolizja::evKolizja() {
    NOTIFY_EVENT_CONSTRUCTOR(evKolizja)
    setId(evKolizja_Default_id);
}

bool evKolizja::isTypeOf(const short id) const {
    return (evKolizja_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evKolizja, Default, Default, evKolizja())

//## event evMigaj()
evMigaj::evMigaj() {
    NOTIFY_EVENT_CONSTRUCTOR(evMigaj)
    setId(evMigaj_Default_id);
}

bool evMigaj::isTypeOf(const short id) const {
    return (evMigaj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evMigaj, Default, Default, evMigaj())

//## event evLokalizowanie()
evLokalizowanie::evLokalizowanie() {
    NOTIFY_EVENT_CONSTRUCTOR(evLokalizowanie)
    setId(evLokalizowanie_Default_id);
}

bool evLokalizowanie::isTypeOf(const short id) const {
    return (evLokalizowanie_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evLokalizowanie, Default, Default, evLokalizowanie())

//## event evKlikniecie()
evKlikniecie::evKlikniecie() {
    NOTIFY_EVENT_CONSTRUCTOR(evKlikniecie)
    setId(evKlikniecie_Default_id);
}

bool evKlikniecie::isTypeOf(const short id) const {
    return (evKlikniecie_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evKlikniecie, Default, Default, evKlikniecie())

//## event evLokalizacja()
evLokalizacja::evLokalizacja() {
    NOTIFY_EVENT_CONSTRUCTOR(evLokalizacja)
    setId(evLokalizacja_Default_id);
}

bool evLokalizacja::isTypeOf(const short id) const {
    return (evLokalizacja_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evLokalizacja, Default, Default, evLokalizacja())

//## event evPomiar()
evPomiar::evPomiar() {
    NOTIFY_EVENT_CONSTRUCTOR(evPomiar)
    setId(evPomiar_Default_id);
}

bool evPomiar::isTypeOf(const short id) const {
    return (evPomiar_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPomiar, Default, Default, evPomiar())

//## event evSprawdzaniePmoiaru()
evSprawdzaniePmoiaru::evSprawdzaniePmoiaru() {
    NOTIFY_EVENT_CONSTRUCTOR(evSprawdzaniePmoiaru)
    setId(evSprawdzaniePmoiaru_Default_id);
}

bool evSprawdzaniePmoiaru::isTypeOf(const short id) const {
    return (evSprawdzaniePmoiaru_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSprawdzaniePmoiaru, Default, Default, evSprawdzaniePmoiaru())

//## event evSprawdzeniePomiaru()
evSprawdzeniePomiaru::evSprawdzeniePomiaru() {
    NOTIFY_EVENT_CONSTRUCTOR(evSprawdzeniePomiaru)
    setId(evSprawdzeniePomiaru_Default_id);
}

bool evSprawdzeniePomiaru::isTypeOf(const short id) const {
    return (evSprawdzeniePomiaru_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSprawdzeniePomiaru, Default, Default, evSprawdzeniePomiaru())

//## event evInformacjaOStaniePowietrza()
evInformacjaOStaniePowietrza::evInformacjaOStaniePowietrza() {
    NOTIFY_EVENT_CONSTRUCTOR(evInformacjaOStaniePowietrza)
    setId(evInformacjaOStaniePowietrza_Default_id);
}

bool evInformacjaOStaniePowietrza::isTypeOf(const short id) const {
    return (evInformacjaOStaniePowietrza_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evInformacjaOStaniePowietrza, Default, Default, evInformacjaOStaniePowietrza())

//## event evRozpoczeniciePracy()
evRozpoczeniciePracy::evRozpoczeniciePracy() {
    NOTIFY_EVENT_CONSTRUCTOR(evRozpoczeniciePracy)
    setId(evRozpoczeniciePracy_Default_id);
}

bool evRozpoczeniciePracy::isTypeOf(const short id) const {
    return (evRozpoczeniciePracy_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRozpoczeniciePracy, Default, Default, evRozpoczeniciePracy())

//## event evRozpoczenciePracy()
evRozpoczenciePracy::evRozpoczenciePracy() {
    NOTIFY_EVENT_CONSTRUCTOR(evRozpoczenciePracy)
    setId(evRozpoczenciePracy_Default_id);
}

bool evRozpoczenciePracy::isTypeOf(const short id) const {
    return (evRozpoczenciePracy_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRozpoczenciePracy, Default, Default, evRozpoczenciePracy())

//## event evPrzesylanieInformacji()
evPrzesylanieInformacji::evPrzesylanieInformacji() {
    NOTIFY_EVENT_CONSTRUCTOR(evPrzesylanieInformacji)
    setId(evPrzesylanieInformacji_Default_id);
}

bool evPrzesylanieInformacji::isTypeOf(const short id) const {
    return (evPrzesylanieInformacji_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPrzesylanieInformacji, Default, Default, evPrzesylanieInformacji())

//## event evInformacja()
evInformacja::evInformacja() {
    NOTIFY_EVENT_CONSTRUCTOR(evInformacja)
    setId(evInformacja_Default_id);
}

bool evInformacja::isTypeOf(const short id) const {
    return (evInformacja_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evInformacja, Default, Default, evInformacja())

//## event evBladLokalizacji()
evBladLokalizacji::evBladLokalizacji() {
    NOTIFY_EVENT_CONSTRUCTOR(evBladLokalizacji)
    setId(evBladLokalizacji_Default_id);
}

bool evBladLokalizacji::isTypeOf(const short id) const {
    return (evBladLokalizacji_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evBladLokalizacji, Default, Default, evBladLokalizacji())

//## event evTestowanie()
evTestowanie::evTestowanie() {
    NOTIFY_EVENT_CONSTRUCTOR(evTestowanie)
    setId(evTestowanie_Default_id);
}

bool evTestowanie::isTypeOf(const short id) const {
    return (evTestowanie_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evTestowanie, Default, Default, evTestowanie())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
