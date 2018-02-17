//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ClickRecordViewProtocol.h"

@class NSString, QQGroupTribeClickRecordViewController, UIWindow;

@interface QQGroupTribeRecordView : UIView <ClickRecordViewProtocol>
{
    QQGroupTribeClickRecordViewController *_recordView;
    UIWindow *_maskForNavTitle;
    id <QQGroupTribeRecordProtocol> _theDelegate;
    _Bool _recording;
}

- (void)dealloc;
- (void)endRecord;
- (void)hideMaskView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 noMask:(_Bool)arg3;
- (void)onRecordCanceled:(id)arg1;
- (void)onRecordSend:(id)arg1 recordPath:(id)arg2 recordTime:(int)arg3;
- (void)onRecordStarted:(id)arg1;
- (void)setPttFormat:(int)arg1;
- (void)setRecordMaxLength:(int)arg1;
- (void)showMaskView;
- (void)singleTapMaskView;
- (void)startRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

