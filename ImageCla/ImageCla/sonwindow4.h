#ifndef SONWINDOW4_H
#define SONWINDOW4_H

#include <QWidget>

namespace Ui {
class sonwindow4;
}

class sonwindow4 : public QWidget
{
    Q_OBJECT

public:
    explicit sonwindow4(QWidget *parent = nullptr);
    ~sonwindow4();

private:
    Ui::sonwindow4 *ui;
};

#endif // SONWINDOW4_H
