//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSArray, NSString;

@interface TBReqDelStoryVideoModel : NSObject <ITBPBGetData>
{
    NSArray *_vidAry;
    NSString *_unionID;
}

- (void)dealloc;
- (id)getRequestPBData;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(retain, nonatomic) NSArray *vidAry; // @synthesize vidAry=_vidAry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

