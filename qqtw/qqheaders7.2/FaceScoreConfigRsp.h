//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AutoPbModel.h"

@class ClientConfigRsp_0x938, FloatButtonConfig_0x938;

@interface FaceScoreConfigRsp : AutoPbModel
{
    ClientConfigRsp_0x938 *_clientConfig;
    FloatButtonConfig_0x938 *_floatButtonConfig;
}

@property(retain, nonatomic) ClientConfigRsp_0x938 *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(retain, nonatomic) FloatButtonConfig_0x938 *floatButtonConfig; // @synthesize floatButtonConfig=_floatButtonConfig;
- (id)getPropertyInfos;

@end

