#ifndef NEWMODEL_PRIMECHECKER_PRINTISPRIME_EXECUTION_HPP
#define NEWMODEL_PRIMECHECKER_PRINTISPRIME_EXECUTION_HPP

//********************************************************************
//*    
//* Warning: This file was generated by Mesapp Generator
//*
//********************************************************************


    #include "impl/OpaqueBehaviorExecutionImpl.hpp"


namespace NewModel {

class PrintIsPrimeExecution : public fUML::OpaqueBehaviorExecutionImpl 
{

public:
    PrintIsPrimeExecution(PrintIsPrimeExecution &obj);
    //constructor
    PrintIsPrimeExecution();
    //destructor
    virtual ~PrintIsPrimeExecution();

    virtual void doBody(QList<fUML::ParameterValue * > *  inputParameters,QList<fUML::ParameterValue * > *  outputParameters);

    virtual ecore::EObject * copy();
};

}

#endif /* end of include guard: NEWMODEL_PRIMECHECKER_PRINTISPRIME_EXECUTION_HPP */

