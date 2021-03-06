//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEditViewControllerObserver.h"

@class NSMutableArray, NSString, QQTroopRemarkModel, SingleLineEditViewController;

@interface EditMemberCardLogic : NSObject <IEditViewControllerObserver>
{
    _Bool _shouldProcessCallBack;
    QQTroopRemarkModel *_remarkModel;
    NSString *_groupCode;
    NSString *_groupMemberUin;
    SingleLineEditViewController *_editor;
    NSMutableArray *_delegateArr;
}

+ (id)getInstance;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *delegateArr; // @synthesize delegateArr=_delegateArr;
@property(retain, nonatomic) SingleLineEditViewController *editor; // @synthesize editor=_editor;
@property(copy, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(copy, nonatomic) NSString *groupMemberUin; // @synthesize groupMemberUin=_groupMemberUin;
- (id)init;
- (void)modifyGroupCardCallback:(id)arg1;
- (_Bool)onEditViewCancel:(id)arg1 value:(id)arg2;
- (_Bool)onEditViewModifyValue:(id)arg1 value:(id)arg2;
- (void)releaseEditorAndDelegate:(id)arg1;
@property(retain, nonatomic) QQTroopRemarkModel *remarkModel; // @synthesize remarkModel=_remarkModel;
- (void)removeDelegate:(id)arg1;
@property(nonatomic) _Bool shouldProcessCallBack; // @synthesize shouldProcessCallBack=_shouldProcessCallBack;
- (void)setTroopNick:(id)arg1:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

