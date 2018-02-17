//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AvatarServiceDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQGroupEnterEffectAvatarService : NSObject <AvatarServiceDelegate>
{
    NSMutableDictionary *_blockDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *blockDict; // @synthesize blockDict=_blockDict;
- (void)didFailedDownloadingImage:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 avatarInfo:(id)arg5;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (id)init;
- (void)loadAvatar:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 expiration:(double)arg5 completionBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

