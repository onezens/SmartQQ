//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQTorchDisableStorage : NSObject
{
    NSMutableDictionary *_disableDic;
}

- (void).cxx_destruct;
- (void)asynGetTorchDisable:(id)arg1;
- (void)asynGetTorchDisableIfEnable:(id)arg1;
- (void)asynGetTorchDisableList:(id)arg1;
- (void)asynGetTorchDisableListIfEnable:(id)arg1 key:(id)arg2 limits:(double)arg3;
- (void)asynLoadFromFile;
- (void)asynSaveToFile;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *disableDic; // @synthesize disableDic=_disableDic;
- (id)init;
- (id)path;
- (void)receivedDidGetTorchDisableFlag:(id)arg1;
- (void)receivedFailedGetTorchDisableFlag:(id)arg1;
- (void)saveTorchDisable:(_Bool)arg1 withUin:(id)arg2;
- (void)saveTorchDisableDic:(id)arg1;
- (_Bool)torchDisable:(id)arg1;
- (id)torchDisableKeyForUserDefaults:(id)arg1;

@end

