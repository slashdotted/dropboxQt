/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#include "dropbox/team_policies/TeamPoliciesTeamSharingPolicies.h"

namespace dropboxQt{

namespace team_policies{
///TeamSharingPolicies

TeamSharingPolicies::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamSharingPolicies::toJson(QJsonObject& js)const{

    m_shared_folder_member_policy.toJson(js, "shared_folder_member_policy");
    m_shared_folder_join_policy.toJson(js, "shared_folder_join_policy");
    m_shared_link_create_policy.toJson(js, "shared_link_create_policy");
}

void TeamSharingPolicies::fromJson(const QJsonObject& js){

    m_shared_folder_member_policy.fromJson(js["shared_folder_member_policy"].toObject());
    m_shared_folder_join_policy.fromJson(js["shared_folder_join_policy"].toObject());
    m_shared_link_create_policy.fromJson(js["shared_link_create_policy"].toObject());
}

QString TeamSharingPolicies::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
TeamSharingPolicies TeamSharingPolicies::EXAMPLE(){
    TeamSharingPolicies rv;
    rv.shared_folder_member_policy = team_policies::SharedFolderMemberPolicy::EXAMPLE();
    rv.shared_folder_join_policy = team_policies::SharedFolderJoinPolicy::EXAMPLE();
    rv.shared_link_create_policy = team_policies::SharedLinkCreatePolicy::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_policies
}//dropboxQt