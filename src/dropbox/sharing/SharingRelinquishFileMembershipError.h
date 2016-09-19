/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"

namespace dropboxQt{
namespace sharing{
    class RelinquishFileMembershipError{
        /**
            field: group_access: The current user has access to the shared file
                via a group.  You can't relinquish membership to a file shared
                via groups.
            field: no_permission: The current user does not have permission to
                perform this action.
        */
    public:
        enum Tag{

		/*None*/
		RelinquishFileMembershipError_ACCESS_ERROR,
		/*The current user has access to the shared file via a group.  You can't relinquish membership to a file shared via groups.*/
		RelinquishFileMembershipError_GROUP_ACCESS,
		/*The current user does not have permission to perform this action.*/
		RelinquishFileMembershipError_NO_PERMISSION,
		/*None*/
		RelinquishFileMembershipError_OTHER
        };

        RelinquishFileMembershipError(){}
        RelinquishFileMembershipError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((RelinquishFileMembershipError_ACCESS_ERROR == m_tag), "expected tag: RelinquishFileMembershipError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RelinquishFileMembershipError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingFileAccessError m_access_error;
    };//RelinquishFileMembershipError

}//sharing
}//dropboxQt