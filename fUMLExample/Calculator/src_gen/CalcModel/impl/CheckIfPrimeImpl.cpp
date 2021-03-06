
#include "CheckIfPrimeImpl.hpp"
#include "CalcModelPackageImpl.hpp"
#include "Activity.hpp"
#include "PrimeChecker.hpp"

using namespace CalcModel;
using boost::any_cast;

//*********************************
// Constructor / Destructor
//*********************************
CheckIfPrimeImpl::CheckIfPrimeImpl()
{
	//***********************************
	// init Get Set
	//getter init
	
	
	 

	// init properties without default
}




CheckIfPrimeImpl::~CheckIfPrimeImpl()
{
}

std::shared_ptr<uml::Class> CheckIfPrimeImpl::getMetaClass()
{
	return CalcModelPackageImpl::eInstance()->get_CalcModel_CheckIfPrime();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CheckIfPrimeImpl::get(std::shared_ptr<uml::Property> _property) const
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string,std::function<boost::any()>>::const_iterator iter = m_getterMap.find(qName);
    if(iter != m_getterMap.cend())
    {
        //invoke the getter function
        return iter->second();
    }
	return boost::any();
}

void CheckIfPrimeImpl::set(std::shared_ptr<uml::Property> _property,boost::any value)
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string,std::function<void(boost::any)>>::iterator iter = m_setterMap.find(qName);
    if(iter != m_setterMap.end())
    {
        //invoke the getter function
        iter->second(value);
    }
}

void CheckIfPrimeImpl::unset(std::shared_ptr<uml::Property> _property)
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string,std::function<void()>>::iterator iter = m_unsetterMap.find(qName);
    if(iter != m_unsetterMap.end())
    {
        //invoke the getter function
        iter->second();
    }
}
