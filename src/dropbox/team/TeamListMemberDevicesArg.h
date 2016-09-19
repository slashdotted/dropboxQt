/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListMemberDevicesArg{
        /**
            field: team_member_id: The team's member id
            field: include_web_sessions: Whether to list web sessions of the
                team's member
            field: include_desktop_clients: Whether to list linked desktop
                devices of the team's member
            field: include_mobile_clients: Whether to list linked mobile devices
                of the team's member
        */

    public:
        ListMemberDevicesArg():
        m_include_web_sessions(false)
        ,m_include_desktop_clients(false)
        ,m_include_mobile_clients(false)
        {};

        ListMemberDevicesArg(const QString& arg):
        m_include_web_sessions(false)
        ,m_include_desktop_clients(false)
        ,m_include_mobile_clients(false)
        { m_team_member_id = arg; };

    public:
        ///The team's member id
        QString teamMemberId()const{return m_team_member_id;};
        const ListMemberDevicesArg& setTeammemberid(const QString& arg){m_team_member_id=arg; return *this;};

        ///Whether to list web sessions of the team's member
        bool includeWebSessions()const{return m_include_web_sessions;};
        const ListMemberDevicesArg& setIncludewebsessions(const bool& arg){m_include_web_sessions=arg; return *this;};

        ///Whether to list linked desktop devices of the team's member
        bool includeDesktopClients()const{return m_include_desktop_clients;};
        const ListMemberDevicesArg& setIncludedesktopclients(const bool& arg){m_include_desktop_clients=arg; return *this;};

        ///Whether to list linked mobile devices of the team's member
        bool includeMobileClients()const{return m_include_mobile_clients;};
        const ListMemberDevicesArg& setIncludemobileclients(const bool& arg){m_include_mobile_clients=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMemberDevicesArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The team's member id
        QString m_team_member_id;

        ///Whether to list web sessions of the team's member
        bool m_include_web_sessions;

        ///Whether to list linked desktop devices of the team's member
        bool m_include_desktop_clients;

        ///Whether to list linked mobile devices of the team's member
        bool m_include_mobile_clients;

    };//ListMemberDevicesArg

}//team
}//dropboxQt
