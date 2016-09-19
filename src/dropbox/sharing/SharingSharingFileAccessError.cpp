/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharingFileAccessError.h"

namespace dropboxQt{

namespace sharing{
///SharingFileAccessError

SharingFileAccessError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharingFileAccessError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharingFileAccessError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_permission";
        }break;
        case SharingFileAccessError_INVALID_FILE:{
            if(!name.isEmpty())
                js[name] = "invalid_file";
        }break;
        case SharingFileAccessError_IS_FOLDER:{
            if(!name.isEmpty())
                js[name] = "is_folder";
        }break;
        case SharingFileAccessError_INSIDE_PUBLIC_FOLDER:{
            if(!name.isEmpty())
                js[name] = "inside_public_folder";
        }break;
        case SharingFileAccessError_INSIDE_OSX_PACKAGE:{
            if(!name.isEmpty())
                js[name] = "inside_osx_package";
        }break;
        case SharingFileAccessError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharingFileAccessError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("no_permission") == 0){
        m_tag = SharingFileAccessError_NO_PERMISSION;
    }
    if(s.compare("invalid_file") == 0){
        m_tag = SharingFileAccessError_INVALID_FILE;
    }
    if(s.compare("is_folder") == 0){
        m_tag = SharingFileAccessError_IS_FOLDER;
    }
    if(s.compare("inside_public_folder") == 0){
        m_tag = SharingFileAccessError_INSIDE_PUBLIC_FOLDER;
    }
    if(s.compare("inside_osx_package") == 0){
        m_tag = SharingFileAccessError_INSIDE_OSX_PACKAGE;
    }
    if(s.compare("other") == 0){
        m_tag = SharingFileAccessError_OTHER;
    }
}

QString SharingFileAccessError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharingFileAccessError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharingFileAccessError SharingFileAccessError::EXAMPLE(){
    SharingFileAccessError rv;
    rv.m_tag = SharingFileAccessError_NO_PERMISSION;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
