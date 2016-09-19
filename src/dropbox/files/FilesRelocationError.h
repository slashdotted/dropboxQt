/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{
namespace files{
    class RelocationError{
        /**
            field: cant_copy_shared_folder: Shared folders can't be copied.
            field: cant_nest_shared_folder: Your move operation would result in
                nested shared folders.  This is not allowed.
            field: cant_move_folder_into_itself: You cannot move a folder into
                itself.
            field: too_many_files: The operation would involve more than 10,000
                files and folders.
        */
    public:
        enum Tag{

		/*None*/
		RelocationError_FROM_LOOKUP,
		/*None*/
		RelocationError_FROM_WRITE,
		/*None*/
		RelocationError_TO,
		/*Shared folders can't be copied.*/
		RelocationError_CANT_COPY_SHARED_FOLDER,
		/*Your move operation would result in nested shared folders.  This is not allowed.*/
		RelocationError_CANT_NEST_SHARED_FOLDER,
		/*You cannot move a folder into itself.*/
		RelocationError_CANT_MOVE_FOLDER_INTO_ITSELF,
		/*The operation would involve more than 10,000 files and folders.*/
		RelocationError_TOO_MANY_FILES,
		/*None*/
		RelocationError_OTHER
        };

        RelocationError(){}
        RelocationError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        LookupError getFromLookup()const{DBOX_CHECK_STATE((RelocationError_FROM_LOOKUP == m_tag), "expected tag: RelocationError_FROM_LOOKUP", m_tag);return m_from_lookup;};

        ///None
        WriteError getFromWrite()const{DBOX_CHECK_STATE((RelocationError_FROM_WRITE == m_tag), "expected tag: RelocationError_FROM_WRITE", m_tag);return m_from_write;};

        ///None
        WriteError getTo()const{DBOX_CHECK_STATE((RelocationError_TO == m_tag), "expected tag: RelocationError_TO", m_tag);return m_to;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RelocationError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_from_lookup;
        WriteError m_from_write;
        WriteError m_to;
    };//RelocationError

}//files
}//dropboxQt
