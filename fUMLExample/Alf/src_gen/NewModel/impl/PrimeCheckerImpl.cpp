
#include "PrimeCheckerImpl.hpp"
#include "NewModelPackageImpl.hpp"
#include "Class.hpp"

using namespace NewModel;
using boost::any_cast;

//*********************************
// Constructor / Destructor
//*********************************
PrimeCheckerImpl::PrimeCheckerImpl()
{
	//***********************************
	// init Get Set
	//getter init
	m_getterMap.insert(std::pair<std::string,std::function<boost::any()>>("NewModel::PrimeChecker::divider",[this](){ return this->getDivider();}));
	m_getterMap.insert(std::pair<std::string,std::function<boost::any()>>("NewModel::PrimeChecker::number",[this](){ return this->getNumber();}));
	
	m_setterMap.insert(std::pair<std::string,std::function<void(boost::any)>>("NewModel::PrimeChecker::divider",[this](boost::any object){this->setDivider(any_cast<int>(object));}));
	m_setterMap.insert(std::pair<std::string,std::function<void(boost::any)>>("NewModel::PrimeChecker::number",[this](boost::any object){this->setNumber(any_cast<int>(object));}));
	
	 
}

PrimeCheckerImpl::~PrimeCheckerImpl()
{
	
}

uml::Class * PrimeCheckerImpl::getMetaClass() const
{
	return NewModelPackageImpl::eInstance()->get_NewModel_PrimeChecker();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void PrimeCheckerImpl::setDivider (int _divider)
{
	m_divider = _divider;
}
int PrimeCheckerImpl::getDivider() const 
{
	return m_divider;
}

void PrimeCheckerImpl::setNumber (int _number)
{
	m_number = _number;
}
int PrimeCheckerImpl::getNumber() const 
{
	return m_number;
}

//*********************************
// Operations
//*********************************
bool PrimeCheckerImpl::divides()
{
	bool isDivisible;

	// Implemented as Function behaviour fbDivides

isDivisible = this->getNumber() % this->getDivider() == 0;

	return isDivisible;
}

bool PrimeCheckerImpl::isNotFinished()
{
	bool isNotFinished;

	// Implemented as Function behaviour fbIsNotFinished

isNotFinished = this->getDivider() <= this->getNumber() / 2;

	return isNotFinished;
}

bool PrimeCheckerImpl::isOdd()
{
	bool isOdd;

	// Implemented as Function behaviour fbIsOdd

isOdd = this->getNumber() % 2 != 0;

	return isOdd;
}

void PrimeCheckerImpl::next()
{

	// Implemented as Function behaviour fbNext

this->setDivider (this->getDivider() + 2);

}

void PrimeCheckerImpl::printIsPrime()
{

	// Implemented as Function behaviour fbPrintIsPrime

std::cout<<"Number is prime";

}

void PrimeCheckerImpl::printNotPrime()
{

	// Implemented as Function behaviour fbPrintNotPrime

std::cout<<"Number is not prime";

}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any PrimeCheckerImpl::get(uml::Property * _property) const
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

void PrimeCheckerImpl::set(uml::Property *  _property,boost::any value)
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

void PrimeCheckerImpl::unset(uml::Property *  _property)
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
