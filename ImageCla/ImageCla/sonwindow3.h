#ifndef SONWINDOW3_H
#define SONWINDOW3_H

#include <QWidget>

namespace Ui {
class sonwindow3;
}

class sonwindow3 : public QWidget
{
    Q_OBJECT

public:
    explicit sonwindow3(QWidget *parent = nullptr);
    ~sonwindow3();

private:
    Ui::sonwindow3 *ui;
};

#endif // SONWINDOW3_H
