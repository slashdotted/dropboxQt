/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMembersAddError.h"

namespace dropboxQt{

namespace team{
///GroupMembersAddError

GroupMembersAddError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupMembersAddError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupSelectorError_GROUP_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "group_not_found";
        }break;
        case GroupSelectorError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
        case GroupMembersAddError_DUPLICATE_USER:{
            if(!name.isEmpty())
                js[name] = "duplicate_user";
        }break;
        case GroupMembersAddError_GROUP_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = "group_not_in_team";
        }break;
        case GroupMembersAddError_MEMBERS_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = "members_not_in_team";
            js["members_not_in_team"] = ingrl_list2jsonarray(m_members_not_in_team);
        }break;
        case GroupMembersAddError_USERS_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "users_not_found";
            js["users_not_found"] = ingrl_list2jsonarray(m_users_not_found);
        }break;
        case GroupMembersAddError_USER_MUST_BE_ACTIVE_TO_BE_OWNER:{
            if(!name.isEmpty())
                js[name] = "user_must_be_active_to_be_owner";
        }break;
        case GroupMembersAddError_USER_CANNOT_BE_MANAGER_OF_COMPANY_MANAGED_GROUP:{
            if(!name.isEmpty())
                js[name] = "user_cannot_be_manager_of_company_managed_group";
            js["user_cannot_be_manager_of_company_managed_group"] = ingrl_list2jsonarray(m_user_cannot_be_manager_of_company_managed_group);
        }break;
    }//switch
}

void GroupMembersAddError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_not_found") == 0){
        m_tag = GroupSelectorError_GROUP_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = GroupSelectorError_OTHER;
    }
    if(s.compare("duplicate_user") == 0){
        m_tag = GroupMembersAddError_DUPLICATE_USER;
    }
    if(s.compare("group_not_in_team") == 0){
        m_tag = GroupMembersAddError_GROUP_NOT_IN_TEAM;
    }
    if(s.compare("members_not_in_team") == 0){
        m_tag = GroupMembersAddError_MEMBERS_NOT_IN_TEAM;
    }
    if(s.compare("users_not_found") == 0){
        m_tag = GroupMembersAddError_USERS_NOT_FOUND;
    }
    if(s.compare("user_must_be_active_to_be_owner") == 0){
        m_tag = GroupMembersAddError_USER_MUST_BE_ACTIVE_TO_BE_OWNER;
    }
    if(s.compare("user_cannot_be_manager_of_company_managed_group") == 0){
        m_tag = GroupMembersAddError_USER_CANNOT_BE_MANAGER_OF_COMPANY_MANAGED_GROUP;
    }
}

QString GroupMembersAddError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupMembersAddError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembersAddError GroupMembersAddError::EXAMPLE(){
    GroupMembersAddError rv;
    rv.m_tag = GroupMembersAddError_DUPLICATE_USER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
