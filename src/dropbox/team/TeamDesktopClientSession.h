/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamDeviceSession.h"
#include "dropbox/team/TeamDesktopPlatform.h"
#include "dropbox/team/TeamDesktopPlatform.h"

namespace dropboxQt{
namespace team{
    class DesktopClientSession : public DeviceSession{
        /**
            Information about linked Dropbox desktop client sessions

            field: host_name: Name of the hosting desktop
            field: client_type: The Dropbox desktop client type
            field: client_version: The Dropbox client version
            field: platform: Information on the hosting platform
            field: is_delete_on_unlink_supported: Whether it's possible to
                delete all of the account files upon unlinking
        */

    public:
        DesktopClientSession(){};

        DesktopClientSession(const QString& arg){ m_host_name = arg; };

    public:
        ///Name of the hosting desktop
        QString hostName()const{return m_host_name;};
        const DesktopClientSession& setHostname(const QString& arg){m_host_name=arg; return *this;};

        ///The Dropbox desktop client type
        DesktopPlatform clientType()const{return m_client_type;};
        const DesktopClientSession& setClienttype(const DesktopPlatform& arg){m_client_type=arg; return *this;};

        ///The Dropbox client version
        QString clientVersion()const{return m_client_version;};
        const DesktopClientSession& setClientversion(const QString& arg){m_client_version=arg; return *this;};

        ///Information on the hosting platform
        QString platform()const{return m_platform;};
        const DesktopClientSession& setPlatform(const QString& arg){m_platform=arg; return *this;};

        ///Whether it's possible to delete all of the account files upon unlinking
        bool isDeleteOnUnlinkSupported()const{return m_is_delete_on_unlink_supported;};
        const DesktopClientSession& setIsdeleteonunlinksupported(const bool& arg){m_is_delete_on_unlink_supported=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static DesktopClientSession EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Name of the hosting desktop
        QString m_host_name;

        ///The Dropbox desktop client type
        DesktopPlatform m_client_type;

        ///The Dropbox client version
        QString m_client_version;

        ///Information on the hosting platform
        QString m_platform;

        ///Whether it's possible to delete all of the account files upon unlinking
        bool m_is_delete_on_unlink_supported;

    };//DesktopClientSession

}//team
}//dropboxQt