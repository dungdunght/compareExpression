#ifndef TEST_CALCEXPESSION_H
#define TEST_CALCEXPESSION_H

#include <QObject>
#include <QtTest\qtest.h>
#include "functions.h"

class test_calcExpession : public QObject
{
	Q_OBJECT

public:
private:
private slots :
	void ExpressionHavePlusMinusAndMulti();
	void ExpressionHaveDivideAsoluteAndExponent();
	void ExpressionHavefindMaxfindMinModuleAndSquareroot();
	void ExpressionHaveValueandConstant();
	void ExpressionHavePrefixIncrementAndDecrement();
	void ExpressionHavePoctfixIncrementAndDecrement();
	void ExpressionHaveAssignment();
	void ExpressionHaveAddAssignAndSubAssign(); 
	void ExpressionHaveMultiAssignAndDivideAssign();
	void ExpressionWithAssignmentHaveConstantAtLValue();


};

#endif // TEST_CALCEXPESSION_H
