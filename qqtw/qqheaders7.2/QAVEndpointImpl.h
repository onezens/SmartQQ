//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAVEndpoint.h"

@class NSString;

@interface QAVEndpointImpl : QAVEndpoint
{
    _Bool _isAudio;
    _Bool _isLinkedRoomUser;
    _Bool _isCameraVideo;
    _Bool _isScreenVideo;
    _Bool _isMediaVideo;
    NSString *_identifier;
}

- (id)identifier;
- (_Bool)isAudio;
- (_Bool)isCameraVideo;
- (_Bool)isLinkedRoomUser;
- (_Bool)isMediaVideo;
- (_Bool)isScreenVideo;
- (void)setIdentifier:(id)arg1;
- (void)setIsAudio:(_Bool)arg1;
- (void)setIsCameraVideo:(_Bool)arg1;
- (void)setIsLinkedRoomUser:(_Bool)arg1;
- (void)setIsMediaVideo:(_Bool)arg1;
- (void)setIsScreenVideo:(_Bool)arg1;

@end

