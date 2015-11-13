#ifndef BQTNCONNECT_H
#define BQTNCONNECT_H

#include <QQuickItem>

class BQtNConnect : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(BQtNConnect)

public:
    BQtNConnect(QQuickItem *parent = 0);
    ~BQtNConnect();
};

#endif // BQTNCONNECT_H

