//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQARPretreatmentDelegate.h"

@class NSString;

@interface QQARPretreatmentManager : NSObject <QQARPretreatmentDelegate>
{
    struct vector<QQARAbstractPretreatment *, std::allocator<QQARAbstractPretreatment *>> paramentinfoLis;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doInitPretreatment:(vector_562b947f)arg1;
- (void)pretreatmentCallBack:(id)arg1;
- (void)setPretreatmentCallBack:(int)arg1 resultDelegate:(id)arg2;
- (void)startPretreatment:(id)arg1 configModel:(id)arg2 parameterinfo:(id)arg3;
- (void)stopPretreatment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

