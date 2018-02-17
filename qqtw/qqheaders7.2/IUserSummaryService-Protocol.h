//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, UIImage, UserSummaryModel;

@protocol IUserSummaryService <NSObject>
- (void)cancelUploadAvatar;
- (UserSummaryModel *)getModelWithUin:(long long)arg1;
- (void)openUsersummaryPage:(long long)arg1 type:(int)arg2;
- (UserSummaryModel *)reqLtSummary:(unsigned long long)arg1 phoneNum:(NSString *)arg2 completion:(void (^)(NSError *, UserSummaryModel *))arg3;
- (int)requestEIMUserSummary:(long long)arg1;
- (int)requestImportQzonePhotos:(unsigned int)arg1 serviceType:(unsigned int)arg2;
- (_Bool)requestModifyRemark:(long long)arg1 remark:(NSString *)arg2;
- (void)requestQueryImportPhotoStateCompleted:(void (^)(NSError *, UserSummaryModel *, long long))arg1;
- (_Bool)requestReportIllegalUser:(long long)arg1;
- (int)requestSearch:(NSString *)arg1 countryCode:(NSString *)arg2;
- (int)requestSearch:(NSString *)arg1 countryCode:(NSString *)arg2 type:(unsigned int)arg3 start:(unsigned int)arg4 count:(unsigned int)arg5 fliter:(int)arg6;
- (int)requestSessionKeyForUploadImageCompleted:(void (^)(NSError *, NSData *))arg1;
- (int)requestUploadQQFaceWithFileTrans:(UIImage *)arg1 videoList:(NSArray *)arg2 videoInfo:(NSDictionary *)arg3;
- (int)requestUserSummary:(long long)arg1 comeFrom:(int)arg2 groupCode:(long long)arg3 secureSig:(NSData *)arg4;
- (int)requestUserSummary:(long long)arg1 tinyID:(long long)arg2 comeFrom:(int)arg3 groupCode:(long long)arg4 secureSig:(NSData *)arg5 needDateData:(_Bool)arg6 uSource:(int)arg7;
- (int)requestUserSummaryBySearchName:(NSString *)arg1 comeFrom:(int)arg2 groupCode:(long long)arg3;
- (int)requestUserSummaryBySearchName:(NSString *)arg1 comeFrom:(int)arg2 groupCode:(long long)arg3 secureSig:(NSData *)arg4;
- (void)reset;
- (void)saveModelName:(NSString *)arg1 withUin:(long long)arg2;
- (void)setCurModelValue:(UserSummaryModel *)arg1;
@end

