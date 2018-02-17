//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QQFaceHistoryFrameView;

@interface QQFaceDataManager : NSObject
{
    NSMutableArray *_faceTabData;
    QQFaceHistoryFrameView *_historyFrameView;
}

+ (id)dataManager;
- (id)currentFaceDataItemWithData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *faceTabData; // @synthesize faceTabData=_faceTabData;
- (id)getFaceDataItemByTabType:(int)arg1;
@property(retain, nonatomic) QQFaceHistoryFrameView *historyFrameView; // @synthesize historyFrameView=_historyFrameView;
- (id)init;
- (id)lastFaceDataItemWithItem:(id)arg1;
- (id)nextFaceDataItemWithItem:(id)arg1;
- (_Bool)p_compareArrayA:(id)arg1 arrayB:(id)arg2;
- (_Bool)p_compareWithItemA:(id)arg1 itemB:(id)arg2;
- (void)updateDataManager;
- (void)updateDataManagerForQQAndEmoji;
- (void)updateDataManagerForSys;
- (void)updateDataManagerForSysAndCus;

@end
