//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARK_CONTAINERCONTAINERIMPL_HPP
#define SUBSETUNIONBENCHMARK_CONTAINERCONTAINERIMPL_HPP

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
#include "../Container.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace subsetUnionBenchmark 
{
	class ContainerImpl :virtual public ecore::EObjectImpl,
virtual public Container 
	{
		public: 
			ContainerImpl(const ContainerImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ContainerImpl& operator=(ContainerImpl const&) = delete;

		protected:
			friend class SubsetUnionBenchmarkFactoryImpl;
			ContainerImpl();



		public:
			//destructor
			virtual ~ContainerImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getName() const ;
			
			/*!
			 */ 
			virtual void setName (std::string _name); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level1, subsetUnionBenchmark::Element > > getSubset1() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level10, subsetUnionBenchmark::Element > > getSubset10() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level2, subsetUnionBenchmark::Element > > getSubset2() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level3, subsetUnionBenchmark::Element > > getSubset3() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level4, subsetUnionBenchmark::Element > > getSubset4() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level5, subsetUnionBenchmark::Element > > getSubset5() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level6, subsetUnionBenchmark::Element > > getSubset6() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level7, subsetUnionBenchmark::Element > > getSubset7() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level8, subsetUnionBenchmark::Element > > getSubset8() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level9, subsetUnionBenchmark::Element > > getSubset9() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<subsetUnionBenchmark::Element> > getUnion() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: SUBSETUNIONBENCHMARK_CONTAINERCONTAINERIMPL_HPP */
