#include <QTime>
#include <QCoreApplication>

void delay(int second)
{
	QTime dieTime = QTime::currentTime().addSecs(second);
	while (QTime::currentTime() < dieTime)
		QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
