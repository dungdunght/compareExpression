#ifndef TEST_COMPAREEXPRESSION_H
#define TEST_COMPAREEXPRESSION_H

#include <QObject>
#include <QtTest\qtest.h>
#include "functions.h"

class test_compareExpression : public QObject
{
	Q_OBJECT
private slots:
		void twoExpressionsNotHaveValueAndEquivalent();
		void twoExpressionsNotHaveValueAndNotEquivalent();
		void twoExpressionsHaveValueAndEquivalent();
		void twoExpressionsHaveValueAndNotEquivalent();
		void twoExpressionsHaveOnlyValue();
		void twoExpressionsNotEquivalentAtFirstCombination();
		void twoExpressionsNotEquivalentAtLastCombination();

	
};

#endif // TEST_COMPAREEXPRESSION_H
