//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVideoEffectCommon.h"

@class NSArray;

@interface QQVideoMergeSession : QQVideoEffectCommon
{
    NSArray *_assetPaths;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *assetPaths; // @synthesize assetPaths=_assetPaths;
- (void)mergeAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_mergeVideoAsynchronouslyTo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

