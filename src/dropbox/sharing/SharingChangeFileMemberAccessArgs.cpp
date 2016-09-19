/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingChangeFileMemberAccessArgs.h"

namespace dropboxQt{

namespace sharing{
///ChangeFileMemberAccessArgs

ChangeFileMemberAccessArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ChangeFileMemberAccessArgs::toJson(QJsonObject& js)const{

    if(!m_file.isEmpty())
        js["file"] = m_file;
    m_member.toJson(js, "member");
    m_access_level.toJson(js, "access_level");
}

void ChangeFileMemberAccessArgs::fromJson(const QJsonObject& js){

    m_file = js["file"].toString();
    m_member.fromJson(js["member"].toObject());
    m_access_level.fromJson(js["access_level"].toObject());
}

QString ChangeFileMemberAccessArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ChangeFileMemberAccessArgs ChangeFileMemberAccessArgs::EXAMPLE(){
    ChangeFileMemberAccessArgs rv;
    rv.file = "test1value";
    rv.member = sharing::MemberSelector::EXAMPLE();
    rv.access_level = sharing::AccessLevel::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt