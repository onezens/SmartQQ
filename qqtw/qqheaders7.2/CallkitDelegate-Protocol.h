//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVID;

@protocol CallkitDelegate <NSObject>
- (void)onCallkitAccept:(AVID *)arg1;
- (void)onCallkitActivate:(AVID *)arg1;
- (void)onCallkitDeactivate:(AVID *)arg1;
- (void)onCallkitEnd:(AVID *)arg1;
- (void)onCallkitHold:(AVID *)arg1 hold:(_Bool)arg2;
- (void)onCallkitMute:(AVID *)arg1 mute:(_Bool)arg2;
- (void)onCallkitSpeaker:(AVID *)arg1 speaker:(_Bool)arg2;
- (void)onCallkitStart:(AVID *)arg1;
@end

