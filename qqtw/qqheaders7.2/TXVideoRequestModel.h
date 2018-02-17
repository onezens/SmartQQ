//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TXVideoRequestModel : NSObject
{
    _Bool _needHttps;
    NSString *_bid;
    NSString *_title;
    NSString *_tags;
    NSString *_cat;
    NSString *_videoCat;
    NSString *_videoSubCat;
    NSString *_filePath;
    NSString *_thumbnail;
    NSString *_vid;
    NSString *_desc;
    NSString *_md5;
}

@property(retain, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(retain, nonatomic) NSString *cat; // @synthesize cat=_cat;
- (void)dealloc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)initWithBid:(id)arg1 filePath:(id)arg2 thumbnail:(id)arg3;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool needHttps; // @synthesize needHttps=_needHttps;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *videoCat; // @synthesize videoCat=_videoCat;
@property(retain, nonatomic) NSString *videoSubCat; // @synthesize videoSubCat=_videoSubCat;

@end

