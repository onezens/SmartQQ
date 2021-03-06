//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, QZLVMusicContent;

@interface QZLVMusicModel : NSObject
{
    NSMutableDictionary *_mapContent;
    int _iHasCp;
    QZLVMusicContent *_curContent;
    _Bool _isQrc;
    NSString *_strKSongMid;
    long long _iAdjust;
    NSString *_strCoverUrl;
    NSString *_strAccompanyFileUrl;
    NSString *_strSongFileUrl;
}

- (void).cxx_destruct;
- (void)analyseContent;
- (_Bool)canChangeOriginAccompany;
- (_Bool)canDownloadAccompany;
- (_Bool)canDownloadOrigin;
@property(nonatomic) long long iAdjust; // @synthesize iAdjust=_iAdjust;
- (id)initWithKGInfo:(id)arg1;
@property(nonatomic) _Bool isQrc; // @synthesize isQrc=_isQrc;
- (id)lyricStr;
@property(retain, nonatomic) NSString *strAccompanyFileUrl; // @synthesize strAccompanyFileUrl=_strAccompanyFileUrl;
@property(retain, nonatomic) NSString *strCoverUrl; // @synthesize strCoverUrl=_strCoverUrl;
@property(retain, nonatomic) NSString *strKSongMid; // @synthesize strKSongMid=_strKSongMid;
@property(retain, nonatomic) NSString *strSongFileUrl; // @synthesize strSongFileUrl=_strSongFileUrl;
- (id)toastStr;

@end

