//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMItemElementPictureView.h"

@class NSString, QQAIOSMMessageModel, UIImageView;

@interface QQSMItemElementAudioView : QQSMItemElementPictureView
{
    QQAIOSMMessageModel *_cellModel;
    int _musicState;
    NSString *_srcUrl;
    UIImageView *_statusView;
}

- (void)dealloc;
- (void)handleMusicPlayError:(id)arg1;
- (void)handleQQMusicSharePlayStateNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)logReportActionWith:(id)arg1;
- (void)setCellModel:(id)arg1;
- (void)setMusicState:(int)arg1;
- (void)setQQSMItemElementBase:(id)arg1;

@end

