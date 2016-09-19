/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedLinkError.h"

namespace dropboxQt{

namespace sharing{
///SharedLinkError

SharedLinkError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharedLinkError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedLinkError_SHARED_LINK_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "shared_link_not_found";
        }break;
        case SharedLinkError_SHARED_LINK_ACCESS_DENIED:{
            if(!name.isEmpty())
                js[name] = "shared_link_access_denied";
        }break;
        case SharedLinkError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharedLinkError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("shared_link_not_found") == 0){
        m_tag = SharedLinkError_SHARED_LINK_NOT_FOUND;
    }
    if(s.compare("shared_link_access_denied") == 0){
        m_tag = SharedLinkError_SHARED_LINK_ACCESS_DENIED;
    }
    if(s.compare("other") == 0){
        m_tag = SharedLinkError_OTHER;
    }
}

QString SharedLinkError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharedLinkError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedLinkError SharedLinkError::EXAMPLE(){
    SharedLinkError rv;
    rv.m_tag = SharedLinkError_SHARED_LINK_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt