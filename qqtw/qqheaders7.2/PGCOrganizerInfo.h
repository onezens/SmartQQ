//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString;

@interface PGCOrganizerInfo : QQModel <NSCopying>
{
    NSString *_hostName;
    NSString *_hostUrl;
    NSString *_hostCover;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *hostCover; // @synthesize hostCover=_hostCover;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) NSString *hostUrl; // @synthesize hostUrl=_hostUrl;

@end

