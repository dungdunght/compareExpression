#include "test_grouprangedata.h"
#include <QObject>
#include <QtTest\qtest.h>
#include <QtTest\QtTest>
#include "functions.h"
#include "test_readxml.h"



/*!
* Только одна переменная, но её набор интервалов не группируем
*/
void test_groupRangeData::dataOneValueAndNotSequence()
{
	QList< QMap< QString, DataVariable >> listRangeResult;
	QList< QMap< QString, DataVariable >> listRange;

	QMap<QString, DataVariable> tempValue;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue); 
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 7;
	tempRange.highEdge = 7;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);


	groupRangeData(listRange);

	QVERIFY(compareListData(listRange, listRangeResult));
	
	
}

	
/*!
* Только одна переменная, её набор интервалов группируем
*/
void test_groupRangeData::dataOneValueAndSequence()
{
	QList< QMap< QString, DataVariable >> listRangeResult;
	QList< QMap< QString, DataVariable >> listRange;

	QMap<QString, DataVariable> tempValue;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);
	
	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);
	


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 6;
	tempRange.highEdge = 6;
	tempValue.insert("a", tempRange);
	listRange.push_back(tempValue);
	
	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 6;
	tempValue.insert("a", tempRange);
	listRangeResult.push_back(tempValue);

	groupRangeData(listRange);

	QVERIFY(compareListData(listRange, listRangeResult));
}

/*!
* Два переменные или более
*/
void test_groupRangeData::dataTwoOrMoreValue()
{
	QList< QMap< QString, DataVariable >> listRangeResult;
	QList< QMap< QString, DataVariable >> listRange;

	QMap<QString, DataVariable> tempValue;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 10;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 10;
	tempValue.insert("c", tempRange);
	listRangeResult.push_back(tempValue);

	groupRangeData(listRange);
	


	QVERIFY(compareListData(listRange, listRangeResult));
}

/*!
* Более двух переменные и много наборов интервалов
*/
void test_groupRangeData::moreDataAndMoreValue()
{

	QList< QMap< QString, DataVariable >> listRangeResult;
	QList< QMap< QString, DataVariable >> listRange;

	QMap<QString, DataVariable> tempValue;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 10;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 11;
	tempRange.highEdge = 11;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 12;
	tempRange.highEdge = 12;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 10;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 11;
	tempRange.highEdge = 11;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 12;
	tempRange.highEdge = 12;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 11;
	tempValue.insert("c", tempRange);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 12;
	tempRange.highEdge = 12;
	tempValue.insert("c", tempRange);
	listRangeResult.push_back(tempValue);


	

	groupRangeData(listRange);
	


	QVERIFY(compareListData(listRange, listRangeResult));
}

/*!
* Более двух переменные и много наборов интервалов и её набор интервалов все группируем
*/
void test_groupRangeData::moreDataAndMoreValueAndAllGrouping()
{
	QList< QMap< QString, DataVariable >> listRangeResult;
	QList< QMap< QString, DataVariable >> listRange;

	QMap<QString, DataVariable> tempValue;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);


	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 4;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 5;
	tempValue.insert("c", tempRange);
	listRangeResult.push_back(tempValue);

	

	groupRangeData(listRange);

	



	QVERIFY(compareListData(listRange, listRangeResult));
}

/*!
* Более двух переменные и много наборов интервалов и её набор интервалов не группируем
*/
void test_groupRangeData::moreDataAndMoreValueAndNotGrouping()
{
	QList< QMap< QString, DataVariable >> listRangeResult;
	QList< QMap< QString, DataVariable >> listRange;

	QMap<QString, DataVariable> tempValue;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 10;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 15;
	tempRange.highEdge = 15;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 10;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 14;
	tempRange.highEdge = 14;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 20;
	tempRange.highEdge = 20;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "long long";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 12;
	tempRange.highEdge = 12;
	tempValue.insert("c", tempRange);
	listRange.push_back(tempValue);
	listRangeResult.push_back(tempValue);

	

	groupRangeData(listRange);
	QVERIFY(compareListData(listRange, listRangeResult));
}


/*!
* 	Сравнить  два списки наборов переменных, на которых выражения принимают различные значения.
* [param] QList< QMap< QString, DataVariable >> listRange -результирующий список наборов переменных, на которых выражения принимают различные значения.
* [param] QList< QMap< QString, DataVariable >> listRangeResult - ожидаеммый список наборов переменных, на которых выражения принимают различные значения.
* [return] true - если два списки одиноковые
*/
bool compareListData(QList< QMap< QString, DataVariable >> listRange, QList< QMap< QString, DataVariable >> listRangeResult)
{
	QList<QMap< QString, DataVariable >>::iterator iListRange;
	QList<QMap< QString, DataVariable >>::iterator iListRangeResult;
	
	QMap< QString, DataVariable> tempListRange;
	QMap< QString, DataVariable> tempListRangeResult;

	QString nameValue;

	if (listRange.size() != listRangeResult.size()) return false;
	iListRange = listRange.begin();
	iListRangeResult = listRangeResult.begin();

	while (iListRange != listRange.end())
	{

		tempListRange = (*iListRange);
		tempListRangeResult = (*iListRangeResult);

		if (tempListRange.size() != tempListRangeResult.size()) return false;
		
		if (!compareListValue(tempListRange, tempListRangeResult)) return false; 

		iListRange++;
		iListRangeResult++;
	}

	return true;
}

