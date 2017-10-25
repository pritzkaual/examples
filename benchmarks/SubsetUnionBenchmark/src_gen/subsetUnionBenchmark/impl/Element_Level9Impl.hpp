//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARK_ELEMENT_LEVEL9ELEMENT_LEVEL9IMPL_HPP
#define SUBSETUNIONBENCHMARK_ELEMENT_LEVEL9ELEMENT_LEVEL9IMPL_HPP

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
#include "../Element_Level9.hpp"

#include "impl/ElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace subsetUnionBenchmark 
{
	class Element_Level9Impl :virtual public ElementImpl, virtual public Element_Level9 
	{
		public: 
			Element_Level9Impl(const Element_Level9Impl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			Element_Level9Impl& operator=(Element_Level9Impl const&) = delete;

		protected:
			friend class SubsetUnionBenchmarkFactoryImpl;
			Element_Level9Impl();



		public:
			//destructor
			virtual ~Element_Level9Impl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
#endif /* end of include guard: SUBSETUNIONBENCHMARK_ELEMENT_LEVEL9ELEMENT_LEVEL9IMPL_HPP */
