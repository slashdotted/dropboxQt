/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFolderMetadataBase.h"
#include "dropbox/sharing/SharingFolderPermission.h"

namespace dropboxQt{
namespace sharing{
    class SharedFolderMetadata : public SharedFolderMetadataBase{
        /**
            The metadata which includes basic information about the shared
            folder.

            field: path_lower: The lower-cased full path of this shared folder.
                Absent for unmounted folders.
            field: name: The name of the this shared folder.
            field: shared_folder_id: The ID of the shared folder.
            field: permissions: Actions the current user may perform on the
                folder and its contents. The set of permissions corresponds to
                the FolderActions in the request.
            field: time_invited: Timestamp indicating when the current user was
                invited to this shared folder.
            field: preview_url: URL for displaying a web preview of the shared
                folder.
        */

    public:
        SharedFolderMetadata(){};

        SharedFolderMetadata(const QString& arg){ m_path_lower = arg; };

    public:
        ///The lower-cased full path of this shared folder. Absent for unmounted folders.
        QString pathLower()const{return m_path_lower;};
        const SharedFolderMetadata& setPathlower(const QString& arg){m_path_lower=arg; return *this;};

        ///The name of the this shared folder.
        QString name()const{return m_name;};
        const SharedFolderMetadata& setName(const QString& arg){m_name=arg; return *this;};

        ///The ID of the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const SharedFolderMetadata& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///Actions the current user may perform on the folder and its contents. The set of permissions corresponds to the FolderActions in the request.
        const std::list <FolderPermission>& permissions()const{return m_permissions;};
        const SharedFolderMetadata& setPermissions(const std::list <FolderPermission>&& arg){m_permissions=arg; return *this;};

        ///Timestamp indicating when the current user was invited to this shared folder.
        QDateTime timeInvited()const{return m_time_invited;};
        const SharedFolderMetadata& setTimeinvited(const QDateTime& arg){m_time_invited=arg; return *this;};

        ///URL for displaying a web preview of the shared folder.
        QString previewUrl()const{return m_preview_url;};
        const SharedFolderMetadata& setPreviewurl(const QString& arg){m_preview_url=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedFolderMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The lower-cased full path of this shared folder. Absent for unmounted folders.
        QString m_path_lower;

        ///The name of the this shared folder.
        QString m_name;

        ///The ID of the shared folder.
        QString m_shared_folder_id;

        ///Actions the current user may perform on the folder and its contents. The set of permissions corresponds to the FolderActions in the request.
        std::list <FolderPermission> m_permissions;

        ///Timestamp indicating when the current user was invited to this shared folder.
        QDateTime m_time_invited;

        ///URL for displaying a web preview of the shared folder.
        QString m_preview_url;

    };//SharedFolderMetadata

}//sharing
}//dropboxQt