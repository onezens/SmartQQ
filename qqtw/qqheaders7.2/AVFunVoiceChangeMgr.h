//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AVFunVoiceChangeMgr : NSObject
{
    NSMutableArray *_voiceTypeInfoes;
}

+ (id)shareMgr;
- (id)basicPath;
- (id)configPath;
- (void)dealloc;
- (id)getConfigFromCache;
- (void)preDownload:(id)arg1;
- (void)saveConfigureation:(id)arg1;
@property(retain, nonatomic) NSMutableArray *voiceTypeInfoes; // @synthesize voiceTypeInfoes=_voiceTypeInfoes;
- (id)voiceTypeInfoForType:(int)arg1;

@end

