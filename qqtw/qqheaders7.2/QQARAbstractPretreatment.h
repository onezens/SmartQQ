//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread, QQARCommonConfigModel, QQARRootParameterInfo, UIImage;

@interface QQARAbstractPretreatment : NSObject
{
    NSThread *mPretreatmentThread;
    UIImage *mImage;
    _Bool isStopPretreatment;
    QQARCommonConfigModel *mConfigModel;
    QQARRootParameterInfo *mParameterinfo;
    int _pretreatmentType;
    id <QQARPretreatmentDelegate> _resultDelegate;
    id <QQARPretreatmentDelegate> _resultDelegateForManager;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) int pretreatmentType; // @synthesize pretreatmentType=_pretreatmentType;
@property(nonatomic) __weak id <QQARPretreatmentDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(nonatomic) __weak id <QQARPretreatmentDelegate> resultDelegateForManager; // @synthesize resultDelegateForManager=_resultDelegateForManager;
- (void)runAbstractPretreatment;
- (void)runPretreatmentThread;
- (void)startPretreatment:(id)arg1 configModel:(id)arg2 parameterinfo:(id)arg3;
- (void)stopPretreatment;

@end

