//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FADataSouceBase.h"

@class NSMutableDictionary;

@interface FACategoryDataSouce : FADataSouceBase
{
    NSMutableDictionary *_tabDic;
}

- (_Bool)compareFile:(id)arg1 model2:(id)arg2;
- (void)dealloc;
- (void)didDeleteFile:(id)arg1;
- (void)didReadFileListDone:(id)arg1;
- (id)getDeviceSupportTabArray;
- (void)initTabDic;
- (id)initWithInfo:(struct FAListInfo)arg1;
- (id)initWithSmartDeviceInfo:(struct FASmartDeviceInfo)arg1;
- (id)initWithType:(int)arg1;
@property(readonly, nonatomic) NSMutableDictionary *tabDic; // @synthesize tabDic=_tabDic;

@end
