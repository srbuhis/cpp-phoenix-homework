#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDateTime>
#include <QDebug>
#include <QLabel>
#include <QTimer>
#include <QTime>
#include <QPushButton>
#include <QString>
#include <QDateTime>
#include <QVBoxLayout>
#include <QFontDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void QUpdate();
    void updateTime();
    void changeTimeFormat();
private:
    Ui::MainWindow *ui;
    QTimer *DateTime;
    QString DateTimeFormat;
    QLabel *label;
    QLabel *timeLabel;
    QPushButton *button;

};
#endif // MAINWINDOW_H
