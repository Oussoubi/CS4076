#ifndef MYZORK_H
#define MYZORK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class myzork; }
QT_END_NAMESPACE

class myzork : public QMainWindow
{
    Q_OBJECT

public:
    myzork(QWidget *parent = nullptr);
    ~myzork();

private:
    Ui::myzork *ui;
};
#endif // MYZORK_H

