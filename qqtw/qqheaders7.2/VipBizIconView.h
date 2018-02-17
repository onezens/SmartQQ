//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IAsynDownloadImageObserver.h"

@class NSString, PrivilegeInfoModel, UIImageView, UserSummaryOtherVipBizCell;

@interface VipBizIconView : UIView <IAsynDownloadImageObserver>
{
    UIImageView *_bizIconView;
    NSString *_imgUrl;
    _Bool _canShow;
    PrivilegeInfoModel *_priviInfo;
    UserSummaryOtherVipBizCell *_originCell;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canShow; // @synthesize canShow=_canShow;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak UserSummaryOtherVipBizCell *originCell; // @synthesize originCell=_originCell;
@property(readonly, nonatomic) PrivilegeInfoModel *priviInfo; // @synthesize priviInfo=_priviInfo;
- (void)updateWithPriviInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
