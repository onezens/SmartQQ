//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@class NSString, QQGroupFileCellView, QQGroupFileInfo, QQGroupFileTask;

@interface QQGroupFileAIOModel : QQAIOMsgModel
{
    double _cellHeight;
    NSString *_fileName;
    QQGroupFileInfo *_fileInfo;
    QQGroupFileTask *_task;
    unsigned long long _fileSize;
    QQGroupFileCellView *_cellView;
    struct CGSize _imageBubbleSize;
}

+ (id)modelWithMessageModel:(id)arg1;
- (void).cxx_destruct;
- (_Bool)allowPreviewImage;
- (_Bool)allowPreviewVideo;
- (void)calculateBubbleImageSizeWithOriginImageSize:(struct CGSize)arg1;
- (id)cellClassName;
- (double)cellHeight;
@property(nonatomic) __weak QQGroupFileCellView *cellView; // @synthesize cellView=_cellView;
- (id)cellViewClassName;
- (void)dealloc;
@property(readonly, nonatomic) QQGroupFileInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) struct CGSize imageBubbleSize; // @synthesize imageBubbleSize=_imageBubbleSize;
- (id)initWithMessageModel:(id)arg1;
@property(readonly, nonatomic) NSString *localPath;
- (void)reloadBubbleSize;
- (_Bool)shouldDisplaySelfNick;
@property(readonly, nonatomic) QQGroupFileTask *task; // @synthesize task=_task;
- (void)transferProgressChanged:(id)arg1;
- (void)transferStatusChanged:(id)arg1;
@property(readonly, nonatomic) unsigned long long videoDuration;

@end

