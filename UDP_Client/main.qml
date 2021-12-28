import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("UDPChatClient")
    color: "transparent"
    Component.onCompleted: {
        $PD.init()
        $PD.sendTest()
    }
    flags: Qt.FramelessWindowHint | Qt.Window
    ChatPanel{anchors.fill: parent}
}
