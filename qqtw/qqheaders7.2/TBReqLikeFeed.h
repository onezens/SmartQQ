//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSString;

@interface TBReqLikeFeed : NSObject <ITBPBGetData>
{
    unsigned int _operation;
    unsigned int _type;
    NSString *_feedID;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (id)getRequestPBData;
@property(nonatomic) unsigned int operation; // @synthesize operation=_operation;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

