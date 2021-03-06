//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_MAINACTIVITY_MAINACTIVITYIMPL_HPP
#define CALCMODEL_MAINACTIVITY_MAINACTIVITYIMPL_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>

//*********************************
// generated Includes

//Model includes
#include "../MainActivity.hpp"
#include <functional>

#include "impl/ClassImpl.hpp"
#include "Property.hpp"
#include "boost/any.hpp"

//*********************************
namespace CalcModel
{
	class MainActivityImpl : virtual public uml::ClassImpl, virtual public MainActivity
	{
		private:    
			MainActivityImpl(MainActivityImpl const&) = delete;
			MainActivityImpl& operator=(MainActivityImpl const&) = delete;

		protected:
			friend class CalcModelFactoryImpl;
			//constructor
			MainActivityImpl();

		public:
			//destructor
			virtual ~MainActivityImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass() const;

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
#endif /* end of include guard: CALCMODEL_MAINACTIVITY_MAINACTIVITYIMPL_HPP */
