/***************************************************************************
 GPL v2.0 license (see license document distributed with this software)
 Author: crispinalan@gmail.com
 ***************************************************************************/
#ifndef DIALOGTEST_H
#define DIALOGTEST_H


#include <QDebug>
#include <QDialog>

namespace Ui {
  class DialogTest;
}

class DialogTest : public QDialog {
  CS_OBJECT(DialogTest)

public:
  explicit DialogTest(QWidget *parent = nullptr);
  ~DialogTest();

//slots
private:

 	CS_SLOT_1(Private, void accept())
 	CS_SLOT_2(accept)
 	CS_SLOT_1(Private, void reject())
 	CS_SLOT_2(reject)

private:
  Ui::DialogTest *ui;

};

#endif // DIALOGTEST_H
