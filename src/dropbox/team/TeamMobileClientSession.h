/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamDeviceSession.h"
#include "dropbox/team/TeamMobileClientPlatform.h"
#include "dropbox/team/TeamMobileClientPlatform.h"

namespace dropboxQt{
namespace team{
    class MobileClientSession : public DeviceSession{
        /**
            Information about linked Dropbox mobile client sessions

            field: device_name: The device name
            field: client_type: The mobile application type
            field: client_version: The dropbox client version
            field: os_version: The hosting OS version
            field: last_carrier: last carrier used by the device
        */

    public:
        MobileClientSession(){};

        MobileClientSession(const QString& arg){ m_device_name = arg; };

    public:
        ///The device name
        QString deviceName()const{return m_device_name;};
        const MobileClientSession& setDevicename(const QString& arg){m_device_name=arg; return *this;};

        ///The mobile application type
        MobileClientPlatform clientType()const{return m_client_type;};
        const MobileClientSession& setClienttype(const MobileClientPlatform& arg){m_client_type=arg; return *this;};

        ///The dropbox client version
        QString clientVersion()const{return m_client_version;};
        const MobileClientSession& setClientversion(const QString& arg){m_client_version=arg; return *this;};

        ///The hosting OS version
        QString osVersion()const{return m_os_version;};
        const MobileClientSession& setOsversion(const QString& arg){m_os_version=arg; return *this;};

        ///last carrier used by the device
        QString lastCarrier()const{return m_last_carrier;};
        const MobileClientSession& setLastcarrier(const QString& arg){m_last_carrier=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MobileClientSession EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The device name
        QString m_device_name;

        ///The mobile application type
        MobileClientPlatform m_client_type;

        ///The dropbox client version
        QString m_client_version;

        ///The hosting OS version
        QString m_os_version;

        ///last carrier used by the device
        QString m_last_carrier;

    };//MobileClientSession

}//team
}//dropboxQt
