/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMemberDevicesArg.h"

namespace dropboxQt{

namespace team{
///ListMemberDevicesArg

ListMemberDevicesArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListMemberDevicesArg::toJson(QJsonObject& js)const{

    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = m_team_member_id;
    js["include_web_sessions"] = m_include_web_sessions;
    js["include_desktop_clients"] = m_include_desktop_clients;
    js["include_mobile_clients"] = m_include_mobile_clients;
}

void ListMemberDevicesArg::fromJson(const QJsonObject& js){

    m_team_member_id = js["team_member_id"].toString();
    m_include_web_sessions = js["include_web_sessions"].toVariant().toBool();
    m_include_desktop_clients = js["include_desktop_clients"].toVariant().toBool();
    m_include_mobile_clients = js["include_mobile_clients"].toVariant().toBool();
}

QString ListMemberDevicesArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMemberDevicesArg ListMemberDevicesArg::EXAMPLE(){
    ListMemberDevicesArg rv;
    rv.team_member_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
