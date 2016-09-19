/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMembersSelector.h"

namespace dropboxQt{

namespace team{
///GroupMembersSelector

GroupMembersSelector::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMembersSelector::toJson(QJsonObject& js)const{

    m_group.toJson(js, "group");
    m_users.toJson(js, "users");
}

void GroupMembersSelector::fromJson(const QJsonObject& js){

    m_group.fromJson(js["group"].toObject());
    m_users.fromJson(js["users"].toObject());
}

QString GroupMembersSelector::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembersSelector GroupMembersSelector::EXAMPLE(){
    GroupMembersSelector rv;
    rv.group = team::GroupSelector::EXAMPLE();
    rv.users = team::UsersSelectorArg::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt