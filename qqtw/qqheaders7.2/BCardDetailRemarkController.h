//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCardDetailViewController.h"

@class NSString;

@interface BCardDetailRemarkController : BCardDetailViewController
{
    _Bool _userDidEditremark;
    NSString *_cardName;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dismissVC;
- (id)initWithModel:(id)arg1 currentUin:(id)arg2 isEdited:(_Bool)arg3 qqCardSrc:(id)arg4 bindPhone:(id)arg5 searchPhone:(id)arg6 isMine:(_Bool)arg7 suggestRemark:(id)arg8 block:(CDUnknownBlockType)arg9;
- (void)modifyCardInfoFromCardList:(id)arg1;
- (void)onDoneClick;
- (void)reportDidModify;
- (void)reportDoneClick;
@property(nonatomic) _Bool userDidEditremark; // @synthesize userDidEditremark=_userDidEditremark;
- (void)setVCTitle;
- (void)showAlertRemark;
- (void)textfieldInCellCallback:(id)arg1 indexPath:(id)arg2 state:(long long)arg3;
- (void)uploadDoneNotification:(id)arg1;

@end

