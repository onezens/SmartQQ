//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQDynamicAvatarConfigModel;

@interface QQDynamicAvatarConfigManager : NSObject
{
    QQDynamicAvatarConfigModel *_configModel;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) QQDynamicAvatarConfigModel *configModel; // @synthesize configModel=_configModel;
- (void)dealloc;
- (void)getConfigInfo;
- (id)init;
- (void)updateDpcConfig:(id)arg1;

@end

