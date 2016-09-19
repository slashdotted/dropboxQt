/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMemberDevicesError.h"

namespace dropboxQt{

namespace team{
///ListMemberDevicesError

ListMemberDevicesError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListMemberDevicesError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListMemberDevicesError_MEMBER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "member_not_found";
        }break;
        case ListMemberDevicesError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListMemberDevicesError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("member_not_found") == 0){
        m_tag = ListMemberDevicesError_MEMBER_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = ListMemberDevicesError_OTHER;
    }
}

QString ListMemberDevicesError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListMemberDevicesError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMemberDevicesError ListMemberDevicesError::EXAMPLE(){
    ListMemberDevicesError rv;
    rv.m_tag = ListMemberDevicesError_MEMBER_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
