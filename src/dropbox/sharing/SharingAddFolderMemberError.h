/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingAddMemberSelectorError.h"
#include "dropbox/sharing/SharingAddMemberSelectorError.h"

namespace dropboxQt{
namespace sharing{
    class AddFolderMemberError{
        /**
            field: access_error: Unable to access shared folder.
            field: email_unverified: The current user's e-mail address is
                unverified.
            field: bad_member: ``AddFolderMemberArg.members`` contains a bad
                invitation recipient.
            field: cant_share_outside_team: Your team policy does not allow
                sharing outside of the team.
            field: too_many_members: The value is the member limit that was
                reached.
            field: too_many_pending_invites: The value is the pending invite
                limit that was reached.
            field: rate_limit: The current user has hit the limit of invites
                they can send per day. Try again in 24 hours.
            field: too_many_invitees: The current user is trying to share with
                too many people at once.
            field: insufficient_plan: The current user's account doesn't support
                this action. An example of this is when adding a read-only
                member. This action can only be performed by users that have
                upgraded to a Pro or Business plan.
            field: team_folder: This action cannot be performed on a team shared
                folder.
            field: no_permission: The current user does not have permission to
                perform this action.
        */
    public:
        enum Tag{

		/*Unable to access shared folder.*/
		AddFolderMemberError_ACCESS_ERROR,
		/*The current user's e-mail address is unverified.*/
		AddFolderMemberError_EMAIL_UNVERIFIED,
		/*:field:`AddFolderMemberArg.members` contains a bad invitation recipient.*/
		AddFolderMemberError_BAD_MEMBER,
		/*Your team policy does not allow sharing outside of the team.*/
		AddFolderMemberError_CANT_SHARE_OUTSIDE_TEAM,
		/*The value is the member limit that was reached.*/
		AddFolderMemberError_TOO_MANY_MEMBERS,
		/*The value is the pending invite limit that was reached.*/
		AddFolderMemberError_TOO_MANY_PENDING_INVITES,
		/*The current user has hit the limit of invites they can send per day. Try again in 24 hours.*/
		AddFolderMemberError_RATE_LIMIT,
		/*The current user is trying to share with too many people at once.*/
		AddFolderMemberError_TOO_MANY_INVITEES,
		/*The current user's account doesn't support this action. An example of this is when adding a read-only member. This action can only be performed by users that have upgraded to a Pro or Business plan.*/
		AddFolderMemberError_INSUFFICIENT_PLAN,
		/*This action cannot be performed on a team shared folder.*/
		AddFolderMemberError_TEAM_FOLDER,
		/*The current user does not have permission to perform this action.*/
		AddFolderMemberError_NO_PERMISSION,
		/*None*/
		AddFolderMemberError_OTHER
        };

        AddFolderMemberError(){}
        AddFolderMemberError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Unable to access shared folder.
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((AddFolderMemberError_ACCESS_ERROR == m_tag), "expected tag: AddFolderMemberError_ACCESS_ERROR", m_tag);return m_access_error;};

        ///:field:`AddFolderMemberArg.members` contains a bad invitation recipient.
        AddMemberSelectorError getBadMember()const{DBOX_CHECK_STATE((AddFolderMemberError_BAD_MEMBER == m_tag), "expected tag: AddFolderMemberError_BAD_MEMBER", m_tag);return m_bad_member;};

        ///The value is the member limit that was reached.
        int getTooManyMembers()const{DBOX_CHECK_STATE((AddFolderMemberError_TOO_MANY_MEMBERS == m_tag), "expected tag: AddFolderMemberError_TOO_MANY_MEMBERS", m_tag);return m_too_many_members;};

        ///The value is the pending invite limit that was reached.
        int getTooManyPendingInvites()const{DBOX_CHECK_STATE((AddFolderMemberError_TOO_MANY_PENDING_INVITES == m_tag), "expected tag: AddFolderMemberError_TOO_MANY_PENDING_INVITES", m_tag);return m_too_many_pending_invites;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AddFolderMemberError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
        AddMemberSelectorError m_bad_member;
        int m_too_many_members;
        int m_too_many_pending_invites;
    };//AddFolderMemberError

}//sharing
}//dropboxQt
