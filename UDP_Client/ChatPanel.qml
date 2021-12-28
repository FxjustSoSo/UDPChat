import QtQuick 2.0
import QtQuick.Controls 2.5
Item {
    id:root

    Rectangle{
        id:rect_BG
        anchors.fill: parent
        radius: 5
    }

    //顶部工具栏
    Canvas{

    }

    //顶部工具栏
    Rectangle{
        id:rect_tool_bar
        width: parent.width
        height: 40
        color: "#5D7599"
    }

    //聊天记录显示区域
    Rectangle{
        id:rect_Recv
        anchors.top: rect_tool_bar.bottom
        anchors.bottom: rect_split_line.top
        anchors.right: parent.right
        anchors.left: parent.left

    }

    //分割线
    Rectangle{
        id:rect_split_line
        width: parent.width
        height: 1
        color: "#DADADA"
        anchors.bottom: rect_Send.top
    }

    //发送区域
    Rectangle{
        id:rect_Send
        width: parent.width
        height: 130
        anchors.bottom: parent.bottom
        anchors.left: parent.left
    }

    ComButton{
        id:btn_set
        anchors.bottom: rect_Send.bottom
        anchors.bottomMargin: 10
        anchors.right: rect_Send.right
        anchors.rightMargin: 10
        width: 30
        height: 30
        color: "#5D7599"
        onEntered: {color = "#ABB6C8"}
        onExited: {color = "#5D7599"}
        textData: "🗡"
    }
    ComButton{
        id:btn_send
        anchors.bottom: rect_Send.bottom
        anchors.bottomMargin: 10
        anchors.right: btn_set.left
        anchors.rightMargin: -2
        width: 80
        height: 30
        color: "#5D7599"
        onEntered: {btn_send.color = "#ABB6C8"}
        onExited: {btn_send.color = "#5D7599"}
        fontColor: "#ffffffff"
        textData: "发送(<u>S</u>)"
    }
    ComButton{
        id:btn_shut
        anchors.bottom: rect_Send.bottom
        anchors.bottomMargin: 10
        anchors.right: btn_send.left
        anchors.rightMargin: 15
        width: 80
        height: 30
        border.color: "#DADADA"
        border.width: 1
        onEntered: {btn_shut.color = "#D1DCE2"}
        onExited: {btn_shut.color = "#ffffffff"}
        textData: "关闭(<u>C</u>)"
    }
}



/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
