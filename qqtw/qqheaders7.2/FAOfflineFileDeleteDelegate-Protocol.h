//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol FAOfflineFileDeleteDelegate <NSObject>

@optional
- (void)onOfflineFileDeleteFailedWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(NSString *)arg3 error:(NSError *)arg4;
- (void)onOfflineFileDeleteFinishWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(NSString *)arg3;
@end

