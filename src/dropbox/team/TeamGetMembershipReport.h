/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamBaseDfbReport.h"

namespace dropboxQt{
namespace team{
    class GetMembershipReport : public BaseDfbReport{
        /**
            Membership Report Result. Each of the items in the storage report is
            an array of values, one value per day. If there is no data for a
            day, then the value will be None.

            field: team_size: Team size, for each day.
            field: pending_invites: The number of pending invites to the team,
                for each day.
            field: members_joined: The number of members that joined the team,
                for each day.
            field: suspended_members: The number of suspended team members, for
                each day.
            field: licenses: The total number of licenses the team has, for each
                day.
        */

    public:
        GetMembershipReport(){};

        GetMembershipReport(const std::list <int>&& arg){ m_team_size = arg; };

    public:
        ///Team size, for each day.
        const std::list <int>& teamSize()const{return m_team_size;};
        const GetMembershipReport& setTeamsize(const std::list <int>&& arg){m_team_size=arg; return *this;};

        ///The number of pending invites to the team, for each day.
        const std::list <int>& pendingInvites()const{return m_pending_invites;};
        const GetMembershipReport& setPendinginvites(const std::list <int>&& arg){m_pending_invites=arg; return *this;};

        ///The number of members that joined the team, for each day.
        const std::list <int>& membersJoined()const{return m_members_joined;};
        const GetMembershipReport& setMembersjoined(const std::list <int>&& arg){m_members_joined=arg; return *this;};

        ///The number of suspended team members, for each day.
        const std::list <int>& suspendedMembers()const{return m_suspended_members;};
        const GetMembershipReport& setSuspendedmembers(const std::list <int>&& arg){m_suspended_members=arg; return *this;};

        ///The total number of licenses the team has, for each day.
        const std::list <int>& licenses()const{return m_licenses;};
        const GetMembershipReport& setLicenses(const std::list <int>&& arg){m_licenses=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetMembershipReport EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Team size, for each day.
        std::list <int> m_team_size;

        ///The number of pending invites to the team, for each day.
        std::list <int> m_pending_invites;

        ///The number of members that joined the team, for each day.
        std::list <int> m_members_joined;

        ///The number of suspended team members, for each day.
        std::list <int> m_suspended_members;

        ///The total number of licenses the team has, for each day.
        std::list <int> m_licenses;

    };//GetMembershipReport

}//team
}//dropboxQt