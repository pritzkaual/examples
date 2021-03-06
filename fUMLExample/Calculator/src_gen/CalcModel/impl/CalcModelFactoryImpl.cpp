#include "CalcModelFactoryImpl.hpp"
#include "CalcModelPackage.hpp"
#include "Class.hpp"

using namespace CalcModel;

//*********************************
// Constructor / Destructor
//*********************************
CalcModelFactoryImpl::CalcModelFactoryImpl()
{
	m_creatorMap.insert(std::pair<std::string,std::function<std::shared_ptr<uml::Element>()>>("CheckIfPrime",[this](){return this->createCheckIfPrime();}));
	m_creatorMap.insert(std::pair<std::string,std::function<std::shared_ptr<uml::Element>()>>("PrimeChecker",[this](){return this->createPrimeChecker();}));
}

CalcModelFactoryImpl::~CalcModelFactoryImpl()
{
}

CalcModelFactory* CalcModelFactoryImpl::create()
{
	return new CalcModelFactoryImpl();
}

//*********************************
// creators
//*********************************
std::shared_ptr<uml::Element> CalcModelFactoryImpl::create(std::shared_ptr<uml::Class> _class)
{
	if(_class->getIsAbstract())
    {
    	return nullptr;
    }

	//TODO: still two times run through map
	std::string _className = _class->getQualifiedName();
	return create(_className);
}

std::shared_ptr<uml::Element> CalcModelFactoryImpl::create(std::string _className)
{
	std::map<std::string,std::function<std::shared_ptr<uml::Element>()>>::iterator iter = m_creatorMap.find(_className);
    if(iter != m_creatorMap.end())
    {
		//invoke the creator function
        return iter->second();
    }

    return nullptr;
}

std::shared_ptr<CalcModel::CheckIfPrime> CalcModelFactoryImpl::createCheckIfPrime ()
{
	std::shared_ptr<CalcModel::CheckIfPrime> element(new CheckIfPrimeImpl());
	return element;
}
std::shared_ptr<CalcModel::PrimeChecker> CalcModelFactoryImpl::createPrimeChecker ()
{
	std::shared_ptr<CalcModel::PrimeChecker> element(new PrimeCheckerImpl());
	return element;
}

std::shared_ptr<CalcModelPackage> CalcModelFactoryImpl::getCalcModelPackage()
{
	return CalcModelPackage::eInstance();
}
