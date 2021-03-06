#ifndef COLORLISTEDITOR_H
#define COLORLISTEDITOR_H

#include <QComboBox>

QT_BEGIN_NAMESPACE
class QColor;
class QWidget;
QT_END_NAMESPACE

class ColorListEditor : public QComboBox
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor USER true)

public:
    ColorListEditor(QWidget *parent = nullptr);

public:
    QColor color() const;
    void setColor(QColor c);

private:
    void populateList();
};

#endif // COLORLISTEDITOR_H
