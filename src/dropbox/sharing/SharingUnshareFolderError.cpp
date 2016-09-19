/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUnshareFolderError.h"

namespace dropboxQt{

namespace sharing{
///UnshareFolderError

UnshareFolderError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UnshareFolderError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UnshareFolderError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case UnshareFolderError_TEAM_FOLDER:{
            if(!name.isEmpty())
                js[name] = "team_folder";
        }break;
        case UnshareFolderError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_permission";
        }break;
        case UnshareFolderError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void UnshareFolderError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = UnshareFolderError_ACCESS_ERROR;
    }
    if(s.compare("team_folder") == 0){
        m_tag = UnshareFolderError_TEAM_FOLDER;
    }
    if(s.compare("no_permission") == 0){
        m_tag = UnshareFolderError_NO_PERMISSION;
    }
    if(s.compare("other") == 0){
        m_tag = UnshareFolderError_OTHER;
    }
}

QString UnshareFolderError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UnshareFolderError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UnshareFolderError UnshareFolderError::EXAMPLE(){
    UnshareFolderError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.m_tag = UnshareFolderError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
