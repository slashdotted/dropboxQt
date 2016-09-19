/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingLinkPermissions.h"
#include "dropbox/sharing/SharingTeamMemberInfo.h"
#include "dropbox/users/UsersTeam.h"

namespace dropboxQt{
namespace sharing{
    class SharedLinkMetadata{
        /**
            The metadata of a shared link

            field: url: URL of the shared link.
            field: id: A unique identifier for the linked file.
            field: name: The linked file name (including extension). This never
                contains a slash.
            field: expires: Expiration time, if set. By default the link won't
                expire.
            field: path_lower: The lowercased full path in the user's Dropbox.
                This always starts with a slash. This field will only be present
                only if the linked file is in the authenticated user's  dropbox.
            field: link_permissions: The link's access permissions.
            field: team_member_info: The team membership information of the
                link's owner.  This field will only be present  if the link's
                owner is a team member.
            field: content_owner_team_info: The team information of the
                content's owner. This field will only be present if the
                content's owner is a team member and the content's owner team is
                different from the link's owner team.
        */

    public:
        SharedLinkMetadata(){};

        SharedLinkMetadata(const QString& arg){ m_url = arg; };

    public:
        ///URL of the shared link.
        QString url()const{return m_url;};
        const SharedLinkMetadata& setUrl(const QString& arg){m_url=arg; return *this;};

        ///A unique identifier for the linked file.
        QString id()const{return m_id;};
        const SharedLinkMetadata& setId(const QString& arg){m_id=arg; return *this;};

        ///The linked file name (including extension). This never contains a slash.
        QString name()const{return m_name;};
        const SharedLinkMetadata& setName(const QString& arg){m_name=arg; return *this;};

        ///Expiration time, if set. By default the link won't expire.
        QDateTime expires()const{return m_expires;};
        const SharedLinkMetadata& setExpires(const QDateTime& arg){m_expires=arg; return *this;};

        ///The lowercased full path in the user's Dropbox. This always starts with a slash. This field will only be present only if the linked file is in the authenticated user's  dropbox.
        QString pathLower()const{return m_path_lower;};
        const SharedLinkMetadata& setPathlower(const QString& arg){m_path_lower=arg; return *this;};

        ///The link's access permissions.
        LinkPermissions linkPermissions()const{return m_link_permissions;};
        const SharedLinkMetadata& setLinkpermissions(const LinkPermissions& arg){m_link_permissions=arg; return *this;};

        ///The team membership information of the link's owner.  This field will only be present  if the link's owner is a team member.
        TeamMemberInfo teamMemberInfo()const{return m_team_member_info;};
        const SharedLinkMetadata& setTeammemberinfo(const TeamMemberInfo& arg){m_team_member_info=arg; return *this;};

        ///The team information of the content's owner. This field will only be present if the content's owner is a team member and the content's owner team is different from the link's owner team.
        users::Team contentOwnerTeamInfo()const{return m_content_owner_team_info;};
        const SharedLinkMetadata& setContentownerteaminfo(const users::Team& arg){m_content_owner_team_info=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedLinkMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///URL of the shared link.
        QString m_url;

        ///A unique identifier for the linked file.
        QString m_id;

        ///The linked file name (including extension). This never contains a slash.
        QString m_name;

        ///Expiration time, if set. By default the link won't expire.
        QDateTime m_expires;

        ///The lowercased full path in the user's Dropbox. This always starts with a slash. This field will only be present only if the linked file is in the authenticated user's  dropbox.
        QString m_path_lower;

        ///The link's access permissions.
        LinkPermissions m_link_permissions;

        ///The team membership information of the link's owner.  This field will only be present  if the link's owner is a team member.
        TeamMemberInfo m_team_member_info;

        ///The team information of the content's owner. This field will only be present if the content's owner is a team member and the content's owner team is different from the link's owner team.
        users::Team m_content_owner_team_info;

    };//SharedLinkMetadata

}//sharing
}//dropboxQt