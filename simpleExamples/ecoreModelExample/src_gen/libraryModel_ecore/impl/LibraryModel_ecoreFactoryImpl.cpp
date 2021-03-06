#include "LibraryModel_ecoreFactoryImpl.hpp"
#include "LibraryModel_ecorePackage.hpp"

#include "EClass.hpp"

using namespace libraryModel_ecore;

//*********************************
// Constructor / Destructor
//*********************************

LibraryModel_ecoreFactoryImpl::LibraryModel_ecoreFactoryImpl()
{
	m_idMap.insert(std::pair<std::string,unsigned int>("Author", LibraryModel_ecorePackage::AUTHOR));
	m_idMap.insert(std::pair<std::string,unsigned int>("Book", LibraryModel_ecorePackage::BOOK));
	m_idMap.insert(std::pair<std::string,unsigned int>("LibraryModel", LibraryModel_ecorePackage::LIBRARYMODEL));
	m_idMap.insert(std::pair<std::string,unsigned int>("NamedElement", LibraryModel_ecorePackage::NAMEDELEMENT));
	m_idMap.insert(std::pair<std::string,unsigned int>("Picture", LibraryModel_ecorePackage::PICTURE));
}

LibraryModel_ecoreFactoryImpl::~LibraryModel_ecoreFactoryImpl()
{
}

LibraryModel_ecoreFactory* LibraryModel_ecoreFactoryImpl::create()
{
	return new LibraryModel_ecoreFactoryImpl();
}

//*********************************
// creators
//*********************************

std::shared_ptr<ecore::EObject> LibraryModel_ecoreFactoryImpl::create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container /*= nullptr*/, const unsigned int referenceID/* = -1*/) const
{
	switch(classID)
	{
		case LibraryModel_ecorePackage::AUTHOR:
		{
				return std::shared_ptr<Author>(this->createAuthor());
			
		}
		case LibraryModel_ecorePackage::BOOK:
		{
			if (nullptr == container)
			{
				return std::shared_ptr<Book>(this->createBook());
			}
			else
			{
				auto castedContainer = std::dynamic_pointer_cast<libraryModel_ecore::LibraryModel>(container);
				assert(castedContainer);
				return std::shared_ptr<Book>(this->createBook_in_Library(castedContainer));
			}
		}
		case LibraryModel_ecorePackage::LIBRARYMODEL:
		{
				return std::shared_ptr<LibraryModel>(this->createLibraryModel());
			
		}
		case LibraryModel_ecorePackage::NAMEDELEMENT:
		{
				return std::shared_ptr<NamedElement>(this->createNamedElement());
			
		}
		case LibraryModel_ecorePackage::PICTURE:
		{
			if (nullptr == container)
			{
				return std::shared_ptr<Picture>(this->createPicture());
			}
			else
			{
				auto castedContainer = std::dynamic_pointer_cast<libraryModel_ecore::Book>(container);
				assert(castedContainer);
				return std::shared_ptr<Picture>(this->createPicture_in_Book(castedContainer));
			}
		}
	default:
	   	    std::cerr << __PRETTY_FUNCTION__ << " ID " << classID <<" not found" << std::endl;
	}
	return nullptr;
}

std::shared_ptr<ecore::EObject> LibraryModel_ecoreFactoryImpl::create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container /* = nullptr*/) const
{
	if(_class->isAbstract())
    {
    	return nullptr;
   	}

	std::string _className = _class->eClass()->getName();
	return create(_className, _container);
}

std::shared_ptr<ecore::EObject> LibraryModel_ecoreFactoryImpl::create(std::string _className) const
{
	auto iter = m_idMap.find(_className);
	if(iter != m_idMap.end())
    {
		//get the ID
        unsigned int id = iter->second;
		return create(id);
    }

    return nullptr;
}

std::shared_ptr<ecore::EObject> LibraryModel_ecoreFactoryImpl::create(std::string _className, std::shared_ptr<EObject> _container, const unsigned int referenceID) const
{
	auto iter = m_idMap.find(_className);
	if(iter != m_idMap.end())
    {
		//get the ID
        unsigned int id = iter->second;
		return create(id, _container, referenceID);
    }

    return nullptr;
}


std::shared_ptr<Author> LibraryModel_ecoreFactoryImpl::createAuthor() const
{
	std::shared_ptr<Author> element(new AuthorImpl());
	return element;
}
std::shared_ptr<Book> LibraryModel_ecoreFactoryImpl::createBook() const
{
	std::shared_ptr<Book> element(new BookImpl());
	return element;
}
std::shared_ptr<Book> LibraryModel_ecoreFactoryImpl::createBook_in_Library(std::weak_ptr<libraryModel_ecore::LibraryModel > par_library) const
{
	std::shared_ptr<Book> element(new BookImpl(par_library));
	if(auto wp = par_library.lock())
	{
    		wp->getBook()->push_back(element);
	}
	return element;
}

std::shared_ptr<LibraryModel> LibraryModel_ecoreFactoryImpl::createLibraryModel() const
{
	std::shared_ptr<LibraryModel> element(new LibraryModelImpl());
	return element;
}
std::shared_ptr<NamedElement> LibraryModel_ecoreFactoryImpl::createNamedElement() const
{
	std::shared_ptr<NamedElement> element(new NamedElementImpl());
	return element;
}
std::shared_ptr<Picture> LibraryModel_ecoreFactoryImpl::createPicture() const
{
	std::shared_ptr<Picture> element(new PictureImpl());
	return element;
}
std::shared_ptr<Picture> LibraryModel_ecoreFactoryImpl::createPicture_in_Book(std::weak_ptr<libraryModel_ecore::Book > par_book) const
{
	std::shared_ptr<Picture> element(new PictureImpl(par_book));
	if(auto wp = par_book.lock())
	{
    		wp->getPictures()->push_back(element);
	}
	return element;
}


std::shared_ptr<LibraryModel_ecorePackage> LibraryModel_ecoreFactoryImpl::getLibraryModel_ecorePackage() const
{
	return LibraryModel_ecorePackage::eInstance();
}
