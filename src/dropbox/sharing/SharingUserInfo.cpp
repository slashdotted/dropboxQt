/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUserInfo.h"

namespace dropboxQt{

namespace sharing{
///UserInfo

UserInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UserInfo::toJson(QJsonObject& js)const{

    if(!m_account_id.isEmpty())
        js["account_id"] = m_account_id;
    js["same_team"] = m_same_team;
    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = m_team_member_id;
}

void UserInfo::fromJson(const QJsonObject& js){

    m_account_id = js["account_id"].toString();
    m_same_team = js["same_team"].toVariant().toBool();
    m_team_member_id = js["team_member_id"].toString();
}

QString UserInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UserInfo UserInfo::EXAMPLE(){
    UserInfo rv;
    rv.account_id = "test1value";
    rv.team_member_id = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt