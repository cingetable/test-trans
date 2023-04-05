#include "translator.h"

Translator::Translator(QQmlApplicationEngine *engine)
{
    _engine = engine;
    _translator = new QTranslator(this);
}

void Translator::selectLanguage(QString language)
{
    if (language.toStdString() == "English") {
        _translator->load(":/main_en.qm");
    }
    if (language.toStdString() == "Русский") {
        _translator->load(":/main_ru.qm");
    }
    if (language.toStdString() == "日本語") {
        _translator->load(":/main_jp.qm");
    }
    qApp->installTranslator(_translator);
    _engine->retranslate();
    emit languageChanged();
}

