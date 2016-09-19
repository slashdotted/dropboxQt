/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingFolderAction.h"

namespace dropboxQt{
namespace sharing{
    class GetMetadataArgs{
        /**
            field: shared_folder_id: The ID for the shared folder.
            field: actions: This is a list indicating whether the returned
                folder data will include a boolean value
                ``FolderPermission.allow`` that describes whether the current
                user can perform the  FolderAction on the folder.
        */

    public:
        GetMetadataArgs(){};

        GetMetadataArgs(const QString& arg){ m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const GetMetadataArgs& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///This is a list indicating whether the returned folder data will include a boolean value  :field:`FolderPermission.allow` that describes whether the current user can perform the  FolderAction on the folder.
        const std::list <FolderAction>& actions()const{return m_actions;};
        const GetMetadataArgs& setActions(const std::list <FolderAction>&& arg){m_actions=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetMetadataArgs EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

        ///This is a list indicating whether the returned folder data will include a boolean value  :field:`FolderPermission.allow` that describes whether the current user can perform the  FolderAction on the folder.
        std::list <FolderAction> m_actions;

    };//GetMetadataArgs

}//sharing
}//dropboxQt
