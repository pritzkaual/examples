
#include "CoaIsNotFinishedExecution.hpp"

#include "QDebug" 
#include "ParameterValue.hpp"


// PrimeChecker <- Class name
// isNotFinished <- Operation name
// isNotFinished <- Method name
// Boolean is not a pointer
#include "BooleanValue.hpp"


#include "PrimeChecker.hpp"
#include "PrimeCheckerExecution.hpp"
 
using namespace NewModel;

CoaIsNotFinishedExecution::CoaIsNotFinishedExecution()
{
    
}

CoaIsNotFinishedExecution::~CoaIsNotFinishedExecution()
{
    
}


CoaIsNotFinishedExecution::CoaIsNotFinishedExecution(CoaIsNotFinishedExecution &obj)
:OpaqueBehaviorExecutionImpl(obj)
{
    
}

ecore::EObject *  CoaIsNotFinishedExecution::copy()
{
    return new CoaIsNotFinishedExecution(*this);
}


void CoaIsNotFinishedExecution::doBody(QList<fUML::ParameterValue *> *inputParameters, QList<fUML::ParameterValue *> *outputParameters)
{
    qDebug()<<"Printing from "<< this->getBehavior()->getName();
    qDebug()<<"__________________________";

    bool isNotFinished;


	NewModel::PrimeChecker * target = dynamic_cast<NewModel::PrimeCheckerExecution*>(this->getContext())->getUmlValue();
    Q_ASSERT(target!=nullptr);


    //call assigned operation
    
	 isNotFinished =   target->isNotFinished();

	//set out/result parameter
    
    fUML::BooleanValue * isNotFinishedValue = fUML::FUMLFactory::eInstance()->createBooleanValue();
 	isNotFinishedValue->setValue(isNotFinished);
    outputParameters->value(0)->getValues()->append(isNotFinishedValue);
	
	//set InOut parameters

}

