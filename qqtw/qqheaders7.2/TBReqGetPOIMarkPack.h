//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSString, TBGPSModel;

@interface TBReqGetPOIMarkPack : NSObject <ITBPBGetData>
{
    TBGPSModel *_gps;
}

- (void)dealloc;
- (id)getRequestPBData;
@property(retain, nonatomic) TBGPSModel *gps; // @synthesize gps=_gps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

