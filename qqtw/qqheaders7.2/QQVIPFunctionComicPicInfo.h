//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQVIPFunctionComicPicInfo : NSObject
{
    NSMutableDictionary *_seqCompletionDict;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)checkComicPicWords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)getMyCollectPicCount:(CDUnknownBlockType)arg1;
- (id)init;
- (void)onReceiveNetData:(id)arg1;
- (void)onReceivedCheckWordsResult:(id)arg1;
- (void)onReceivedMyCollectPicCount:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *seqCompletionDict; // @synthesize seqCompletionDict=_seqCompletionDict;

@end

