#include "arduino.h"
#include <QDebug>

Arduino::Arduino(QObject *parent) : QObject(parent), serial(new QSerialPort(this)) {
    connect(serial, &QSerialPort::readyRead, this, &Arduino::readData);
}

Arduino::~Arduino() {
    disconnectArduino();
}

bool Arduino::connectArduino() {
    serial->setPortName("COM9");
    serial->setBaudRate(QSerialPort::Baud9600);
    if (serial->open(QIODevice::ReadOnly)) {
        qDebug() << "✅ Arduino connecté.";
        return true;
    } else {
        qDebug() << "❌ Erreur port série:" << serial->errorString();
        return false;
    }
}

void Arduino::disconnectArduino() {
    if (serial->isOpen()) serial->close();
}

void Arduino::readData() {
    static QString buffer;
    buffer += QString::fromUtf8(serial->readAll());

    if (buffer.endsWith("#")) {
        emit dataReceived(buffer.trimmed());
        buffer.clear();
    }
}
