/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMemberAddArg.h"

namespace dropboxQt{

namespace team{
///MemberAddArg

MemberAddArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MemberAddArg::toJson(QJsonObject& js)const{

    if(!m_member_email.isEmpty())
        js["member_email"] = m_member_email;
    if(!m_member_given_name.isEmpty())
        js["member_given_name"] = m_member_given_name;
    if(!m_member_surname.isEmpty())
        js["member_surname"] = m_member_surname;
    if(!m_member_external_id.isEmpty())
        js["member_external_id"] = m_member_external_id;
    js["send_welcome_email"] = m_send_welcome_email;
    m_role.toJson(js, "role");
}

void MemberAddArg::fromJson(const QJsonObject& js){

    m_member_email = js["member_email"].toString();
    m_member_given_name = js["member_given_name"].toString();
    m_member_surname = js["member_surname"].toString();
    m_member_external_id = js["member_external_id"].toString();
    m_send_welcome_email = js["send_welcome_email"].toVariant().toBool();
    m_role.fromJson(js["role"].toObject());
}

QString MemberAddArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberAddArg MemberAddArg::EXAMPLE(){
    MemberAddArg rv;
    rv.member_email = "test1value";
    rv.member_given_name = "test2value";
    rv.member_surname = "test3value";
    rv.member_external_id = "test4value";
    rv.role = team::AdminTier::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
