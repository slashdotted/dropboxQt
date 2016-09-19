/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupSelector.h"

namespace dropboxQt{

namespace team{
///GroupSelector

GroupSelector::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupSelector::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupSelector_GROUP_ID:{
            if(!name.isEmpty())
                js[name] = "group_id";
            if(!m_group_id.isEmpty())
                js["group_id"] = m_group_id;
        }break;
        case GroupSelector_GROUP_EXTERNAL_ID:{
            if(!name.isEmpty())
                js[name] = "group_external_id";
            if(!m_group_external_id.isEmpty())
                js["group_external_id"] = m_group_external_id;
        }break;
    }//switch
}

void GroupSelector::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_id") == 0){
        m_tag = GroupSelector_GROUP_ID;
    }
    if(s.compare("group_external_id") == 0){
        m_tag = GroupSelector_GROUP_EXTERNAL_ID;
    }
}

QString GroupSelector::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupSelector");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupSelector GroupSelector::EXAMPLE(){
    GroupSelector rv;
    rv.group_id = "test1value";
    rv.group_external_id = "test2value";
    rv.m_tag = GroupSelector_GROUP_ID;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt