//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBReqGeneralListModel.h"

@class NSString;

@interface TBReqGetShareGroupMemList : TBReqGeneralListModel
{
    NSString *_groupUnionid;
}

- (void)dealloc;
- (id)description;
- (id)getRequestPBData;
@property(retain, nonatomic) NSString *groupUnionid; // @synthesize groupUnionid=_groupUnionid;

@end

