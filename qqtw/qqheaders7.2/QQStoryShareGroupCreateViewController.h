//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQStorySGVideoSelectorItemViewDelegate.h"
#import "QQStorySGVideoSelectorViewControllerDelegate.h"
#import "QQTextViewInternalDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "TableViewCellStyleButtonDelagate.h"

@class NSArray, NSMutableArray, NSString, QQTextViewInternal, UILabel, UIScrollView;

@interface QQStoryShareGroupCreateViewController : QQViewController <TableViewCellStyleButtonDelagate, QQTextViewInternalDelegate, QQStorySGVideoSelectorItemViewDelegate, QQStorySGVideoSelectorViewControllerDelegate, TBBizNetworkLogicDelegate>
{
    QQTextViewInternal *_titleView;
    UIScrollView *_selectedView;
    UILabel *_selectedNumLabel;
    _Bool *_allowStrangerVisitAndPost;
    NSMutableArray *_selectedVideoInfoList;
    NSMutableArray *_allVideoInfoList;
    NSArray *_memberUinList;
    _Bool _noVideoListAdd;
    long long _enterSource;
    id <QQStoryShareGroupCreateViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)changeNavigationBarRightButtonStatus;
- (void)clickCompeletedCreateButton:(id)arg1;
- (void)clickSwitch:(id)arg1;
- (id)createSwitchViewWithTitle:(id)arg1 Frame:(struct CGRect)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <QQStoryShareGroupCreateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickShareGroupVideo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (_Bool)didSelectShareGroupVideo:(id)arg1;
@property(nonatomic) long long enterSource; // @synthesize enterSource=_enterSource;
- (id)getSimpleInfoWithArray:(id)arg1 withVid:(id)arg2;
- (id)getTitleDefaultPlaceHolderString;
- (id)getVidList:(id)arg1;
- (void)initUI;
- (id)initWithMemberList:(id)arg1 selectedVideoInfoList:(id)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)onClickButton:(id)arg1;
- (void)playVideoWithUin:(id)arg1 itemInfo:(id)arg2;
- (void)popViewController;
- (void)reloadData;
- (void)reloadItems;
- (void)shareGroupVideoSelectorViewControllerDidCancelSelecting;
- (void)shareGroupVideoSelectorViewControllerDidFinishSelecting:(id)arg1;
- (void)showErrorToast:(id)arg1;
- (void)tapSelfView:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)updateUIFromNotification:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

