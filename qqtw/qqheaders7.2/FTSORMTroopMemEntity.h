//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSORMEntityProtocol.h"

@class NSString;

@interface FTSORMTroopMemEntity : NSObject <FTSORMEntityProtocol>
{
    NSString *_ormGroupCode;
    NSString *_ormMemUin;
    NSString *_ormStrNick;
    NSString *_ormStrRemark;
}

+ (id)ftsConvertEntityFromModel:(id)arg1;
+ (id)ftsEntityPropertyOrder;
+ (id)ftsHandleFMResultSets:(id)arg1;
+ (id)ftsIdxTableName;
+ (id)ftsSetExtensionValue:(id)arg1;
+ (id)ftsTableEntityMap;
+ (_Bool)ftsTrycatchException;
- (void).cxx_destruct;
- (void)dealloc;
@property(copy, nonatomic) NSString *ormGroupCode; // @synthesize ormGroupCode=_ormGroupCode;
@property(copy, nonatomic) NSString *ormMemUin; // @synthesize ormMemUin=_ormMemUin;
@property(copy, nonatomic) NSString *ormStrNick; // @synthesize ormStrNick=_ormStrNick;
@property(copy, nonatomic) NSString *ormStrRemark; // @synthesize ormStrRemark=_ormStrRemark;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

