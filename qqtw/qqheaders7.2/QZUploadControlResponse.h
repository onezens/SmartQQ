//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZUploadResponse.h"

@class NSString;

@interface QZUploadControlResponse : QZUploadResponse
{
    long long _offset;
    long long _sliceSize;
    NSString *_redirectIp;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *redirectIp; // @synthesize redirectIp=_redirectIp;
@property(nonatomic) long long sliceSize; // @synthesize sliceSize=_sliceSize;

@end
