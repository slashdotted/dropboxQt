/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersError.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersError

ListFileMembersError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFileMembersError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFileMembersError_USER_ERROR:{
            if(!name.isEmpty())
                js[name] = "user_error";
            m_user_error.toJson(js, "user_error");
        }break;
        case ListFileMembersError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case ListFileMembersError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListFileMembersError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_error") == 0){
        m_tag = ListFileMembersError_USER_ERROR;
    }
    if(s.compare("access_error") == 0){
        m_tag = ListFileMembersError_ACCESS_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = ListFileMembersError_OTHER;
    }
}

QString ListFileMembersError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFileMembersError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersError ListFileMembersError::EXAMPLE(){
    ListFileMembersError rv;
    rv.user_error = sharing::SharingUserError::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.m_tag = ListFileMembersError_USER_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
