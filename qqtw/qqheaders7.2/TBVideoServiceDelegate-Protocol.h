//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@protocol TBVideoServiceDelegate <NSObject>

@optional
- (void)updateUploadingVideoSize:(long long)arg1 withVideoPath:(NSString *)arg2 withUserData:(id)arg3;
- (void)uploadVideoBegin:(NSString *)arg1 withVideoSize:(long long)arg2 withVideoCover:(NSString *)arg3 withDoodlePath:(NSString *)arg4 withUserData:(id)arg5;
- (void)uploadVideoFail:(NSString *)arg1 withError:(NSError *)arg2 withUserData:(id)arg3;
- (void)uploadVideoProgress:(NSString *)arg1 withProgress:(double)arg2 withUserData:(id)arg3;
- (void)uploadVideoSuccess:(NSString *)arg1 withVideoPath:(NSString *)arg2 withDoodleUrl:(NSString *)arg3 withDoodlePath:(NSString *)arg4 withThumbPath:(NSString *)arg5 withResultDict:(NSDictionary *)arg6 withUserData:(id)arg7;
@end

