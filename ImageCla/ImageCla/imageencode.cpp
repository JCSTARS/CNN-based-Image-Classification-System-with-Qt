#include "imageencode.h"

imageEncode::imageEncode(QObject *parent) : QObject(parent)
{

}
QVector<QVector<QVector<double>>> imageEncode::imageToRGB(QString filename)
{
    QImage img(filename);
    QSize targetSize(150, 150);
    QImage scaledImage = img.scaled(targetSize, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    img = scaledImage;
    static QVector<QVector<QVector<double>>> A(150,QVector<QVector<double>>(150, QVector<double>(3)) );
    for(int y = 0; y < img.height();y++)
    {
        for(int x = 0; x < img.width(); x++)
        {
            QRgb rgb = img.pixel(x, y);
            int red = qRed(rgb);
            int green = qGreen(rgb);
            int blue = qBlue(rgb);

            A[y][x][0] = red / 255.0;
            A[y][x][1] = green / 255.0;
            A[y][x][2] = blue / 255.0;
        }
    }
    return A;
}
