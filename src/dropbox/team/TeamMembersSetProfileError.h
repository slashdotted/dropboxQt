/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamMemberSelectorError.h"

namespace dropboxQt{
namespace team{
    class MembersSetProfileError{
        /**
            field: external_id_and_new_external_id_unsafe: It is unsafe to use
                both external_id and new_external_id
            field: no_new_data_specified: None of new_email, new_given_name,
                new_surname, or new_external_id are specified
            field: email_reserved_for_other_user: Email is already reserved for
                another user.
            field: external_id_used_by_other_user: The external ID is already in
                use by another team member.
            field: set_profile_disallowed: Setting profile disallowed
            field: param_cannot_be_empty: Parameter new_email cannot be empty.
        */
    public:
        enum Tag{

		/*No matching user found. The provided team_member_id, email, or external_id does not exist on this team.*/
		UserSelectorError_USER_NOT_FOUND,
		/*The user is not a member of the team.*/
		MemberSelectorError_USER_NOT_IN_TEAM,
		/*It is unsafe to use both external_id and new_external_id*/
		MembersSetProfileError_EXTERNAL_ID_AND_NEW_EXTERNAL_ID_UNSAFE,
		/*None of new_email, new_given_name, new_surname, or new_external_id are specified*/
		MembersSetProfileError_NO_NEW_DATA_SPECIFIED,
		/*Email is already reserved for another user.*/
		MembersSetProfileError_EMAIL_RESERVED_FOR_OTHER_USER,
		/*The external ID is already in use by another team member.*/
		MembersSetProfileError_EXTERNAL_ID_USED_BY_OTHER_USER,
		/*Setting profile disallowed*/
		MembersSetProfileError_SET_PROFILE_DISALLOWED,
		/*Parameter new_email cannot be empty.*/
		MembersSetProfileError_PARAM_CANNOT_BE_EMPTY,
		/*None*/
		MembersSetProfileError_OTHER
        };

        MembersSetProfileError(){}
        MembersSetProfileError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersSetProfileError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MembersSetProfileError

}//team
}//dropboxQt