//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FileBaseTask.h"

@class NSData;

@interface WifiPhotoSendTask : FileBaseTask
{
    long long _toUin;
    NSData *_sendData;
}

- (void)dealloc;
@property(retain, nonatomic) NSData *sendData; // @synthesize sendData=_sendData;
@property(nonatomic) long long toUin; // @synthesize toUin=_toUin;

@end

