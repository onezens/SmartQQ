//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface RichMediaToastTipManager : NSObject
{
    NSMutableDictionary *_picUploadTips;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)addUploadFailTip:(id)arg1 chatType:(long long)arg2 uin:(id)arg3 aioDelegate:(id)arg4;
- (void)checkUploadTipWithUin:(id)arg1 chatType:(long long)arg2 aioDelegate:(id)arg3;
- (id)getTipKeyWithUin:(id)arg1 chatType:(long long)arg2;
- (id)getTipMsg:(id)arg1;
- (id)init;
- (void)removeUploadTipWithUin:(id)arg1 chatType:(long long)arg2;

@end

