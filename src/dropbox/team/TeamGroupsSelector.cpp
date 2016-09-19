/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsSelector.h"

namespace dropboxQt{

namespace team{
///GroupsSelector

GroupsSelector::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupsSelector::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupsSelector_GROUP_IDS:{
            if(!name.isEmpty())
                js[name] = "group_ids";
            js["group_ids"] = ingrl_list2jsonarray(m_group_ids);
        }break;
        case GroupsSelector_GROUP_EXTERNAL_IDS:{
            if(!name.isEmpty())
                js[name] = "group_external_ids";
            js["group_external_ids"] = ingrl_list2jsonarray(m_group_external_ids);
        }break;
    }//switch
}

void GroupsSelector::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_ids") == 0){
        m_tag = GroupsSelector_GROUP_IDS;
    }
    if(s.compare("group_external_ids") == 0){
        m_tag = GroupsSelector_GROUP_EXTERNAL_IDS;
    }
}

QString GroupsSelector::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupsSelector");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsSelector GroupsSelector::EXAMPLE(){
    GroupsSelector rv;
    rv.m_tag = GroupsSelector_GROUP_IDS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
