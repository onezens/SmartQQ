//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

#import "QQAIOFAModel.h"

@class FAModel, NSString;

@interface QQFAModel : QQAIOMsgModel <QQAIOFAModel>
{
    double _cellHeight;
    FAModel *_fileModel;
}

+ (id)modelWithMessageModel:(id)arg1;
- (id)cellClassName;
- (double)cellHeight;
- (id)cellViewClassName;
- (void)dealloc;
@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
- (id)initWithMessageModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

