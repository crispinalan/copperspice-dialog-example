/***************************************************************************
 GPL v2.0 license (see license document distributed with this software)
 Author: crispinalan@gmail.com
 ***************************************************************************/
#include "dialogtest.h"
#include "ui_dialogtest.h"


DialogTest::DialogTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTest)
    {

    ui->setupUi(this);
    setWindowTitle("Dialog Button Box");

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
    }

DialogTest::~DialogTest() {
  delete ui;
}

//accept or reject
void DialogTest::accept() {
   qDebug("OK pressed -accept");
    QDialog::accept();
}

void DialogTest::reject() {
 qDebug("Cancel pressed -reject");
  QDialog::reject();
}


