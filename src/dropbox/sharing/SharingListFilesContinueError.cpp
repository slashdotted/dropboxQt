/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFilesContinueError.h"

namespace dropboxQt{

namespace sharing{
///ListFilesContinueError

ListFilesContinueError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFilesContinueError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFilesContinueError_USER_ERROR:{
            if(!name.isEmpty())
                js[name] = "user_error";
            m_user_error.toJson(js, "user_error");
        }break;
        case ListFilesContinueError_INVALID_CURSOR:{
            if(!name.isEmpty())
                js[name] = "invalid_cursor";
        }break;
        case ListFilesContinueError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListFilesContinueError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_error") == 0){
        m_tag = ListFilesContinueError_USER_ERROR;
    }
    if(s.compare("invalid_cursor") == 0){
        m_tag = ListFilesContinueError_INVALID_CURSOR;
    }
    if(s.compare("other") == 0){
        m_tag = ListFilesContinueError_OTHER;
    }
}

QString ListFilesContinueError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFilesContinueError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFilesContinueError ListFilesContinueError::EXAMPLE(){
    ListFilesContinueError rv;
    rv.user_error = sharing::SharingUserError::EXAMPLE();
    rv.m_tag = ListFilesContinueError_USER_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt