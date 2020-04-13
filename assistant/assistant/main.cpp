#include "assistant.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Assistant w;
	w.show();
	return a.exec();
}
