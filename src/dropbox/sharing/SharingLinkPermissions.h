/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingResolvedVisibility.h"
#include "dropbox/sharing/SharingResolvedVisibility.h"
#include "dropbox/sharing/SharingRequestedVisibility.h"
#include "dropbox/sharing/SharingRequestedVisibility.h"
#include "dropbox/sharing/SharingSharedLinkAccessFailureReason.h"
#include "dropbox/sharing/SharingSharedLinkAccessFailureReason.h"

namespace dropboxQt{
namespace sharing{
    class LinkPermissions{
        /**
            field: resolved_visibility: The current visibility of the link after
                considering the shared links policies of the the team (in case
                the link's owner is part of a team) and the shared folder (in
                case the linked file is part of a shared folder). This field is
                shown only if the caller has access to this info (the link's
                owner always has access to this data).
            field: requested_visibility: The shared link's requested visibility.
                This can be overridden by the team and shared folder policies.
                The final visibility, after considering these policies, can be
                found in ``resolved_visibility``. This is shown only if the
                caller is the link's owner.
            field: can_revoke: Whether the caller can revoke the shared link
            field: revoke_failure_reason: The failure reason for revoking the
                link. This field will only be present if the ``can_revoke`` is
                ``False``.
        */

    public:
        LinkPermissions(){};

        LinkPermissions(const ResolvedVisibility& arg){ m_resolved_visibility = arg; };

    public:
        ///The current visibility of the link after considering the shared links policies of the the team (in case the link's owner is part of a team) and the shared folder (in case the linked file is part of a shared folder). This field is shown only if the caller has access to this info (the link's owner always has access to this data).
        ResolvedVisibility resolvedVisibility()const{return m_resolved_visibility;};
        const LinkPermissions& setResolvedvisibility(const ResolvedVisibility& arg){m_resolved_visibility=arg; return *this;};

        ///The shared link's requested visibility. This can be overridden by the team and shared folder policies. The final visibility, after considering these policies, can be found in :field:`resolved_visibility`. This is shown only if the caller is the link's owner.
        RequestedVisibility requestedVisibility()const{return m_requested_visibility;};
        const LinkPermissions& setRequestedvisibility(const RequestedVisibility& arg){m_requested_visibility=arg; return *this;};

        ///Whether the caller can revoke the shared link
        bool canRevoke()const{return m_can_revoke;};
        const LinkPermissions& setCanrevoke(const bool& arg){m_can_revoke=arg; return *this;};

        ///The failure reason for revoking the link. This field will only be present if the :field:`can_revoke` is :val:`false`.
        SharedLinkAccessFailureReason revokeFailureReason()const{return m_revoke_failure_reason;};
        const LinkPermissions& setRevokefailurereason(const SharedLinkAccessFailureReason& arg){m_revoke_failure_reason=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static LinkPermissions EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The current visibility of the link after considering the shared links policies of the the team (in case the link's owner is part of a team) and the shared folder (in case the linked file is part of a shared folder). This field is shown only if the caller has access to this info (the link's owner always has access to this data).
        ResolvedVisibility m_resolved_visibility;

        ///The shared link's requested visibility. This can be overridden by the team and shared folder policies. The final visibility, after considering these policies, can be found in :field:`resolved_visibility`. This is shown only if the caller is the link's owner.
        RequestedVisibility m_requested_visibility;

        ///Whether the caller can revoke the shared link
        bool m_can_revoke;

        ///The failure reason for revoking the link. This field will only be present if the :field:`can_revoke` is :val:`false`.
        SharedLinkAccessFailureReason m_revoke_failure_reason;

    };//LinkPermissions

}//sharing
}//dropboxQt
