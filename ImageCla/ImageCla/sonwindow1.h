#ifndef SONWINDOW1_H
#define SONWINDOW1_H

#include <QWidget>

namespace Ui {
class sonwindow1;
}

class sonwindow1 : public QWidget
{
    Q_OBJECT

public:
    explicit sonwindow1(QWidget *parent = nullptr);
    ~sonwindow1();

private:
    Ui::sonwindow1 *ui;
};

#endif // SONWINDOW1_H
