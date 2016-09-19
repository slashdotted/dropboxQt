/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{
namespace files{
    class ThumbnailError{
        /**
            field: path: An error occurs when downloading metadata for the
                image.
            field: unsupported_extension: The file extension doesn't allow
                conversion to a thumbnail.
            field: unsupported_image: The image cannot be converted to a
                thumbnail.
            field: conversion_error: An error occurs during thumbnail
                conversion.
        */
    public:
        enum Tag{

		/*An error occurs when downloading metadata for the image.*/
		ThumbnailError_PATH,
		/*The file extension doesn't allow conversion to a thumbnail.*/
		ThumbnailError_UNSUPPORTED_EXTENSION,
		/*The image cannot be converted to a thumbnail.*/
		ThumbnailError_UNSUPPORTED_IMAGE,
		/*An error occurs during thumbnail conversion.*/
		ThumbnailError_CONVERSION_ERROR
        };

        ThumbnailError(){}
        ThumbnailError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///An error occurs when downloading metadata for the image.
        LookupError getPath()const{DBOX_CHECK_STATE((ThumbnailError_PATH == m_tag), "expected tag: ThumbnailError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ThumbnailError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
    };//ThumbnailError

}//files
}//dropboxQt
