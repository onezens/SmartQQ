//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVKLiteVideoSetDataController.h"

@class NSMutableArray, NSString;

@interface TVKLiteVideoGetvinfoDataController : TVKLiteVideoSetDataController
{
    _Bool _isSInfo;
    NSMutableArray *_hlsUrls;
    NSString *_hlsFileName;
    NSString *_vt;
    long long _formatid;
}

- (void)dealloc;
- (void)enscapeData:(id)arg1 withDataUserInfo:(id)arg2;
@property(nonatomic) long long formatid; // @synthesize formatid=_formatid;
@property(copy, nonatomic) NSString *hlsFileName; // @synthesize hlsFileName=_hlsFileName;
@property(retain, nonatomic) NSMutableArray *hlsUrls; // @synthesize hlsUrls=_hlsUrls;
- (id)initWithInterfaceType:(long long)arg1;
@property(readonly, nonatomic) _Bool isHLS;
@property(readonly, nonatomic) _Bool isSInfo; // @synthesize isSInfo=_isSInfo;
- (void)parseHLSInfoData:(id)arg1 withDataUserInfo:(id)arg2;
- (void)parseSInfoData:(id)arg1 withDataUserInfo:(id)arg2;
@property(copy, nonatomic) NSString *vt; // @synthesize vt=_vt;

@end

