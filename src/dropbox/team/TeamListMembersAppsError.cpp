/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMembersAppsError.h"

namespace dropboxQt{

namespace team{
///ListMembersAppsError

ListMembersAppsError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListMembersAppsError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListMembersAppsError_RESET:{
            if(!name.isEmpty())
                js[name] = "reset";
        }break;
        case ListMembersAppsError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListMembersAppsError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("reset") == 0){
        m_tag = ListMembersAppsError_RESET;
    }
    if(s.compare("other") == 0){
        m_tag = ListMembersAppsError_OTHER;
    }
}

QString ListMembersAppsError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListMembersAppsError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMembersAppsError ListMembersAppsError::EXAMPLE(){
    ListMembersAppsError rv;
    rv.m_tag = ListMembersAppsError_RESET;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
