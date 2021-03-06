//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_UML_LIBRARY_LIBRARYIMPL_HPP
#define LIBRARYMODEL_UML_LIBRARY_LIBRARYIMPL_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>
#include <memory>
#include "SubsetUnion.hpp"

//*********************************
// generated Includes

//Model includes
#include "../Library.hpp"
#include <functional>

#include "impl/ClassImpl.hpp"
#include "Property.hpp"
#include "boost/any.hpp"

//*********************************
namespace LibraryModel_uml
{
	class LibraryImpl : virtual public uml::ClassImpl, virtual public Library
	{
		private:    
			LibraryImpl(LibraryImpl const&) = delete;
			LibraryImpl& operator=(LibraryImpl const&) = delete;

		protected:
			friend class LibraryModel_umlFactoryImpl;
			//constructor
			LibraryImpl();


		public:
			//destructor
			virtual ~LibraryImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::shared_ptr<Bag<LibraryModel_uml::Author>> getAuthors() const ;
			
			virtual std::shared_ptr<Bag<LibraryModel_uml::Book>> getBooks() const ;
			
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual boost::any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property,boost::any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
		
		private:
			std::map<std::string,std::function<boost::any()>> m_getterMap;
			std::map<std::string,std::function<void(boost::any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: LIBRARYMODEL_UML_LIBRARY_LIBRARYIMPL_HPP */
