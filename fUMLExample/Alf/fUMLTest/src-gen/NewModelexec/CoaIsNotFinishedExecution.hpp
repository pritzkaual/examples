#ifndef NEWMODEL_CHECKIFPRIMECOAISNOTFINISHED_EXECUTION_HPP
#define NEWMODEL_CHECKIFPRIMECOAISNOTFINISHED_EXECUTION_HPP

//********************************************************************
//*    
//* Warning: This file was generated by Mesapp Generator
//*
//********************************************************************


#include "impl/OpaqueBehaviorExecutionImpl.hpp"

namespace NewModel {

class CoaIsNotFinishedExecution : public fUML::OpaqueBehaviorExecutionImpl 
{

public:
    CoaIsNotFinishedExecution(CoaIsNotFinishedExecution &obj);
    //constructor
    CoaIsNotFinishedExecution();
    //destructor
    virtual ~CoaIsNotFinishedExecution();

    virtual void doBody(QList<fUML::ParameterValue * > *  inputParameters,QList<fUML::ParameterValue * > *  outputParameters);

    virtual ecore::EObject * copy();
};

}

#endif /* end of include guard: NEWMODEL_CHECKIFPRIMECOAISNOTFINISHED_EXECUTION_HPP */

