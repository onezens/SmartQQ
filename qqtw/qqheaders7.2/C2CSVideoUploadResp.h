//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePicUploadResp.h"

@class NSString;

@interface C2CSVideoUploadResp : BasePicUploadResp
{
    NSString *_uuid;
    _Bool _isHotFile;
}

- (void)dealloc;
@property(nonatomic) _Bool isHotFile; // @synthesize isHotFile=_isHotFile;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end

