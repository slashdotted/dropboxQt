/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMembershipInfo.h"
#include "dropbox/sharing/SharingInviteeInfo.h"
#include "dropbox/sharing/SharingInviteeInfo.h"
#include "dropbox/sharing/SharingUserInfo.h"

namespace dropboxQt{
namespace sharing{
    class InviteeMembershipInfo : public MembershipInfo{
        /**
            Information about an invited member of a shared content.

            field: invitee: Recipient of the invitation.
            field: user: The user this invitation is tied to, if available.
        */

    public:
        InviteeMembershipInfo(){};

        InviteeMembershipInfo(const InviteeInfo& arg){ m_invitee = arg; };

    public:
        ///Recipient of the invitation.
        InviteeInfo invitee()const{return m_invitee;};
        const InviteeMembershipInfo& setInvitee(const InviteeInfo& arg){m_invitee=arg; return *this;};

        ///The user this invitation is tied to, if available.
        UserInfo user()const{return m_user;};
        const InviteeMembershipInfo& setUser(const UserInfo& arg){m_user=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static InviteeMembershipInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Recipient of the invitation.
        InviteeInfo m_invitee;

        ///The user this invitation is tied to, if available.
        UserInfo m_user;

    };//InviteeMembershipInfo

}//sharing
}//dropboxQt