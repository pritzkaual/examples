#ifndef NEWMODEL_CHECKIFPRIMECOAISODD_EXECUTION_HPP
#define NEWMODEL_CHECKIFPRIMECOAISODD_EXECUTION_HPP

//********************************************************************
//*    
//* Warning: This file was generated by Mesapp Generator
//*
//********************************************************************


#include "impl/OpaqueBehaviorExecutionImpl.hpp"

namespace NewModel {

class CoaIsOddExecution : public fUML::OpaqueBehaviorExecutionImpl 
{

public:
    CoaIsOddExecution(CoaIsOddExecution &obj);
    //constructor
    CoaIsOddExecution();
    //destructor
    virtual ~CoaIsOddExecution();

    virtual void doBody(QList<fUML::ParameterValue * > *  inputParameters,QList<fUML::ParameterValue * > *  outputParameters);

    virtual ecore::EObject * copy();
};

}

#endif /* end of include guard: NEWMODEL_CHECKIFPRIMECOAISODD_EXECUTION_HPP */

