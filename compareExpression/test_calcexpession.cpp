#include "test_calcexpession.h"

/*!
* Выражение с операторами сложения, вычитания и умножения
*/
void test_calcExpession::ExpressionHavePlusMinusAndMulti()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;


	expr1->type = plus1;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = multi;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = minus;
	node3->leftOperand = node6;
	node3->rightOperand = node7;
	node3->fatherOperand = expr1;

	node4->type = const1;
	node4->numbervalue = 10;
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;

	node5->type = const1;
	node5->numbervalue = 20;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	node6->type = const1;
	node6->numbervalue = 4;
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = node3;

	node7->type = const1;
	node7->numbervalue = 15;
	node7->leftOperand = NULL;
	node7->rightOperand = NULL;
	node7->fatherOperand = node3;

	QMap<QString, long long> variantValue;

	QCOMPARE(calcExpression(expr1,variantValue),189);
	
}

/*!
* Выражение с операторами деления, возведения в степень и вычисления модуля
*/
void test_calcExpession::ExpressionHaveDivideAsoluteAndExponent()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;


	expr1->type = divide;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = pow1;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = abs1;
	node3->leftOperand = node6;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = const1;
	node4->numbervalue = 4;
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;

	node5->type = const1;
	node5->numbervalue = 12;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	node6->type = const1;
	node6->numbervalue = -13;
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = node3;



	QMap<QString, long long> variantValue;

	QCOMPARE(calcExpression(expr1, variantValue), 1290555);
}

/*!
* Выражение с операторами найти наибольшее значение среди двух значений, 
  найти наименьшее значение среди двух значений, извлечения квадратного корня, остаток от деления
*/
void test_calcExpession::ExpressionHavefindMaxfindMinModuleAndSquareroot()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = fmax1;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = mod;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = const1;
	node3->numbervalue = 2;
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = fmin1;
	node4->leftOperand = node6;
	node4->rightOperand = node7;
	node4->fatherOperand = node2;

	node5->type = sqrt1;
	node5->leftOperand = node8;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	node6->type = const1;
	node6->numbervalue = 15;
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = node4;

	node7->type = const1;
	node7->numbervalue = 13;
	node7->leftOperand = NULL;
	node7->rightOperand = NULL;
	node7->fatherOperand = node4;

	node8->type = const1;
	node8->numbervalue = 4;
	node8->leftOperand = NULL;
	node8->rightOperand = NULL;
	node8->fatherOperand = node5;





	QMap<QString, long long> variantValue;

	QCOMPARE(calcExpression(expr1, variantValue), 2);
}

/*!
* Выражение с переменными и константными числами
*/
void test_calcExpession::ExpressionHaveValueandConstant()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = plus1;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = var1;
	node3->namevar = "b";
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "a";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;

	node5->type = const1;
	node5->numbervalue = 2;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	QMap<QString, long long> variantValue;
	variantValue.insert("a", 4);
	variantValue.insert("b", 10);

	QCOMPARE(calcExpression(expr1, variantValue), 60);


}

/*!
* Выражение с префиксным инкрементом и префиксным декрементом
*/
void test_calcExpession::ExpressionHavePrefixIncrementAndDecrement()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = prefixInc;
	node2->leftOperand = node4;
	node2->rightOperand = NULL;
	node2->fatherOperand = expr1;

	node3->type = prefixDec;
	node3->leftOperand = node5;
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
	node5->fatherOperand = node3;

	QMap<QString, long long> variantValue;
	variantValue.insert("a", 4);
	variantValue.insert("b", 10);

	QCOMPARE(calcExpression(expr1, variantValue), 45);
}

/*!
* Выражение с постфиксным инкрементом и постфиксным декрементом
*/
void test_calcExpession::ExpressionHavePoctfixIncrementAndDecrement()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = postfixInc; 
	node2->leftOperand = node4;
	node2->rightOperand = NULL;
	node2->fatherOperand = expr1;

	node3->type = postfixInc;
	node3->leftOperand = node5;
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
	node5->fatherOperand = node3;

	QMap<QString, long long> variantValue;
	variantValue.insert("a", 4);
	variantValue.insert("b", 10);

	QCOMPARE(calcExpression(expr1, variantValue), 40);
}

/*!
* Выражение содержат присваивание
*/
void test_calcExpession::ExpressionHaveAssignment()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = assignment;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = var1;
	node3->namevar = "b";
	node3->leftOperand = NULL;
	node3->rightOperand = NULL;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "a";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;

	node5->type = const1;
	node5->numbervalue=2;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	QMap<QString, long long> variantValue;
	variantValue.insert("a", 4);
	variantValue.insert("b", 10);

	QCOMPARE(calcExpression(expr1, variantValue), 20);
}

/*!
* Выражение cодержат присваивание со сложением и присваивание с вычитанием
*/
void test_calcExpession::ExpressionHaveAddAssignAndSubAssign()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = addAssign;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = subAssign;
	node3->leftOperand = node6;
	node3->rightOperand = node7;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "a";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;

	node5->type = const1;
	node5->numbervalue = 2;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	node6->type = var1;
	node6->namevar = "b";
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = node3;

	node7->type = const1;
	node7->numbervalue = 3;
	node7->leftOperand = NULL;
	node7->rightOperand = NULL;
	node7->fatherOperand = node3;

	QMap<QString, long long> variantValue;
	variantValue.insert("a", 4);
	variantValue.insert("b", 10);

	QCOMPARE(calcExpression(expr1, variantValue), 42);
}

/*!
* Выражение содержат присваивание с умножением и присваивание с вычитанием
*/
void test_calcExpession::ExpressionHaveMultiAssignAndDivideAssign()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = multi;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = multiAssign;
	node2->leftOperand = node4;
	node2->rightOperand = node5;
	node2->fatherOperand = expr1;

	node3->type = divideAssign;
	node3->leftOperand = node6;
	node3->rightOperand = node7;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "a";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node2;

	node5->type = const1;
	node5->numbervalue = 2;
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node2;

	node6->type = var1;
	node6->namevar = "b";
	node6->leftOperand = NULL;
	node6->rightOperand = NULL;
	node6->fatherOperand = node3;

	node7->type = const1;
	node7->numbervalue = 3;
	node7->leftOperand = NULL;
	node7->rightOperand = NULL;
	node7->fatherOperand = node3;

	QMap<QString, long long> variantValue;
	variantValue.insert("a", 4);
	variantValue.insert("b", 12);

	QCOMPARE(calcExpression(expr1, variantValue), 32);
}

/*!
* Выражение содержат присваивание, у которого содержат констант на левом операнде.
*/
void test_calcExpession::ExpressionWithAssignmentHaveConstantAtLValue()
{
	exprNode* expr1 = new exprNode;
	exprNode* node2 = new exprNode;
	exprNode* node3 = new exprNode;
	exprNode* node4 = new exprNode;
	exprNode* node5 = new exprNode;
	exprNode* node6 = new exprNode;
	exprNode* node7 = new exprNode;
	exprNode* node8 = new exprNode;


	expr1->type = divide;
	expr1->leftOperand = node2;
	expr1->rightOperand = node3;
	expr1->fatherOperand = NULL;

	node2->type = const1;
	expr1->numbervalue = 10;
	node2->leftOperand = NULL;
	node2->rightOperand = NULL;
	node2->fatherOperand = expr1;

	node3->type = plus1;
	node3->leftOperand = node4;
	node3->rightOperand = node5;
	node3->fatherOperand = expr1;

	node4->type = var1;
	node4->namevar = "a";
	node4->leftOperand = NULL;
	node4->rightOperand = NULL;
	node4->fatherOperand = node3;


	node5->type = var1;
	node5->namevar = "b";
	node5->leftOperand = NULL;
	node5->rightOperand = NULL;
	node5->fatherOperand = node3;


	QMap<QString, long long> variantValue;
	variantValue.insert("a", 4);
	variantValue.insert("b", -4);


	QString messageResult = "При переменных a=4, b=-4, в процессе вычисления произошло деление на ноль";

	try{
		calcExpression(expr1, variantValue);
	}
	catch (QString message)
	{
		QCOMPARE(message, messageResult);

		return;
	}
	QVERIFY(false);
}