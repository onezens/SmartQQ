//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@protocol RCTBridgeModule <NSObject>
+ (NSString *)moduleName;

@optional
- (void)batchDidComplete;
@property(readonly, nonatomic) __weak RCTBridge *bridge;
- (NSDictionary *)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (NSArray *)methodsToExport;
- (void)partialBatchDidFlush;
@end

