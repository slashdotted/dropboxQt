/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMemberDevicesResult.h"

namespace dropboxQt{

namespace team{
///ListMemberDevicesResult

ListMemberDevicesResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListMemberDevicesResult::toJson(QJsonObject& js)const{

    js["active_web_sessions"] = struct_list2jsonarray(m_active_web_sessions);
    js["desktop_client_sessions"] = struct_list2jsonarray(m_desktop_client_sessions);
    js["mobile_client_sessions"] = struct_list2jsonarray(m_mobile_client_sessions);
}

void ListMemberDevicesResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["active_web_sessions"].toArray(), m_active_web_sessions);
    jsonarray2struct_list(js["desktop_client_sessions"].toArray(), m_desktop_client_sessions);
    jsonarray2struct_list(js["mobile_client_sessions"].toArray(), m_mobile_client_sessions);
}

QString ListMemberDevicesResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMemberDevicesResult ListMemberDevicesResult::EXAMPLE(){
    ListMemberDevicesResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt