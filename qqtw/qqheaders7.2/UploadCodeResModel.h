//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UploadCodeResModel : NSObject
{
    long long _em;
    NSString *_msg;
    NSString *_s;
    NSString *_vid;
    NSString *_fid;
    long long _txvideo_em;
}

- (void).cxx_destruct;
@property(nonatomic) long long em; // @synthesize em=_em;
@property(retain, nonatomic) NSString *fid; // @synthesize fid=_fid;
- (id)initWithDic:(id)arg1;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *s; // @synthesize s=_s;
@property(nonatomic) long long txvideo_em; // @synthesize txvideo_em=_txvideo_em;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;

@end
