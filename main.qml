import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import "."
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Main window")

    Row {
        anchors.fill: parent

        Rectangle {
            id: leftRectId
            height: parent.height
            width: 500
            color: "beige"

            Text {
                padding: 10
                anchors.fill: parent
                text: qsTr("This is example of dynamic translation in QML")
                wrapMode: Text.WordWrap
            }
        }

        Rectangle {
            id: rightRectId
            height: parent.height
            width: parent.width

            ComboBox {
                model: ["Русский", "English", "日本語"]
                onCurrentTextChanged: {
                    translator.selectLanguage(currentText)
                }
            }
        }
    }
}

