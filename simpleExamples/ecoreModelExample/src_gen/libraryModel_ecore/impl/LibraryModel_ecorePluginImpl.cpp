#include "LibraryModel_ecorePluginImpl.hpp"
#include "LibraryModel_ecoreFactory.hpp"
#include "LibraryModel_ecorePackage.hpp"

using namespace libraryModel_ecore;

//*********************************
// Constructor / Destructor
//*********************************
LibraryModel_ecorePluginImpl::LibraryModel_ecorePluginImpl()
{
}

LibraryModel_ecorePluginImpl::~LibraryModel_ecorePluginImpl()
{
}

std::shared_ptr<ecore::EFactory> LibraryModel_ecorePluginImpl::getFactory()
{
	return LibraryModel_ecoreFactory::eInstance();
}

std::shared_ptr<ecore::EPackage> LibraryModel_ecorePluginImpl::getPackage()
{
	return LibraryModel_ecorePackage::eInstance();
}

std::string LibraryModel_ecorePluginImpl::eNAME()
{
	return "libraryModel_ecore";
}

std::string LibraryModel_ecorePluginImpl::eNS_URI()
{
	return "http://www.example.org/libraryModel_ecore";
}

std::string LibraryModel_ecorePluginImpl::eNS_PREFIX()
{
	return "libraryModel_ecore";
}
