//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "GroupMemberListViewDelegate.h"

@class GroupMemberListView, NSArray, NSRecursiveLock, NSString, ODRefreshControl, QQGroupSettingModel, QQTroopMemModel, QUIActionSheet;

@interface GroupMemberListViewForNonActivityController : QQViewController <GroupMemberListViewDelegate>
{
    NSRecursiveLock *_lock;
    _Bool _isDeleteMode;
    NSString *_groupCode;
    QQGroupSettingModel *_model;
    NSArray *_troopMemberArray;
    NSArray *_currentSectionArray;
    GroupMemberListView *_memberListView;
    QQTroopMemModel *_deleteMemModel;
    ODRefreshControl *_refreshGroopListControl;
    QUIActionSheet *_actionSheet;
}

@property(retain, nonatomic) QUIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) NSArray *currentSectionArray; // @synthesize currentSectionArray=_currentSectionArray;
@property(retain, nonatomic) QQTroopMemModel *deleteMemModel; // @synthesize deleteMemModel=_deleteMemModel;
@property(copy, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) _Bool isDeleteMode; // @synthesize isDeleteMode=_isDeleteMode;
@property(retain, nonatomic) GroupMemberListView *memberListView; // @synthesize memberListView=_memberListView;
@property(retain) QQGroupSettingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) ODRefreshControl *refreshGroopListControl; // @synthesize refreshGroopListControl=_refreshGroopListControl;
@property(retain, nonatomic) NSArray *troopMemberArray; // @synthesize troopMemberArray=_troopMemberArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

