//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAsynDownloadImageObserver.h"

@class NSMutableArray, NSString;

@interface AVFunDecoMrg : NSObject <IAsynDownloadImageObserver>
{
    _Bool _isDetectGesture;
    id <MCTempManagerDelegate> _delegate;
    NSMutableArray *_decorateArray;
    NSMutableArray *_unShowDecorateArray;
}

+ (_Bool)cacheDataIsEmpty;
+ (void)clearMulOldCache:(id)arg1;
+ (void)clearOldCache:(id)arg1;
+ (id)decorateItemArrayFrom:(id)arg1;
+ (id)decorationConfigPath;
+ (long long)gestureGapFrame;
+ (double)gestureGapTime;
+ (id)getDecorationConfigFromCache;
+ (id)getInstance;
+ (id)getMulScreenDecorationConfigFromCache;
+ (id)mulScreenDecorationConfigPath;
+ (void)preDownload:(id)arg1;
+ (void)saveDecoConfigureation:(id)arg1;
+ (void)saveMulScreenDecoConfigureation:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *decorateArray; // @synthesize decorateArray=_decorateArray;
@property(nonatomic) id <MCTempManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadImageFinished:(id)arg1;
- (id)getDecorationArray;
- (id)getDecorationArrayIgnoreIcon;
- (_Bool)getDetectGesture;
- (id)getUnShowArray;
@property(nonatomic) _Bool isDetectGesture; // @synthesize isDetectGesture=_isDetectGesture;
- (id)localDefaultConfig;
- (void)removeDecorate;
@property(retain, nonatomic) NSMutableArray *unShowDecorateArray; // @synthesize unShowDecorateArray=_unShowDecorateArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

