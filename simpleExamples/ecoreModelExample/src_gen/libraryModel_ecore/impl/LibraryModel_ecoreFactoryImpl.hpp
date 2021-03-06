//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECOREFACTORYIMPL_HPP
#define LIBRARYMODEL_ECOREFACTORYIMPL_HPP

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

#include "impl/EFactoryImpl.hpp"

#include "AuthorImpl.hpp"
#include "BookImpl.hpp"
#include "LibraryModelImpl.hpp"
#include "NamedElementImpl.hpp"
#include "PictureImpl.hpp"

#include "LibraryModel_ecoreFactory.hpp"

namespace libraryModel_ecore 
{
	class LibraryModel_ecoreFactoryImpl : virtual public ecore::EFactoryImpl , virtual public LibraryModel_ecoreFactory 
	{
		private:    
			LibraryModel_ecoreFactoryImpl(LibraryModel_ecoreFactoryImpl const&) = delete;
			LibraryModel_ecoreFactoryImpl& operator=(LibraryModel_ecoreFactoryImpl const&) = delete;

		protected:
			friend class LibraryModel_ecoreFactory;
			// Constructor
			LibraryModel_ecoreFactoryImpl();

		public:
			virtual ~LibraryModel_ecoreFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container = nullptr) const;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const;

			//Creator functions
			virtual std::shared_ptr<Author> createAuthor() const ;
			
			virtual std::shared_ptr<Book> createBook() const ;
			//Add containing object
			virtual std::shared_ptr<Book> createBook_in_Library(std::weak_ptr<libraryModel_ecore::LibraryModel > par_library) const ;
			
			virtual std::shared_ptr<LibraryModel> createLibraryModel() const ;
			
			virtual std::shared_ptr<NamedElement> createNamedElement() const ;
			
			virtual std::shared_ptr<Picture> createPicture() const ;
			//Add containing object
			virtual std::shared_ptr<Picture> createPicture_in_Book(std::weak_ptr<libraryModel_ecore::Book > par_book) const ;
			
			

			//Package
			virtual std::shared_ptr<LibraryModel_ecorePackage> getLibraryModel_ecorePackage() const;

		private:
			static LibraryModel_ecoreFactory* create();
            std::map<std::string,unsigned int> m_idMap;
			virtual void init() {}

	};
}
#endif /* end of include guard: LIBRARYMODEL_ECOREFACTORYIMPL_HPP */

