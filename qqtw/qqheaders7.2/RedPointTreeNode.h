//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableArray, NSString;

@interface RedPointTreeNode : QQModel
{
    NSString *_pRedPointID;
    NSString *_redPointID;
    NSMutableArray *_cRedPointIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cRedPointIDs; // @synthesize cRedPointIDs=_cRedPointIDs;
- (id)init;
@property(copy, nonatomic) NSString *pRedPointID; // @synthesize pRedPointID=_pRedPointID;
@property(copy, nonatomic) NSString *redPointID; // @synthesize redPointID=_redPointID;

@end

