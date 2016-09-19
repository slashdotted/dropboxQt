/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamDeviceSession.h"

namespace dropboxQt{
namespace team{
    class ActiveWebSession : public DeviceSession{
        /**
            Information on active web sessions

            field: user_agent: Information on the hosting device
            field: os: Information on the hosting operating system
            field: browser: Information on the browser used for this web session
        */

    public:
        ActiveWebSession(){};

        ActiveWebSession(const QString& arg){ m_user_agent = arg; };

    public:
        ///Information on the hosting device
        QString userAgent()const{return m_user_agent;};
        const ActiveWebSession& setUseragent(const QString& arg){m_user_agent=arg; return *this;};

        ///Information on the hosting operating system
        QString os()const{return m_os;};
        const ActiveWebSession& setOs(const QString& arg){m_os=arg; return *this;};

        ///Information on the browser used for this web session
        QString browser()const{return m_browser;};
        const ActiveWebSession& setBrowser(const QString& arg){m_browser=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ActiveWebSession EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Information on the hosting device
        QString m_user_agent;

        ///Information on the hosting operating system
        QString m_os;

        ///Information on the browser used for this web session
        QString m_browser;

    };//ActiveWebSession

}//team
}//dropboxQt