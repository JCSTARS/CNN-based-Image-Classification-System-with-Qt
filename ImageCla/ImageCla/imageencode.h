#ifndef IMAGEENCODE_H
#define IMAGEENCODE_H

#include <QObject>
#include <QVector>
#include <QImage>
#include <math.h>
#include <QFile>
#include <QString>
#include <QTextStream>

class imageEncode : public QObject
{
    Q_OBJECT
public:
    explicit imageEncode(QObject *parent = nullptr);
    //对图片RGB编码
    //QVector<int> myVector;
    static QVector<QVector<QVector<double>>> imageToRGB(QString filename);
signals:

};

#endif // IMAGEENCODE_H
