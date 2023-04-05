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

signals:
    void languageChanged();

private:
    QQmlApplicationEngine *_engine;
    QTranslator *_translator;

    std::map<std::string, std::string> languageFilepath {
        {"English", ":/main_en.qm"},
        {"Русский", ":/main_ru.qm"},
        {"日本語", ":/main_jp.qm"},
    };
};

#endif // TRANSLATOR_H
