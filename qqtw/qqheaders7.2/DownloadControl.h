//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DownloadControl : NSObject
{
    unsigned int _allow_download;
    unsigned int _danger_level;
    unsigned int _rename_file;
    NSString *_risk_tips;
    int _xo;
}

- (void)dealloc;
- (void)decodeWithProto:(void *)arg1;

// Remaining properties
@property(nonatomic) unsigned int allow_download; // @dynamic allow_download;
@property(nonatomic) unsigned int danger_level; // @dynamic danger_level;
@property(nonatomic) unsigned int rename_file; // @dynamic rename_file;
@property(copy, nonatomic) NSString *risk_tips; // @dynamic risk_tips;

@end

