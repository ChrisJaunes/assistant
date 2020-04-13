#include "pch.h"
#include "assistant.h"

Assistant::Assistant(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//更新当前时间
	ui.current_time->setWordWrap(true);
	QTimer* timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(currentTimeUpdate()));
	timer->start(1000);
}


void Assistant::currentTimeUpdate(void)
{
	ui.current_time->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd\nhh:mm:ss\n dddd"));
}