#include "classExpression.h"


/*!
* Конструктор
*/
exprNode::exprNode()
{

	namevar='\0';
	numbervalue = 0;
	leftOperand = NULL;
	rightOperand = NULL;
	fatherOperand = NULL;

}
/*!
* Сравнить два значение данных DataVariable
* \param[in] tempValue1 - первое значение данных DataVariable
* \param[in] tempValue2 - второе значение данных DataVariable
* \return true - две значения одиноковые
* \return false - две значения не одиноковые
*/
bool operator ==(const DataVariable tempValue1, const DataVariable tempValue2)
{
	return (tempValue1.typevar == tempValue2.typevar&&tempValue1.lowEdge == tempValue2.lowEdge&&tempValue1.highEdge == tempValue2.highEdge);
}





