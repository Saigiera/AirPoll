/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: modul
//!	Generated Date	: Sun, 27, Aug 2023  
	File Path	: DefaultComponent/DefaultConfig/modul.h
*********************************************************************/

#ifndef modul_H
#define modul_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class modul
class modul {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedmodul;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    modul();
    
    //## auto_generated
    virtual ~modul() = 0;
    
    ////    Operations    ////
    
    //## operation czytajUstawienia()
    virtual std::string czytajUstawienia() = 0;
    
    //## operation zapiszUstawienia()
    virtual bool zapiszUstawienia() = 0;
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    int getId() const;
    
    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    std::string getNazwa() const;
    
    //## auto_generated
    void setNazwa(std::string p_nazwa);
    
    ////    Attributes    ////
    
    int id;		//## attribute id
    
    std::string nazwa;		//## attribute nazwa
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedmodul : virtual public AOMInstance {
    DECLARE_META(modul, OMAnimatedmodul)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/modul.h
*********************************************************************/
