//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQTroopMemModel;

@interface FTSTroopMemModel : NSObject
{
    QQTroopMemModel *_troopMemModel;
    NSString *_ftsMatchKeyword;
    NSString *_ftsMatchText;
    struct _NSRange _ftsMatchRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ftsMatchKeyword; // @synthesize ftsMatchKeyword=_ftsMatchKeyword;
@property(nonatomic) struct _NSRange ftsMatchRange; // @synthesize ftsMatchRange=_ftsMatchRange;
@property(copy, nonatomic) NSString *ftsMatchText; // @synthesize ftsMatchText=_ftsMatchText;
- (id)initWithTroopMemFilterModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) QQTroopMemModel *troopMemModel; // @synthesize troopMemModel=_troopMemModel;

@end

