//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIORichModel.h"

#import "QQAIOFAModel.h"

@class FAModel, NSString, QQChatImageMetaInfo;

@interface QQAIOFileImgModel : QQAIORichModel <QQAIOFAModel>
{
    FAModel *_fileModel;
    _Bool _isDownloadingThumb;
    unsigned long long _uJobId;
    _Bool _aioThumbFail;
    QQChatImageMetaInfo *_imageMetaInfo;
    int _mediaType;
}

+ (id)getImageMetaInfo:(id)arg1;
+ (id)modeWithMessageModelAsync:(id)arg1;
+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) _Bool aioThumbFail; // @synthesize aioThumbFail=_aioThumbFail;
- (_Bool)canPhotoBrowser;
- (void)cancelSendFile;
- (id)cellClassName;
- (double)cellHeight;
- (id)cellViewClassName;
- (void)dealloc;
- (void)downThumb;
- (_Bool)downloading;
- (id)eventHandleClassName;
@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
- (struct CGSize)getChatFitSize;
- (id)getChatImageMetaInfo;
- (id)initWithMessageModel:(id)arg1;
- (id)initWithMessageModel:(id)arg1 syncFAModel:(_Bool)arg2;
- (_Bool)isSendCanceled;
- (_Bool)loading;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
- (void)prepareFileToImageSendPath;
- (id)process;
- (void)removeChatImageMetaInfo;
- (void)removeThumbFromCache;
- (void)syncFileModel;
- (_Bool)uploading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDownloadingThumb; // @dynamic isDownloadingThumb;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long uJobId; // @dynamic uJobId;

@end

