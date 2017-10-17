//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_UML_METAMODELPACKAGEIMPL_HPP
#define LIBRARYMODEL_UML_METAMODELPACKAGEIMPL_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>
#include <memory>
#include "SubsetUnion.hpp"

#include "LibraryModel_umlPackage.hpp"
#include "impl/PackageImpl.hpp"	

namespace LibraryModel_uml
{
	class LibraryModel_umlPackageImpl : virtual public uml::PackageImpl ,virtual public LibraryModel_umlPackage
	{
			friend class LibraryModel_umlPackage;
			// Constructor
			LibraryModel_umlPackageImpl();

		public:
			// destructor
			virtual ~LibraryModel_umlPackageImpl();

			//getter for the ownedMember
			virtual std::shared_ptr<uml::Association> get_A_libraryModel_uml_Book_LibraryModel_uml_Book_authors();
			virtual std::shared_ptr<uml::Association> get_A_libraryModel_uml_Book_LibraryModel_uml_Book_pictures();
			virtual std::shared_ptr<uml::Association> get_LibraryModel_uml_A_Lib_Author();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_A_Lib_Author_library();
			virtual std::shared_ptr<uml::Association> get_LibraryModel_uml_A_Lib_Boock();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_A_Lib_Boock_library();
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Author();
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Book();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_authors();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_pictures();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_book();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Book_books();
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Library();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Library_authors();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Library_books();
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_NamedModelElement();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_NamedModelElement_name();
			virtual std::shared_ptr<uml::Class> get_LibraryModel_uml_Picture();
			virtual std::shared_ptr<uml::Property> get_LibraryModel_uml_Picture_pageNumber();
			

		private:
			//private variables for ownedMember of the metamodel package
			std::shared_ptr<uml::Association> a_libraryModel_uml_Book_LibraryModel_uml_Book_authors = nullptr;
			std::shared_ptr<uml::Association> a_libraryModel_uml_Book_LibraryModel_uml_Book_pictures = nullptr;
			std::shared_ptr<uml::Association> libraryModel_uml_A_Lib_Author = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_A_Lib_Author_library = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_A_Lib_Author_library_lowerValue_LiteralInteger_LibraryModel_uml_A_Lib_Author_library = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_A_Lib_Author_library_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_A_Lib_Author_library = nullptr;
			std::shared_ptr<uml::Association> libraryModel_uml_A_Lib_Boock = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_A_Lib_Boock_library = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_A_Lib_Boock_library_lowerValue_LiteralInteger_LibraryModel_uml_A_Lib_Boock_library = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_A_Lib_Boock_library_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_A_Lib_Boock_library = nullptr;
			std::shared_ptr<uml::Class> libraryModel_uml_Author = nullptr;
			std::shared_ptr<uml::Class> libraryModel_uml_Book = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_Book_authors = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_Book_authors_lowerValue_LiteralInteger_LibraryModel_uml_Book_authors = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_Book_authors_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_Book_authors = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_Book_pictures = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_Book_pictures_lowerValue_LiteralInteger_LibraryModel_uml_Book_pictures = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_Book_pictures_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_Book_pictures = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_Book_book = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_Book_book_lowerValue_LiteralInteger_LibraryModel_uml_Book_book = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_Book_book_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_Book_book = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_Book_books = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_Book_books_lowerValue_LiteralInteger_LibraryModel_uml_Book_books = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_Book_books_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_Book_books = nullptr;
			std::shared_ptr<uml::Class> libraryModel_uml_Library = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_Library_authors = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_Library_authors_lowerValue_LiteralInteger_LibraryModel_uml_Library_authors = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_Library_authors_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_Library_authors = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_Library_books = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_Library_books_lowerValue_LiteralInteger_LibraryModel_uml_Library_books = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_Library_books_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_Library_books = nullptr;
			std::shared_ptr<uml::Class> libraryModel_uml_NamedModelElement = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_NamedModelElement_name = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_NamedModelElement_name_lowerValue_LiteralInteger_LibraryModel_uml_NamedModelElement_name = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_NamedModelElement_name_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_NamedModelElement_name = nullptr;
			std::shared_ptr<uml::Class> libraryModel_uml_Picture = nullptr;
			std::shared_ptr<uml::Property> libraryModel_uml_Picture_pageNumber = nullptr;
			std::shared_ptr<uml::LiteralInteger> libraryModel_uml_Picture_pageNumber_lowerValue_LiteralInteger_LibraryModel_uml_Picture_pageNumber = nullptr;
			std::shared_ptr<uml::LiteralUnlimitedNatural> libraryModel_uml_Picture_pageNumber_upperValue_LiteralUnlimitedNatural_LibraryModel_uml_Picture_pageNumber = nullptr;
			

			static LibraryModel_umlPackage* create();
			static bool isInited;
			bool isInitialized = false;
			bool isCreated = false;

			void initMetaModel();
			virtual void init();

		public:
 			void initializePackageContents();
			void createPackageContents();
	};
} 
#endif /* end of include guard: LIBRARYMODEL_UML_METAMODELPACKAGEIMPL_HPP */
