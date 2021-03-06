#ifndef NEWMODEL_NEWMODEL_ACTIVITY_NEWMODEL ACTIVITYIMPL_HPP
#define NEWMODEL_NEWMODEL_ACTIVITY_NEWMODEL ACTIVITYIMPL_HPP

//********************************************************************
//*    
//* Warning: This file was generated by Mesapp Generator
//*
//********************************************************************


//*********************************
// generated Includes

//Model includes

#include "../NewModel activity.hpp"

#include <functional>


#include "impl/ElementImpl.hpp"


#include "Property.hpp"

#include "boost/any.hpp"

//*********************************
namespace NewModel {
 
class NewModel activityImpl : virtual public uml::ElementImpl, virtual public NewModel activity
{


private:    
NewModel activityImpl(NewModel activityImpl const&) = delete;
NewModel activityImpl& operator=(NewModel activityImpl const&) = delete;

protected:
friend class NewModelFactoryImpl;
//constructor
NewModel activityImpl();

public:

//destructor
virtual ~NewModel activityImpl();

//*********************************
// Operations
//*********************************


//*********************************
// Attributes Getter Setter
//*********************************




protected:


	virtual uml::Class * getMetaClass();

private:



// MOF::Refelection Getter
public:

//*********************************
// Structural Feature Getter/Setter
//*********************************
	virtual boost::any get(uml::Property * _property) ;
	virtual void set(uml::Property *  _property,boost::any value) ;
	virtual void unset(uml::Property *  _property) ;
	
	

private:
	
	QMap<QString,std::function<boost::any ()>> m_getterMap;
	QMap<QString,std::function<void(boost::any)>> m_setterMap;
	QMap<QString,std::function<void()>> m_unsetterMap;
	


};

}



#endif /* end of include guard: NEWMODEL_NEWMODEL ACTIVITY_NEWMODEL ACTIVITYIMPL_HPP */

