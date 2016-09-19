/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedLinkSettings.h"

namespace dropboxQt{
namespace sharing{
    class ModifySharedLinkSettingsArgs{
        /**
            field: url: URL of the shared link to change its settings
            field: settings: Set of settings for the shared link.
            field: remove_expiration: If set to true, removes the expiration of
                the shared link.
        */

    public:
        ModifySharedLinkSettingsArgs():
        m_remove_expiration(false)
        {};

        ModifySharedLinkSettingsArgs(const QString& arg):
        m_remove_expiration(false)
        { m_url = arg; };

    public:
        ///URL of the shared link to change its settings
        QString url()const{return m_url;};
        const ModifySharedLinkSettingsArgs& setUrl(const QString& arg){m_url=arg; return *this;};

        ///Set of settings for the shared link.
        SharedLinkSettings settings()const{return m_settings;};
        const ModifySharedLinkSettingsArgs& setSettings(const SharedLinkSettings& arg){m_settings=arg; return *this;};

        ///If set to true, removes the expiration of the shared link.
        bool removeExpiration()const{return m_remove_expiration;};
        const ModifySharedLinkSettingsArgs& setRemoveexpiration(const bool& arg){m_remove_expiration=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ModifySharedLinkSettingsArgs EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///URL of the shared link to change its settings
        QString m_url;

        ///Set of settings for the shared link.
        SharedLinkSettings m_settings;

        ///If set to true, removes the expiration of the shared link.
        bool m_remove_expiration;

    };//ModifySharedLinkSettingsArgs

}//sharing
}//dropboxQt
