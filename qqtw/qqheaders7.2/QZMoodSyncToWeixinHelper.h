//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQZUrlDownloaderDelegate.h"

@class NSString;

@interface QZMoodSyncToWeixinHelper : NSObject <IQZUrlDownloaderDelegate>
{
    NSString *_context;
}

+ (void)haboReportVideoRecordWithError:(id)arg1 event:(id)arg2;
+ (id)instance;
- (void).cxx_destruct;
- (id)checkAndScaleImage:(id)arg1 imageMaxSize:(unsigned long long)arg2;
- (id)createImageWithImages:(id)arg1 moodContent:(id)arg2 ubbString:(id)arg3 extendInfo:(id)arg4;
- (id)getDateTextFont;
- (id)getFontWithFontName:(id)arg1 fontSize:(long long)arg2;
- (id)getTextFont;
- (void)requestFinished:(id)arg1;
- (void)sendSyncWithImageModels:(id)arg1 ubbString:(id)arg2 extendInfo:(id)arg3;
- (void)sendSyncWithSignImageURL:(id)arg1 content:(id)arg2 extendInfo:(id)arg3;
- (void)sendToWX:(id)arg1 content:(id)arg2;
- (void)showLoadingTips;
- (void)showShareToWeChatWithImages:(id)arg1 withSocialType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

