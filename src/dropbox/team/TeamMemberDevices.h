/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamActiveWebSession.h"
#include "dropbox/team/TeamDesktopClientSession.h"
#include "dropbox/team/TeamMobileClientSession.h"

namespace dropboxQt{
namespace team{
    class MemberDevices{
        /**
            Information on devices of a team's member.

            field: team_member_id: The member unique Id
            field: web_sessions: List of web sessions made by this team member
            field: desktop_clients: List of desktop clients by this team member
            field: mobile_clients: List of mobile clients by this team member
        */

    public:
        MemberDevices(){};

        MemberDevices(const QString& arg){ m_team_member_id = arg; };

    public:
        ///The member unique Id
        QString teamMemberId()const{return m_team_member_id;};
        const MemberDevices& setTeammemberid(const QString& arg){m_team_member_id=arg; return *this;};

        ///List of web sessions made by this team member
        const std::list <ActiveWebSession>& webSessions()const{return m_web_sessions;};
        const MemberDevices& setWebsessions(const std::list <ActiveWebSession>&& arg){m_web_sessions=arg; return *this;};

        ///List of desktop clients by this team member
        const std::list <DesktopClientSession>& desktopClients()const{return m_desktop_clients;};
        const MemberDevices& setDesktopclients(const std::list <DesktopClientSession>&& arg){m_desktop_clients=arg; return *this;};

        ///List of mobile clients by this team member
        const std::list <MobileClientSession>& mobileClients()const{return m_mobile_clients;};
        const MemberDevices& setMobileclients(const std::list <MobileClientSession>&& arg){m_mobile_clients=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberDevices EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The member unique Id
        QString m_team_member_id;

        ///List of web sessions made by this team member
        std::list <ActiveWebSession> m_web_sessions;

        ///List of desktop clients by this team member
        std::list <DesktopClientSession> m_desktop_clients;

        ///List of mobile clients by this team member
        std::list <MobileClientSession> m_mobile_clients;

    };//MemberDevices

}//team
}//dropboxQt