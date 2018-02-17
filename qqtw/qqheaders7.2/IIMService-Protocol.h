//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, UIImage, UIViewController;

@protocol IIMService <NSObject>
- (unsigned int)getGroupSendMessageRandom;
- (NSString *)getIMEI;
- (unsigned long long)notificationCount;
- (void)postRegisteNotification:(NSString *)arg1 Object:(id)arg2 userInfo:(NSDictionary *)arg3;
- (void)postRegisteNotification:(NSString *)arg1 Object:(id)arg2 userInfo:(NSDictionary *)arg3 priority:(_Bool)arg4;
- (_Bool)registerNotification:(id)arg1;
- (void)removeNotificationObserver;
- (void)shareToFriend:(NSString *)arg1 summary:(NSString *)arg2 img:(UIImage *)arg3 appName:(NSString *)arg4 appId:(unsigned int)arg5 url:(NSString *)arg6 currentController:(UIViewController *)arg7 fileType:(NSString *)arg8 flashUrl:(NSString *)arg9;
- (void)shareToFriend:(NSString *)arg1 summary:(NSString *)arg2 img:(UIImage *)arg3 appName:(NSString *)arg4 appId:(unsigned int)arg5 url:(NSString *)arg6 currentController:(UIViewController *)arg7 fileType:(NSString *)arg8 flashUrl:(NSString *)arg9 previewImageURL:(NSString *)arg10 isPushInViewController:(_Bool)arg11;
- (void)shareToFriend:(NSString *)arg1 summary:(NSString *)arg2 img:(UIImage *)arg3 appName:(NSString *)arg4 appId:(unsigned int)arg5 url:(NSString *)arg6 currentController:(UIViewController *)arg7 fileType:(NSString *)arg8 flashUrl:(NSString *)arg9 previewImageURL:(NSString *)arg10 isStructMsg:(_Bool)arg11 structMsgParam:(NSDictionary *)arg12 isPushInViewController:(_Bool)arg13;
- (void)shareToFriend:(NSString *)arg1 title:(NSString *)arg2 summary:(NSString *)arg3 img:(UIImage *)arg4 appName:(NSString *)arg5 appId:(unsigned int)arg6 url:(NSString *)arg7 currentController:(UIViewController *)arg8 fileType:(NSString *)arg9 flashUrl:(NSString *)arg10 previewImageURL:(NSString *)arg11 isPushInViewController:(_Bool)arg12;
- (void)synEnterChatListController;
- (_Bool)synInsertMsgToDB:(NSArray *)arg1;
- (_Bool)synInsertMsgToDBInMicroMute:(NSArray *)arg1;
- (_Bool)synInsertMsgToDBWithoutNotification:(NSArray *)arg1;
- (void)updateAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateMultiAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateVideoNetFlow:(int)arg1 size:(unsigned long long)arg2;
@end
