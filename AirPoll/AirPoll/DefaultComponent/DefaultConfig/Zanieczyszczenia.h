/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Zanieczyszczenia
//!	Generated Date	: Mon, 28, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/Zanieczyszczenia.h
*********************************************************************/

#ifndef Zanieczyszczenia_H
#define Zanieczyszczenia_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor Zanieczyszczenia
// ZAnieczyszczenia wystepujace w powietrzu.
class Zanieczyszczenia {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedZanieczyszczenia;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Zanieczyszczenia();
    
    //## auto_generated
    ~Zanieczyszczenia();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedZanieczyszczenia : virtual public AOMInstance {
    DECLARE_META(Zanieczyszczenia, OMAnimatedZanieczyszczenia)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Zanieczyszczenia.h
*********************************************************************/
