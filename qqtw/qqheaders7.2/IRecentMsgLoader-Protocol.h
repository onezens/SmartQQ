//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol IRecentMsgLoader <NSObject>
- (void)addObserver:(id <IRecentMsgLoaderDelegate>)arg1;
- (void)clearRecentDBSync;
- (void)deleRecentFile;
- (NSArray *)loadDBFriendMsgs;
- (NSArray *)loadDBRecentMsgs;
- (void)loadLowLevelMessage;
- (NSArray *)loadRecentMsg;
- (void)resignObserver:(id <IRecentMsgLoaderDelegate>)arg1;
- (void)saveRecentMsg:(NSArray *)arg1;
- (void)setDelegate:(id <IRecentMsgLoaderDelegate>)arg1;
@end

