/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersContinueError.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersContinueError

ListFileMembersContinueError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFileMembersContinueError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFileMembersContinueError_USER_ERROR:{
            if(!name.isEmpty())
                js[name] = "user_error";
            m_user_error.toJson(js, "user_error");
        }break;
        case ListFileMembersContinueError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case ListFileMembersContinueError_INVALID_CURSOR:{
            if(!name.isEmpty())
                js[name] = "invalid_cursor";
        }break;
        case ListFileMembersContinueError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListFileMembersContinueError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_error") == 0){
        m_tag = ListFileMembersContinueError_USER_ERROR;
    }
    if(s.compare("access_error") == 0){
        m_tag = ListFileMembersContinueError_ACCESS_ERROR;
    }
    if(s.compare("invalid_cursor") == 0){
        m_tag = ListFileMembersContinueError_INVALID_CURSOR;
    }
    if(s.compare("other") == 0){
        m_tag = ListFileMembersContinueError_OTHER;
    }
}

QString ListFileMembersContinueError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFileMembersContinueError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersContinueError ListFileMembersContinueError::EXAMPLE(){
    ListFileMembersContinueError rv;
    rv.user_error = sharing::SharingUserError::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.m_tag = ListFileMembersContinueError_USER_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
