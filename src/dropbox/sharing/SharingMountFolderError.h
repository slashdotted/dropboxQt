/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingInsufficientQuotaAmounts.h"

namespace dropboxQt{
namespace sharing{
    class MountFolderError{
        /**
            field: inside_shared_folder: Mounting would cause a shared folder to
                be inside another, which is disallowed.
            field: insufficient_quota: The current user does not have enough
                space to mount the shared folder.
            field: already_mounted: The shared folder is already mounted.
            field: no_permission: The current user does not have permission to
                perform this action.
            field: not_mountable: The shared folder is not mountable. One
                example where this can occur is when the shared folder belongs
                within a team folder in the user's Dropbox.
        */
    public:
        enum Tag{

		/*None*/
		MountFolderError_ACCESS_ERROR,
		/*Mounting would cause a shared folder to be inside another, which is disallowed.*/
		MountFolderError_INSIDE_SHARED_FOLDER,
		/*The current user does not have enough space to mount the shared folder.*/
		MountFolderError_INSUFFICIENT_QUOTA,
		/*The shared folder is already mounted.*/
		MountFolderError_ALREADY_MOUNTED,
		/*The current user does not have permission to perform this action.*/
		MountFolderError_NO_PERMISSION,
		/*The shared folder is not mountable. One example where this can occur is when the shared folder belongs within a team folder in the user's Dropbox.*/
		MountFolderError_NOT_MOUNTABLE,
		/*None*/
		MountFolderError_OTHER
        };

        MountFolderError(){}
        MountFolderError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((MountFolderError_ACCESS_ERROR == m_tag), "expected tag: MountFolderError_ACCESS_ERROR", m_tag);return m_access_error;};

        ///The current user does not have enough space to mount the shared folder.
        InsufficientQuotaAmounts getInsufficientQuota()const{DBOX_CHECK_STATE((MountFolderError_INSUFFICIENT_QUOTA == m_tag), "expected tag: MountFolderError_INSUFFICIENT_QUOTA", m_tag);return m_insufficient_quota;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MountFolderError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
        InsufficientQuotaAmounts m_insufficient_quota;
    };//MountFolderError

}//sharing
}//dropboxQt
