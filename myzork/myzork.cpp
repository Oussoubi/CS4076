#include "myzork.h"
#include "ui_myzork.h"

myzork::myzork(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myzork)
{
    ui->setupUi(this);
}

myzork::~myzork()
{
    delete ui;
}

