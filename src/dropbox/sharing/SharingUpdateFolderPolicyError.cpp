/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUpdateFolderPolicyError.h"

namespace dropboxQt{

namespace sharing{
///UpdateFolderPolicyError

UpdateFolderPolicyError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UpdateFolderPolicyError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UpdateFolderPolicyError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case UpdateFolderPolicyError_NOT_ON_TEAM:{
            if(!name.isEmpty())
                js[name] = "not_on_team";
        }break;
        case UpdateFolderPolicyError_TEAM_POLICY_DISALLOWS_MEMBER_POLICY:{
            if(!name.isEmpty())
                js[name] = "team_policy_disallows_member_policy";
        }break;
        case UpdateFolderPolicyError_DISALLOWED_SHARED_LINK_POLICY:{
            if(!name.isEmpty())
                js[name] = "disallowed_shared_link_policy";
        }break;
        case UpdateFolderPolicyError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_permission";
        }break;
        case UpdateFolderPolicyError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void UpdateFolderPolicyError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = UpdateFolderPolicyError_ACCESS_ERROR;
    }
    if(s.compare("not_on_team") == 0){
        m_tag = UpdateFolderPolicyError_NOT_ON_TEAM;
    }
    if(s.compare("team_policy_disallows_member_policy") == 0){
        m_tag = UpdateFolderPolicyError_TEAM_POLICY_DISALLOWS_MEMBER_POLICY;
    }
    if(s.compare("disallowed_shared_link_policy") == 0){
        m_tag = UpdateFolderPolicyError_DISALLOWED_SHARED_LINK_POLICY;
    }
    if(s.compare("no_permission") == 0){
        m_tag = UpdateFolderPolicyError_NO_PERMISSION;
    }
    if(s.compare("other") == 0){
        m_tag = UpdateFolderPolicyError_OTHER;
    }
}

QString UpdateFolderPolicyError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UpdateFolderPolicyError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UpdateFolderPolicyError UpdateFolderPolicyError::EXAMPLE(){
    UpdateFolderPolicyError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.m_tag = UpdateFolderPolicyError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
