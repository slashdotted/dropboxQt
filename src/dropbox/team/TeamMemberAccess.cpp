/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMemberAccess.h"

namespace dropboxQt{

namespace team{
///MemberAccess

MemberAccess::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MemberAccess::toJson(QJsonObject& js)const{

    m_user.toJson(js, "user");
    m_access_type.toJson(js, "access_type");
}

void MemberAccess::fromJson(const QJsonObject& js){

    m_user.fromJson(js["user"].toObject());
    m_access_type.fromJson(js["access_type"].toObject());
}

QString MemberAccess::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberAccess MemberAccess::EXAMPLE(){
    MemberAccess rv;
    rv.user = team::UserSelectorArg::EXAMPLE();
    rv.access_type = team::GroupAccessType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
