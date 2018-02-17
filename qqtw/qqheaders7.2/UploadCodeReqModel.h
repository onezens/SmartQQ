//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface UploadCodeReqModel : NSObject
{
    NSString *_bid;
    NSString *_vid;
    NSString *_fid;
    unsigned long long _size;
    NSString *_sha;
    NSString *_md5;
    NSString *_platform;
    double _duration;
    NSString *_demuxer;
    NSString *_vformat;
    NSString *_vcodec;
    unsigned long long _vbitrate;
    unsigned long long _vwidth;
    unsigned long long _vheight;
    unsigned long long _vfps;
    double _vaspect;
    NSString *_aformat;
    NSString *_acodec;
    unsigned long long _abitrate;
    unsigned long long _arate;
    unsigned long long _anch;
    NSString *_vprofile;
    NSString *_vlevel;
    NSData *_Filedata;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *Filedata; // @synthesize Filedata=_Filedata;
@property(nonatomic) unsigned long long abitrate; // @synthesize abitrate=_abitrate;
@property(copy, nonatomic) NSString *acodec; // @synthesize acodec=_acodec;
@property(copy, nonatomic) NSString *aformat; // @synthesize aformat=_aformat;
@property(nonatomic) unsigned long long anch; // @synthesize anch=_anch;
@property(nonatomic) unsigned long long arate; // @synthesize arate=_arate;
@property(copy, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(copy, nonatomic) NSString *demuxer; // @synthesize demuxer=_demuxer;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *fid; // @synthesize fid=_fid;
- (id)generatePostBody;
- (id)initModel:(id)arg1 thumbnail:(id)arg2 ftnModel:(id)arg3 bid:(id)arg4;
@property(nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) NSString *sha; // @synthesize sha=_sha;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) double vaspect; // @synthesize vaspect=_vaspect;
@property(nonatomic) unsigned long long vbitrate; // @synthesize vbitrate=_vbitrate;
@property(copy, nonatomic) NSString *vcodec; // @synthesize vcodec=_vcodec;
@property(copy, nonatomic) NSString *vformat; // @synthesize vformat=_vformat;
@property(nonatomic) unsigned long long vfps; // @synthesize vfps=_vfps;
@property(nonatomic) unsigned long long vheight; // @synthesize vheight=_vheight;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *vlevel; // @synthesize vlevel=_vlevel;
@property(copy, nonatomic) NSString *vprofile; // @synthesize vprofile=_vprofile;
@property(nonatomic) unsigned long long vwidth; // @synthesize vwidth=_vwidth;
- (void)utfAppendBody:(id)arg1 data:(id)arg2;

@end

