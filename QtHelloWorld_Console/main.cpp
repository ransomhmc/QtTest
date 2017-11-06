#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	qDebug() << "Hello Qt!";
	QTimer::singleShot(10,&a,SLOT(quit()));
	return a.exec();
}
