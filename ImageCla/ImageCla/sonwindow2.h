#ifndef SONWINDOW2_H
#define SONWINDOW2_H

#include <QWidget>

namespace Ui {
class sonwindow2;
}

class sonwindow2 : public QWidget
{
    Q_OBJECT

public:
    explicit sonwindow2(QWidget *parent = nullptr);
    ~sonwindow2();

private:
    Ui::sonwindow2 *ui;
};

#endif // SONWINDOW2_H
