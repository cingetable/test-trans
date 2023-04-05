#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QTranslator>
class Translator : public QObject
{
    Q_OBJECT
public:
    explicit Translator(QQmlApplicationEngine* engine);
    Q_INVOKABLE void selectLanguage(QString language);
private:
    QQmlApplicationEngine *_engine;
    QTranslator *_translator;
};

#endif // TRANSLATOR_H
