import QtQuick 2.0

Rectangle{
    id:root
    signal clicked
    signal entered
    signal pressed
    signal exited
    signal released
    property alias textData: text_.text
    property alias fontColor: text_.color

//    border.color: "black"
//    border.width: 1
    radius: 2
    Text {
        id: text_
        text: textData
        anchors.centerIn: parent
        color: fontColor
        font.bold: true
        font.pixelSize: 14
    }
    MouseArea{
        anchors.fill: parent
        hoverEnabled: true
        onClicked: root.clicked()
        onEntered: root.entered()
        onPressed: root.pressed()
        onExited: root.exited()
        onReleased: root.released()
    }
}
