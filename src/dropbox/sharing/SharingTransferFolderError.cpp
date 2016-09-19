/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingTransferFolderError.h"

namespace dropboxQt{

namespace sharing{
///TransferFolderError

TransferFolderError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void TransferFolderError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case TransferFolderError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case TransferFolderError_INVALID_DROPBOX_ID:{
            if(!name.isEmpty())
                js[name] = "invalid_dropbox_id";
        }break;
        case TransferFolderError_NEW_OWNER_NOT_A_MEMBER:{
            if(!name.isEmpty())
                js[name] = "new_owner_not_a_member";
        }break;
        case TransferFolderError_NEW_OWNER_UNMOUNTED:{
            if(!name.isEmpty())
                js[name] = "new_owner_unmounted";
        }break;
        case TransferFolderError_NEW_OWNER_EMAIL_UNVERIFIED:{
            if(!name.isEmpty())
                js[name] = "new_owner_email_unverified";
        }break;
        case TransferFolderError_TEAM_FOLDER:{
            if(!name.isEmpty())
                js[name] = "team_folder";
        }break;
        case TransferFolderError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_permission";
        }break;
        case TransferFolderError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void TransferFolderError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = TransferFolderError_ACCESS_ERROR;
    }
    if(s.compare("invalid_dropbox_id") == 0){
        m_tag = TransferFolderError_INVALID_DROPBOX_ID;
    }
    if(s.compare("new_owner_not_a_member") == 0){
        m_tag = TransferFolderError_NEW_OWNER_NOT_A_MEMBER;
    }
    if(s.compare("new_owner_unmounted") == 0){
        m_tag = TransferFolderError_NEW_OWNER_UNMOUNTED;
    }
    if(s.compare("new_owner_email_unverified") == 0){
        m_tag = TransferFolderError_NEW_OWNER_EMAIL_UNVERIFIED;
    }
    if(s.compare("team_folder") == 0){
        m_tag = TransferFolderError_TEAM_FOLDER;
    }
    if(s.compare("no_permission") == 0){
        m_tag = TransferFolderError_NO_PERMISSION;
    }
    if(s.compare("other") == 0){
        m_tag = TransferFolderError_OTHER;
    }
}

QString TransferFolderError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "TransferFolderError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
TransferFolderError TransferFolderError::EXAMPLE(){
    TransferFolderError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.m_tag = TransferFolderError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt