//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, UIWindow;

@interface DeepathNodeTracker : NSObject
{
    _Bool _enableTrack;
    NSString *_mainVC;
    _Bool _isLuanch;
    double _lastValidTime;
    NSObject<OS_dispatch_queue> *_deepathQueue;
    NSMutableArray *_recordedNodes;
    UIWindow *_mainWindow;
}

+ (id)getInstance;
- (void)addEventToCurrentNode:(id)arg1;
- (void)addTouchEvent:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)appDidEnterbackground;
- (void)appWillEnterforground;
- (void)appWillTerminate;
- (_Bool)checkAndStopTrackIfNotDefaultFont;
- (id)createNode:(id)arg1 time:(double)arg2;
- (void)dealloc;
- (id)deepathMetaDir;
- (id)getRecordedNodesMeta;
- (id)init;
@property(nonatomic) UIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
- (void)registerUploadCallback:(CDUnknownFunctionPointerType)arg1;
- (void)saveRecordedNodesMeta;
- (void)startTrackWithMainNode:(id)arg1;
- (void)stopTrack;
- (void)updateCurrentNodeDuration:(double)arg1;
- (void)uploadLastNodeMetaToAPM;

@end

