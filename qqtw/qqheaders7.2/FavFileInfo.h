//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class DownloadFileInfo, FastUploadFileResult, FileInfo, OnlinePreviewInfo;

@interface FavFileInfo : NSObject <NSCoding>
{
    FileInfo *_file_info;
    FastUploadFileResult *_fast_upload_file_result;
    DownloadFileInfo *_download_file_info;
    OnlinePreviewInfo *_online_preview_info;
    int _xo;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileInfo:(id)arg1;

// Remaining properties
@property(retain, nonatomic) DownloadFileInfo *download_file_info; // @dynamic download_file_info;
@property(retain, nonatomic) FastUploadFileResult *fast_upload_file_result; // @dynamic fast_upload_file_result;
@property(retain, nonatomic) FileInfo *file_info; // @dynamic file_info;
@property(retain, nonatomic) OnlinePreviewInfo *online_preview_info; // @dynamic online_preview_info;

@end

