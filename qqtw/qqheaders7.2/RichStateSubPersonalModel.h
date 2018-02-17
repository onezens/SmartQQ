//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RichStateSubModel.h"

@class NSMutableArray, NSString, PSFIURequestingInfo;

@interface RichStateSubPersonalModel : RichStateSubModel
{
    NSString *_uin;
    NSString *_feedId;
    unsigned long long _interactStatus;
    long long _interactedCount;
    unsigned long long _templateId;
    unsigned long long _templateType;
    int _xo;
    PSFIURequestingInfo *_requestingInfo;
    NSMutableArray *_interactedUsersLoaded_m;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)interact:(_Bool)arg1;
- (id)interactUsersLoaded;
@property(retain, nonatomic) NSMutableArray *interactedUsersLoaded_m; // @synthesize interactedUsersLoaded_m=_interactedUsersLoaded_m;
@property(retain, nonatomic) PSFIURequestingInfo *requestingInfo; // @synthesize requestingInfo=_requestingInfo;
- (int)type;

// Remaining properties
@property(copy, nonatomic) NSString *feedId; // @dynamic feedId;
@property(nonatomic) unsigned long long interactStatus; // @dynamic interactStatus;
@property(nonatomic) long long interactedCount; // @dynamic interactedCount;
@property(nonatomic) unsigned long long templateId; // @dynamic templateId;
@property(nonatomic) unsigned long long templateType; // @dynamic templateType;
@property(copy, nonatomic) NSString *uin; // @dynamic uin;

@end

