/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ListFolderLongpollError{
        /**
            field: reset: Indicates that the cursor has been invalidated. Call
                :meth:`list_folder` to obtain a new cursor.
        */
    public:
        enum Tag{

		/*Indicates that the cursor has been invalidated. Call :route:`list_folder` to obtain a new cursor.*/
		ListFolderLongpollError_RESET,
		/*None*/
		ListFolderLongpollError_OTHER
        };

        ListFolderLongpollError(){}
        ListFolderLongpollError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderLongpollError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ListFolderLongpollError

}//files
}//dropboxQt