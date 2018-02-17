//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQAudioSessionManagerDelegate.h"

@class NSString, NSTimer;

@interface QZVideoFloatingWindowAdapter : NSObject <QQAudioSessionManagerDelegate>
{
    NSTimer *_checkInQzoneTimer;
    _Bool _isInterrupted;
    _Bool _isKeyBoardShow;
    _Bool _isScreenLandscape;
    _Bool _isActive;
}

+ (id)instance;
- (void)closeVideoFWOnMainTheadByViewConflict;
- (id)init;
- (void)onExitVideoFloatingWindowByViewConflictNotify:(id)arg1;
- (void)onVideoFloatingWindowCloseNotify:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
