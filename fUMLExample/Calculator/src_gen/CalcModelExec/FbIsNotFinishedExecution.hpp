//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_PRIMECHECKER_FBISNOTFINISHED_EXECUTION_HPP
#define CALCMODEL_PRIMECHECKER_FBISNOTFINISHED_EXECUTION_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>

#include "impl/OpaqueBehaviorExecutionImpl.hpp"


namespace CalcModel 
{
	class FbIsNotFinishedExecution : public fUML::OpaqueBehaviorExecutionImpl 
	{
		public:
		    //constructor
		    FbIsNotFinishedExecution(const FbIsNotFinishedExecution &obj);
		    FbIsNotFinishedExecution();
		    //destructor
		    virtual ~FbIsNotFinishedExecution();
		
		    virtual void doBody(std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>> inputParameters, std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>> outputParameters);
		    virtual ecore::EObject * copy() const;
	};
}
#endif /* end of include guard: CALCMODEL_PRIMECHECKER_FBISNOTFINISHED_EXECUTION_HPP */
