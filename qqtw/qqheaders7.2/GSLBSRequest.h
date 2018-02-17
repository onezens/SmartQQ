//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class GSLocation, NSString;

@interface GSLBSRequest : GSBaseRequest <GSRequestProtocol>
{
    _Bool _shouldRequestAuthorization;
    _Bool _isLoadLocationOnly;
    _Bool _shouldRequestWhenLBSFailed;
    GSLocation *_location;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void *)getRequestBodyString;
- (id)init;
@property(nonatomic) _Bool isLoadLocationOnly; // @synthesize isLoadLocationOnly=_isLoadLocationOnly;
- (void)load;
- (void)loadWithoutCache;
@property(retain, nonatomic) GSLocation *location; // @synthesize location=_location;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (id)parseResponseBodyString:(void *)arg1;
- (unsigned int)serviceNumber;
@property(nonatomic) _Bool shouldRequestAuthorization; // @synthesize shouldRequestAuthorization=_shouldRequestAuthorization;
@property(nonatomic) _Bool shouldRequestWhenLBSFailed; // @synthesize shouldRequestWhenLBSFailed=_shouldRequestWhenLBSFailed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
