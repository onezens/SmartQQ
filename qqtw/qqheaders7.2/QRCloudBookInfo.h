//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QRCloudBookInfo : NSObject
{
    long long _bookid;
    NSString *_title;
    NSString *_author;
    NSString *_formart;
    int _type;
    int _isfinished;
    int _offset;
    int _chapterid;
    long long _updatetime;
    int _maxchapter;
    int _downloadable;
    int _canreade;
    long long _gtime;
    int _follow;
    NSString *_lastChapterName;
    int _xo;
    _Bool _isUnpublished;
    _Bool _isPrivate;
    long long _lastUploadTime;
    long long _addbookshelftime;
    NSString *_intro;
}

@property(nonatomic) long long addbookshelftime; // @synthesize addbookshelftime=_addbookshelftime;
- (void)dealloc;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) _Bool isUnpublished; // @synthesize isUnpublished=_isUnpublished;
@property(nonatomic) long long lastUploadTime; // @synthesize lastUploadTime=_lastUploadTime;
- (id)newBookInfo;
- (void)updateQRbookInfo:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(nonatomic) long long bookid; // @dynamic bookid;
@property(nonatomic) int canreade; // @dynamic canreade;
@property(nonatomic) int chapterid; // @dynamic chapterid;
@property(nonatomic) int downloadable; // @dynamic downloadable;
@property(nonatomic) int follow; // @dynamic follow;
@property(retain, nonatomic) NSString *formart; // @dynamic formart;
@property(nonatomic) long long gtime; // @dynamic gtime;
@property(nonatomic) int isfinished; // @dynamic isfinished;
@property(retain, nonatomic) NSString *lastChapterName; // @dynamic lastChapterName;
@property(nonatomic) int maxchapter; // @dynamic maxchapter;
@property(nonatomic) int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) long long updatetime; // @dynamic updatetime;

@end

