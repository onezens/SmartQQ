//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAVCustomSpearEngineCtrl.h"

@class QAVContextImpl;

@interface QAVCustomSpearEngineCtrlImpl : QAVCustomSpearEngineCtrl
{
    QAVContextImpl *_context;
}

- (long long)addParamByRole:(id)arg1 jsonParam:(id)arg2;
- (void)clear;
@property(nonatomic) QAVContextImpl *context; // @synthesize context=_context;
- (void)dealloc;
- (id)getDefaultRole;
- (id)getParamByRole:(id)arg1;
- (int)getParamCount;
- (id)getRoleByIndex:(int)arg1;
- (_Bool)hasRole:(id)arg1;
- (long long)setDefaultRole:(id)arg1;

@end

