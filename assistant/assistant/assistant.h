#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_assistant.h"

class Assistant : public QMainWindow
{
	Q_OBJECT

public:
	Assistant(QWidget *parent = Q_NULLPTR);

public slots:
	void currentTimeUpdate(void);

private:
	Ui::AssistantClass ui;

};
