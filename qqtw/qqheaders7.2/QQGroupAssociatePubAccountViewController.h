//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseClusterMessageViewController.h"

@class NSArray;

@interface QQGroupAssociatePubAccountViewController : QQBaseClusterMessageViewController
{
    NSArray *_showList;
}

- (void)dealloc;
- (int)getTroopAssistantUnreadSessonCount;
- (id)initWithModel:(id)arg1 topString:(id)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)refreshMessageViewData;
@property(retain, nonatomic) NSArray *showList; // @synthesize showList=_showList;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateAssociateGroupMessageModel;
- (void)viewDidLoad;

@end

