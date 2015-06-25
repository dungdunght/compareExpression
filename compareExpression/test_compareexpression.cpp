#include "test_compareexpression.h"
#include "test_grouprangedata.h"

/*!
* Две выражения без переменных и эквивалентно
*/
void test_compareExpression::twoExpressionsNotHaveValueAndEquivalent()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;

	expr1->type = plus1;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = plus1;
	node2->leftOperand =node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = const1;
	node3->numbervalue = 7;
	node3->leftOperand = node4;
	node3->rightOperand = node5;
	node3->fatherOperand = expr1;

	node4->type = const1;
	node4->numbervalue = 10;
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;


	node5->type = const1;
	node5->numbervalue = 6;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	exprNode* expr2 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;
	exprNode* node9 = new exprNode;
	
	expr2->type = plus1;
	expr2->leftOperand = node6;
	expr2->rightOperand = node7;
	expr2->fatherOperand = NULL;

	node6->type = const1;
	node6->numbervalue = 10;
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = expr2;

	node7->type = const1;
	node7->numbervalue = 13;
	node7->leftOperand = NULL;
	node7->rightOperand = NULL;
	node7->fatherOperand = expr2;

	QMap<QString, DataVariable> listVar;
	QList< QMap< QString, DataVariable >> listRange;

	QCOMPARE(compareExpression(listVar, expr1, expr2, listRange), true);
	QCOMPARE(listRange.size(), 0);
}

/*!
* Две выражения без переменных и неэквивалентно
*/
void test_compareExpression::twoExpressionsNotHaveValueAndNotEquivalent()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;

	expr1->type = plus1;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = plus1;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = const1;
	node3->numbervalue = 7;
	node3->leftOperand = node4;
	node3->rightOperand = node5;
	node3->fatherOperand = expr1;

	node4->type = const1;
	node4->numbervalue = 10;
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;


	node5->type = const1;
	node5->numbervalue = 6;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	exprNode* expr2 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;
	exprNode* node9 = new exprNode;

	expr2->type = plus1;
	expr2->leftOperand = node6;
	expr2->rightOperand = node7;
	expr2->fatherOperand = NULL;

	node6->type = const1;
	node6->numbervalue = 10;
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = expr2;

	node7->type = const1;
	node7->numbervalue = 11;
	node7->leftOperand = NULL;
	node7->rightOperand = NULL;
	node7->fatherOperand = expr2;

	QMap<QString, DataVariable> listVar;
	QList< QMap< QString, DataVariable >> listRange;

	QCOMPARE(compareExpression(listVar, expr1, expr2, listRange), false);
	QCOMPARE(listRange.size(), 0);
}

/*!
* Две выражения с переменными и эквивалентно
*/
void test_compareExpression::twoExpressionsHaveValueAndEquivalent()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;

	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = plus1;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = var1;
	node3->namevar = "c";
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "a";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;


	node5->type = var1;
	node5->namevar = "b";
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	exprNode* expr2 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;
	exprNode* node9 = new exprNode;
	exprNode* node10 = new exprNode;
	exprNode* node11 = new exprNode;

	expr2->type = plus1;
	expr2->leftOperand = node6;
	expr2->rightOperand = node7;
	expr2->fatherOperand = NULL;

	node6->type = multi;
	node6->leftOperand = node8;
	node6->rightOperand = node9;
	node6->fatherOperand = expr2;

	node7->type = multi;
	node7->leftOperand = node10;
	node7->rightOperand = node11;
	node7->fatherOperand = expr2;

	node8->type = var1;
	node8->namevar = "a";
	node8->leftOperand = NULL;
	node8->rightOperand = NULL;
	node8->fatherOperand = node6;


	node9->type = var1;
	node9->namevar = "c";
	node9->leftOperand = NULL;
	node9->rightOperand = NULL;
	node9->fatherOperand = node6;

	node10->type = var1;
	node10->namevar = "b";
	node10->leftOperand = NULL;
	node10->rightOperand = NULL;
	node10->fatherOperand = node7;


	node11->type = var1;
	node11->namevar = "c";
	node11->leftOperand = NULL;
	node11->rightOperand = NULL;
	node11->fatherOperand = node7;


	QMap<QString, DataVariable> listVar;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 10;
	tempRange.highEdge = 12;
	listVar.insert("a", tempRange);

	tempRange.typevar = "int";
	tempRange.lowEdge = 30;
	tempRange.highEdge = 50;
	listVar.insert("b", tempRange);

	
	tempRange.typevar = "int";
	tempRange.lowEdge = 40;
	tempRange.highEdge = 42;
	listVar.insert("c", tempRange);

	QList< QMap< QString, DataVariable >> listRange;

	QCOMPARE(compareExpression(listVar, expr1, expr2, listRange), true);
	QCOMPARE(listRange.size(), 0);
}

/*!
* Две выражение с переменным и неэквивалентности 
*/
void test_compareExpression::twoExpressionsHaveValueAndNotEquivalent()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;

	expr1->type = pow1;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = plus1;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = const1;
	node3->numbervalue = 2;
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "a";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;


	node5->type = var1;
	node5->namevar = "b";
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;


	exprNode* expr2 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;
	exprNode* node9 = new exprNode;
	exprNode* node10 = new exprNode;
	exprNode* node11 = new exprNode;

	expr2->type = multi;
	expr2->leftOperand = node6;
	expr2->rightOperand = node7;
	expr2->fatherOperand = NULL;

	node6->type = const1;
	node6->numbervalue = 2;
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = expr2;

	node7->type = multi;
	node7->leftOperand = node8;
	node7->rightOperand = node9;
	node7->fatherOperand = expr2;

	node8->type = var1;
	node8->namevar = "a";
	node8->leftOperand = NULL;
	node8->rightOperand = NULL;
	node8->fatherOperand = node7;


	node9->type = var1;
	node9->namevar = "b";
	node9->leftOperand = NULL;
	node9->rightOperand = NULL;
	node9->fatherOperand = node7;

	QMap<QString, DataVariable> listVar;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 2;
	listVar.insert("a", tempRange);

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 3;
	listVar.insert("b", tempRange);

	QList< QMap< QString, DataVariable >> listRange;
	QList< QMap< QString, DataVariable >> listRangeResult;

	QMap< QString, DataVariable >tempValue;
	
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);
	
	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);

	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 1;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);

	tempValue.clear();
	tempRange.typevar = "int";
	tempRange.lowEdge = 2;
	tempRange.highEdge = 2;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 3;
	tempRange.highEdge = 3;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);


	QCOMPARE(compareExpression(listVar, expr1, expr2, listRange), false);
	QVERIFY(compareListData(listRange, listRangeResult));
	

}

/*!
* Две выражение содержат только переменные
*/
void test_compareExpression::twoExpressionsHaveOnlyValue()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;

	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = assignment;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = var1;
	node3->namevar = "c";
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "b";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;


	node5->type = var1;
	node5->namevar = "a";
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	exprNode* expr2 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;

	expr2->type = multi;
	expr2->leftOperand = node6;
	expr2->rightOperand = node7;
	expr2->fatherOperand = NULL;

	node6->type = var1;
	node6->namevar = "a";
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = expr2;

	node7->type = var1;
	node7->namevar = "c";
	node7->leftOperand = NULL;
	node7->rightOperand = NULL;
	node7->fatherOperand = expr2;

	QMap<QString, DataVariable> listVar;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 100;
	tempRange.highEdge = 120;
	listVar.insert("a", tempRange);

	tempRange.typevar = "int";
	tempRange.lowEdge = 11;
	tempRange.highEdge = 20;
	listVar.insert("b", tempRange);

	tempRange.typevar = "int";
	tempRange.lowEdge = 20;
	tempRange.highEdge = 30;
	listVar.insert("c", tempRange);

	QList< QMap< QString, DataVariable >> listRange;
	QCOMPARE(compareExpression(listVar, expr1, expr2, listRange), true);
	QCOMPARE(listRange.size(), 0);

}

/*!
* Выражения не совпадают на первой комбинации
*/
void test_compareExpression::twoExpressionsNotEquivalentAtFirstCombination()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;

	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = var1;
	node2->namevar = "a";
	node2->leftOperand = NULL;
	node2->rightOperand = NULL;
	node2->fatherOperand = expr1;

	node3->type = abs1;
	node3->leftOperand = node4;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "b";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node3;


	exprNode* expr2 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;

	expr2->type = multi;
	expr2->leftOperand = node5;
	expr2->rightOperand = node6;
	expr2->fatherOperand = NULL;

	node5->type = var1;
	node5->namevar = "a";
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = expr2;

	node6->type = var1;
	node6->namevar = "b";
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = expr2;

	QMap<QString, DataVariable> listVar;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	listVar.insert("a", tempRange);

	tempRange.typevar = "int";
	tempRange.lowEdge = -1;
	tempRange.highEdge = 3;
	listVar.insert("b", tempRange);

	QMap< QString, DataVariable >tempValue;
	QList< QMap< QString, DataVariable >> listRange;
	QList< QMap< QString, DataVariable >> listRangeResult;

	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = -1;
	tempRange.highEdge = -1;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);



	QCOMPARE(compareExpression(listVar, expr1, expr2, listRange), false);
	QVERIFY(compareListData(listRange, listRangeResult));


}

/*!
* Выражения не совпадают на последней комбинации
*/
void test_compareExpression::twoExpressionsNotEquivalentAtLastCombination()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	

	expr1->type = fmax1;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = var1;
	node2->namevar = "a";
	node2->leftOperand = NULL;
	node2->rightOperand = NULL;
	node2->fatherOperand = expr1;

	node3->type = var1;
	node3->namevar = "b";
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	exprNode* expr2 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;

	expr2->type = plus1;
	expr2->leftOperand = node4;
	expr2->rightOperand = node5;
	expr2->fatherOperand = NULL;

	node4->type = const1;
	node4->numbervalue = 2;
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = expr2;

	node5->type = const1;
	node5->numbervalue = 2;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = expr2;

	QMap<QString, DataVariable> listVar;
	DataVariable tempRange;

	tempRange.typevar = "int";
	tempRange.lowEdge = 1;
	tempRange.highEdge = 5;
	listVar.insert("a", tempRange);

	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	listVar.insert("b", tempRange);

	QMap< QString, DataVariable >tempValue;
	QList< QMap< QString, DataVariable >> listRange;
	QList< QMap< QString, DataVariable >> listRangeResult;

	tempRange.typevar = "int";
	tempRange.lowEdge = 5;
	tempRange.highEdge = 5;
	tempValue.insert("a", tempRange);
	tempRange.typevar = "int";
	tempRange.lowEdge = 4;
	tempRange.highEdge = 4;
	tempValue.insert("b", tempRange);
	listRangeResult.push_back(tempValue);

	QCOMPARE(compareExpression(listVar, expr1, expr2, listRange), false);
	QVERIFY(compareListData(listRange, listRangeResult));

}
