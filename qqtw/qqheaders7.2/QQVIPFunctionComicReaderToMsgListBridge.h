//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface QQVIPFunctionComicReaderToMsgListBridge : NSObject
{
    NSMutableArray *_needToSaveWhenPopVCArrs;
    int _xo;
    unsigned long long _tabBarIndexOfComicReader;
    NSString *_curReadingComicName;
}

+ (id)sharedInstance;
- (void)clearViewControllers;
- (void)dealloc;
- (void)disMissLittleBlueTipsOfMsgListIfNeed;
- (long long)getViewControllersOfNeedToPushCount;
- (id)init;
- (void)jumpToRecentMessageList:(id)arg1;
- (void)onQQVIPFunctionTipsViewHasRemoved:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *needToSaveWhenPopVCArrs; // @dynamic needToSaveWhenPopVCArrs;

@end

