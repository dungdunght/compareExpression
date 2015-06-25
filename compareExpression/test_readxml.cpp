//#include "test_readxml.h"

#include <QObject>
#include <QtTest\qtest.h>
#include <QtTest\QtTest>
#include "functions.h"
#include "test_readxml.h"

const QString dir = "TectXML\\";

bool compareTree(exprNode* currentNode1, exprNode* currentNode2);

/*!
* В названии переменных используются нелатинские буквы.
*/
void test_readXML::XMLNotHaveLatinCharacter()
{
	QString filename = dir + "XMLNotHaveLatinCharacter.xml";

	exprNode* expr1=new exprNode;
	exprNode* expr2=new exprNode;
	QMap<QString, DataVariable> listVar;
	QString messageResult = "В формуле 1 имя переменной ф должно быть задано латинскими буквами";
	
	try {
		readXML(filename, expr1, expr2, listVar);
	}
	catch (QString message)
	{

		QCOMPARE(message, messageResult);
		
		return;
	}
	QVERIFY(false);
}
/*!
*Выражение введено не полностью.
*/
void test_readXML::XMLNotFullElement()
{
	QString filename = dir + "XMLNotFullElement.xml";

	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;
	QString messageResult = "В формуле 1, на строке 4-6, в операции multi не хватает операторов";

	try {
		readXML(filename, expr1, expr2, listVar);
	}
	catch (QString message)
	{
	
		QCOMPARE(message, messageResult);

		return;
	}
	QVERIFY(false);
}
/*!
*Переменные введены без диапазона или типа данных.
*/
void test_readXML::XMLValueNotRangeOrNotType()
{
	QString filename = dir + "XMLValueNotRangeOrNotType.xml";

	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;
	QString messageResult = "В формуле 1, переменная a задана без диапазона";

	try {
		readXML(filename, expr1, expr2, listVar);
	}
	catch (QString message)
	{
	
		QCOMPARE(message, messageResult);

		return;
	}
	QVERIFY(false);
}
/*!
*Заданные диапазоны не соответствуют типам данных.
*/
void test_readXML::XMLValueRangeNotSameAsType()
{
	QString filename = dir + "XMLValueRangeNotSameAsType.xml";

	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;
	QString messageResult = "В формуле 1, у переменной a тип данных задан не верно";

	try {
		readXML(filename, expr1, expr2, listVar);
	}
	catch (QString message)
	{
	
		QCOMPARE(message, messageResult);

		return;
	}
	QVERIFY(false);
}
/*!
*Неправильно задан интервал.
*/
void test_readXML::XMLIntervalValueNotLogic()
{
	QString filename = dir + "XMLIntervalValueNotLogic.xml";

	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;
	QString messageResult = "В формуле 1, у переменной a диапазон задан не верно";

	try {
		readXML(filename, expr1, expr2, listVar);
	}
	catch (QString message)
	{

		QCOMPARE(message, messageResult);

		return;
	}
	QVERIFY(false);
}
/*!
*Задается одна и та же переменная с разными типами данных 
или с разными диапазонами в двух выражениях.
*/
void test_readXML::XMLValuesNotSame()
{
	QString filename = dir + "XMLValuesNotSame.xml";

	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;
	QString messageResult = "Переменная a в разных выражениях определяется по-разному";

	try {
		readXML(filename, expr1, expr2, listVar);
	}
	catch (QString message)
	{
	
		QCOMPARE(message, messageResult);

		return;
	}
	QVERIFY(false);
}
/*!
*Присваивания при константном правом операнде (не l-value)
*/
void test_readXML::XMLAssignMentNotTrue()
{
	QString filename = dir + "XMLAssignMentNotTrue.xml";

	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;
	QString messageResult = "В формуле 1, в строке 6, присваивается значение константа";

	try {
		readXML(filename, expr1, expr2, listVar);
	}
	catch (QString message)
	{
		
		QCOMPARE(message, messageResult);

		return;
	}
	QVERIFY(false);
}
/*!
*Выражение  без переменных
*/
void test_readXML::XMLExpressionsNotValuable()
{
	QString filename = dir + "XMLExpressionsNotValuable.xml";

	exprNode* expr1Result = new exprNode;
	exprNode* expr2Result = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;

	expr1Result->type = plus1;
	expr1Result->leftOperand = node2;
	expr1Result->rightOperand = node3;
	expr1Result->fatherOperand = NULL;
	
	node2->type = const1;
	node2->numbervalue = 1;
	node2->leftOperand = NULL;
	node2->rightOperand = NULL;
	node2->fatherOperand = expr1Result;

	node3->type = const1;
	node3->numbervalue = 2;
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1Result;

	expr2Result->type = multi;
	expr2Result->leftOperand = node4;
	expr2Result->rightOperand = node5;
	expr2Result->fatherOperand = NULL;

	node4->type = const1;
	node4->numbervalue = 3;
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = expr2Result;

	node5->type = const1;
	node5->numbervalue = 3;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = expr2Result;
	


	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;
	readXML(filename, expr1, expr2, listVar);
	
		
	QVERIFY(compareTree(expr1,expr1Result));
		QVERIFY(compareTree(expr2, expr2Result));


	
	
}
/*!
*Выражение  c переменными
*/
void test_readXML::XMLExpressionsHaveValuable()
{
	QString filename = dir + "XMLExpressionsHaveValuable.xml";

	exprNode* expr1Result = new exprNode;
	exprNode* expr2Result = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;
	exprNode* node9 = new exprNode;
	exprNode* node10 = new exprNode;
	exprNode* node11 = new exprNode;
	exprNode* node12 = new exprNode;
	exprNode* node13 = new exprNode;
	exprNode* node14 = new exprNode;
	exprNode* node15 = new exprNode;
	exprNode* node16 = new exprNode;
	exprNode* node17 = new exprNode;
	
	
	
	
	expr1Result->type = pow1;
	expr1Result->leftOperand = node2;
	expr1Result->rightOperand = node3;
	expr1Result->fatherOperand = NULL;

	node2->type = plus1;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1Result;

	node3->type = const1;
	node3->numbervalue = 2;
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1Result;

	node4->type = var1;
	node4->namevar ="a"; 
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;

	node5->type = var1;
	node5->namevar = "b";
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;



	expr2Result->type = plus1;
	expr2Result->leftOperand = node6;
	expr2Result->rightOperand = node7;
	expr2Result->fatherOperand = NULL;

	node6->type = plus1;
	node6->leftOperand = node8;
	node6->rightOperand = node9;
	node6->fatherOperand = expr2Result;

	node7->type = pow1;
	node7->leftOperand = node10;
	node7->rightOperand = node11;
	node7->fatherOperand = expr2Result;


	node8->type = pow1;
	node8->leftOperand = node12;
	node8->rightOperand = node13;
	node8->fatherOperand = node6;

	node9->type = multi;
	node9->leftOperand = node14;
	node9->rightOperand = node15;
	node9->fatherOperand = node6;



	node10->type = var1;
	node10->namevar = "b";
	node10->leftOperand = NULL;
	node10->rightOperand = NULL;
	node10->fatherOperand = node7;

	node11->type = const1;
	node11->numbervalue = 2;
	node11->leftOperand = NULL;
	node11->rightOperand = NULL;
	node11->fatherOperand = node7;

	node12->type = var1;
	node12->namevar = "a";
	node12->leftOperand = NULL;
	node12->rightOperand = NULL;
	node12->fatherOperand = node8;

	node13->type = var1;
	node13->namevar = "b";
	node13->leftOperand = NULL;
	node13->rightOperand = NULL;
	node13->fatherOperand = node8;


	node14->type = const1;
	node14->numbervalue = 2;
	node14->leftOperand = NULL;
	node14->rightOperand = NULL;
	node14->fatherOperand = node9;

	node15->type = multi;
	node15->leftOperand = node16;
	node15->rightOperand = node17;
	node15->fatherOperand = node9;

	node16->type = var1;
	node16->namevar = "a";
	node16->leftOperand = NULL;
	node16->rightOperand = NULL;
	node16->fatherOperand = node15;

	node17->type = var1;
	node17->namevar = "b";
	node17->leftOperand = NULL;
	node17->rightOperand = NULL;
	node17->fatherOperand = node15;


	QMap<QString, DataVariable> listVarResult;
	
	DataVariable tempRange;


	tempRange.typevar = "int";
	tempRange.lowEdge = 0; 
	tempRange.highEdge = 100;
	listVarResult.insert("a", tempRange);

	tempRange.typevar = "int";
	tempRange.lowEdge = -1;
	tempRange.highEdge = 200;
	listVarResult.insert("b", tempRange);


	exprNode* expr1 = new exprNode;
	exprNode* expr2 = new exprNode;
	QMap<QString, DataVariable> listVar;

	readXML(filename, expr1, expr2, listVar);


	QVERIFY(compareTree(expr1, expr1Result));
	QVERIFY(compareTree(expr2, expr2Result));
	QVERIFY(compareListValue(listVar, listVarResult));
}


/*!
* 	Сравнить два списки переменных с диапозонами и типами данных
* [param] QMap<QString, DataVariable> listVar - результиющий список переменых
* [param] QMap<QString, DataVariable> listVarResult - ожидаемый список переменных
* [return] true - если два списки одиноковые
*/

bool compareListValue(QMap<QString, DataVariable> listVar, QMap<QString, DataVariable> listVarResult)
{
	QMap<QString, DataVariable>::iterator itempValue;
	for (itempValue = listVar.begin(); itempValue != listVar.end(); ++itempValue)
	{
		if (!listVarResult.contains(itempValue.key())) return false;
		if (QString::compare(itempValue.value().typevar, listVarResult.value(itempValue.key()).typevar) != 0) return false;
		if (itempValue.value().lowEdge != listVarResult.value(itempValue.key()).lowEdge) return false;
		if (itempValue.value().highEdge != listVarResult.value(itempValue.key()).highEdge) return false;
	}
	return true;
}

/*!
* 	Сравнить два разборы дерева
* [param] exprNode* currentNode1- первый разбор дерева
* [param] exprNode* currentNode2 - второй разбор дерева
* [return] true - если два раборы дерева одиноковые
*/
bool compareTree(exprNode* currentNode1,exprNode* currentNode2)
{
	exprNode* stack1[100];
	exprNode* stack2[100];

	
	//сравнить текущие узлы 
	if (QString::compare(currentNode1->namevar, currentNode2->namevar) != 0 || currentNode1->numbervalue != currentNode2->numbervalue || currentNode1->type != currentNode2->type)
		return false;


	//сравнить их сыновией 
	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
			if (currentNode1->leftOperand != NULL&&currentNode2->leftOperand != NULL)
			return compareTree(currentNode1->leftOperand, currentNode2->leftOperand);
		else
			if (currentNode1->rightOperand != NULL&&currentNode2->rightOperand != NULL)
			return compareTree(currentNode2->rightOperand, currentNode2->rightOperand);
	
	}
	return true;
	
}