
#include "CalcModelFactory.hpp"
#include "impl/CalcModelFactoryImpl.hpp"

using namespace CalcModel;

//static initialisation
std::shared_ptr<CalcModelFactory> CalcModelFactory::instance;

std::shared_ptr<CalcModelFactory> CalcModelFactory::eInstance()
{
	if(instance==nullptr)
	{
		//create a new Singelton Instance
		instance.reset(CalcModelFactoryImpl::create());
		std::dynamic_pointer_cast<CalcModelFactoryImpl>(instance)->init();
	}	
	return instance;
}
