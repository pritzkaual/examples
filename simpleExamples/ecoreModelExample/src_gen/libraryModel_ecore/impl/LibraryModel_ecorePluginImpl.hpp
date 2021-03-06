//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECOREPLUGINIMPL_HPP
#define LIBRARYMODEL_ECOREPLUGINIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

#include "LibraryModel_ecorePlugin.hpp"

namespace libraryModel_ecore 
{
	class LibraryModel_ecorePluginImpl : virtual public LibraryModel_ecorePlugin 
	{
		public:
			LibraryModel_ecorePluginImpl();
			virtual ~LibraryModel_ecorePluginImpl();
		
			virtual std::string eNAME();
			virtual std::string eNS_URI();
			virtual std::string eNS_PREFIX();
		
			virtual std::shared_ptr<ecore::EFactory> getFactory();
			virtual std::shared_ptr<ecore::EPackage> getPackage();
	};
}
#endif /* end of include guard: LIBRARYMODEL_ECOREPLUGINIMPL_HPP */

