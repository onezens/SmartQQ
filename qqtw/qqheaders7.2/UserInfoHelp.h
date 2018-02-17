//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AvatarServiceDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface UserInfoHelp : NSObject <AvatarServiceDelegate>
{
    NSArray *_uinList;
    unsigned long long _unFinishCount;
    id <UserInfoDelegate> _delegate;
    NSMutableArray *_finishList;
}

+ (id)getNickForUin:(unsigned long long)arg1 withSessionType:(unsigned long long)arg2 withGroupUin:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <UserInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailedDownloadingImage:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 avatarInfo:(id)arg5;
- (void)didFailedGetAvatarInfo:(id)arg1 type:(int)arg2;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
@property(retain, nonatomic) NSMutableArray *finishList; // @synthesize finishList=_finishList;
- (void)finishLoadUserInfo:(id)arg1;
- (void)getUserInfoWithUinList:(id)arg1 withDelegte:(id)arg2;
- (void)handImage:(id)arg1 withUin:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSArray *uinList; // @synthesize uinList=_uinList;
@property(nonatomic) unsigned long long unFinishCount; // @synthesize unFinishCount=_unFinishCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
