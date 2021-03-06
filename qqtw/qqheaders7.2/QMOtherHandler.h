//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMusicJSHandler.h"

#import "SDWebImageManagerDelegate.h"

@class NSString;

@interface QMOtherHandler : QMusicJSHandler <SDWebImageManagerDelegate>
{
    unsigned long long radiusFromH5;
}

+ (id)image2String:(id)arg1;
- (void)addMaskImgProc;
- (void)addShareGeneProc;
- (void)addShareMusicProc;
- (void)blurImage:(id)arg1 key:(id)arg2;
- (void)blurImagePath:(id)arg1 img:(id)arg2;
- (void)blurImageURL:(id)arg1;
- (void)blurThread:(id)arg1;
- (void)registeHandler;
- (void)shareToFriend:(id)arg1 serviceID:(id)arg2;
- (void)webImageManager:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2 forURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

