/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFolderPermission.h"

namespace dropboxQt{

namespace sharing{
///FolderPermission

FolderPermission::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FolderPermission::toJson(QJsonObject& js)const{

    m_action.toJson(js, "action");
    js["allow"] = m_allow;
    m_reason.toJson(js, "reason");
}

void FolderPermission::fromJson(const QJsonObject& js){

    m_action.fromJson(js["action"].toObject());
    m_allow = js["allow"].toVariant().toBool();
    m_reason.fromJson(js["reason"].toObject());
}

QString FolderPermission::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FolderPermission FolderPermission::EXAMPLE(){
    FolderPermission rv;
    rv.action = sharing::FolderAction::EXAMPLE();
    rv.reason = sharing::PermissionDeniedReason::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
