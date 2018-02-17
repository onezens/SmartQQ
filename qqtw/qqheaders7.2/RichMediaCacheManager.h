//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RichMediaCacheManager : NSObject
{
    NSString *_clientIp;
    int _msfApnReachType;
}

+ (id)getInstance;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (id)getRdmDownloadEvent:(id)arg1 getPicSizeType:(int)arg2;
- (id)getRdmDownloadInfo:(id)arg1;
- (_Bool)handleDownloadCachePic:(id)arg1;
- (void)handleDownloadGifPic:(id)arg1 picMd5:(id)arg2 getPicSizeType:(int)arg3;
- (_Bool)handleDownloadOriginalPic:(id)arg1 picMd5:(id)arg2 getPicSizeType:(int)arg3;
- (void)handleDownloadSmallPicIfGif:(id)arg1;
- (void)handleNewThumbImageFinish:(id)arg1;
- (id)init;
- (void)notfiyApnReachableChange:(int)arg1;

@end
