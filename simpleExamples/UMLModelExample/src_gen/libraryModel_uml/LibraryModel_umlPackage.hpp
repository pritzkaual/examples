//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_UML_METAMODELPACKAGE_HPP
#define LIBRARYMODEL_UML_METAMODELPACKAGE_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>
#include <memory>
#include "SubsetUnion.hpp"
 
#include "Factory.hpp"
#include "Package.hpp"	

namespace LibraryModel_uml 
{
	class Author;
	class Book;
	class Library;
	class NamedModelElement;
	class Picture;
	class LibraryModel_umlPackage;
}

namespace uml 
{
	class PackageImport;
	class Property;
	class LiteralInteger;
	class Generalization;
	class Class;
	class Association;
	class LiteralUnlimitedNatural;
}

namespace LibraryModel_uml 
{
	/*!
	The Metamodel Package for the LibraryModel_uml metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	class LibraryModel_umlPackage : virtual public uml::Package
	{
		//protected default construcotr
		protected:
			LibraryModel_umlPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			//getter for the ownedMember
			virtual std::shared_ptr<uml::Association> get_A_libraryModel_uml_Book_LibraryModel_uml_Book_authors() = 0;
			virtual std::shared_ptr<uml::Association> get_A_libraryModel_uml_Book_LibraryModel_uml_Book_pictures() = 0;
			virtual std::shared_ptr<uml::Association> get_LibraryModel_uml_A_Lib_Author() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_A_Lib_Author_library() = 0;
			virtual std::shared_ptr<uml::Association> get_LibraryModel_uml_A_Lib_Boock() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_A_Lib_Boock_library() = 0;
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Author() = 0;
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Book() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_authors() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_pictures() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_book() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_books() = 0;
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Library() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Library_authors() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Library_books() = 0;
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_NamedModelElement() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_NamedModelElement_name() = 0;
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Picture() = 0;
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Picture_pageNumber() = 0;
			

			//Singleton Instance and Getter
			
			private:
				static std::shared_ptr<LibraryModel_umlPackage> instance;
			public:
				static std::shared_ptr<LibraryModel_umlPackage> eInstance();
	};
}
#endif /* end of include guard: LIBRARYMODEL_UML_METAMODELPACKAGE_HPP */
