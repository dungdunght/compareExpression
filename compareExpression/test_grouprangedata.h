#ifndef TEST_GROUPRANGEDATA_H
#define TEST_GROUPRANGEDATA_H

#include <QObject>
#include <QtTest\qtest.h>

#include "functions.h"
class test_groupRangeData : public QObject
{
	Q_OBJECT

public:
private: 
private slots :
	void dataOneValueAndNotSequence();
	void dataOneValueAndSequence();
	void dataTwoOrMoreValue(); 
	void moreDataAndMoreValue();
	void moreDataAndMoreValueAndAllGrouping();
	void moreDataAndMoreValueAndNotGrouping();


};

bool compareListData(QList< QMap< QString, DataVariable >> listRange, QList< QMap< QString, DataVariable >> listRangeResult);

#endif // TEST_GROUPRANGEDATA_H
