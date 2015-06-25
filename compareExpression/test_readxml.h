#ifndef TEST_READXML_H
#define TEST_READXML_H
#include <QObject>
#include <QtTest\qtest.h>

#include "functions.h"
class test_readXML : public QObject
{
	Q_OBJECT

		private slots :
	void XMLNotHaveLatinCharacter();
	void XMLNotFullElement();
	void XMLValueNotRangeOrNotType();
	void XMLValueRangeNotSameAsType();
	void XMLIntervalValueNotLogic();
	void XMLValuesNotSame();
	void XMLAssignMentNotTrue();
	void XMLExpressionsNotValuable();
	void XMLExpressionsHaveValuable();

};


bool compareListValue(QMap<QString, DataVariable> listVar, QMap<QString, DataVariable> listVarResult);
#endif // TEST_READXML_H
