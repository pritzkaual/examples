//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECORE_BOOKBOOKIMPL_HPP
#define LIBRARYMODEL_ECORE_BOOKBOOKIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../Book.hpp"

#include "impl/NamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace libraryModel_ecore 
{
	class BookImpl :virtual public NamedElementImpl, virtual public Book 
	{
		public: 
			BookImpl(const BookImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			BookImpl& operator=(BookImpl const&) = delete;

		protected:
			friend class LibraryModel_ecoreFactoryImpl;
			BookImpl();

			//Additional constructors for the containments back reference
			BookImpl(std::weak_ptr<libraryModel_ecore::LibraryModel > par_library);




		public:
			//destructor
			virtual ~BookImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<libraryModel_ecore::Author> > getAuthors() const ;
			
			/*!
			 */
			virtual std::weak_ptr<libraryModel_ecore::LibraryModel > getLibrary() const ;
			
			/*!
			 */
			virtual void setLibrary(std::shared_ptr<libraryModel_ecore::LibraryModel> _library_library) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<libraryModel_ecore::Picture> > getPictures() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: LIBRARYMODEL_ECORE_BOOKBOOKIMPL_HPP */

