//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "FavAudioPlayManagerDelegate.h"

@class BaseInfoModel, FavAudioButton, FavDetailFooterView, FavDetailHeaderView, NSString, UILabel;

@interface FavoritesAudioDetailView : UIScrollView <FavAudioPlayManagerDelegate>
{
    FavDetailHeaderView *_detailHeader;
    FavAudioButton *_audioBtn;
    UILabel *_note;
    FavDetailFooterView *_detailFooter;
    BaseInfoModel *_model;
}

- (void)dealloc;
- (id)getParentView;
- (id)init;
@property(retain, nonatomic) BaseInfoModel *model; // @synthesize model=_model;
- (void)onDownloadAudioBegin;
- (void)onDownloadAudioEnd:(_Bool)arg1 localid:(unsigned long long)arg2;
- (void)onPlayBegin:(id)arg1;
- (void)onPlayEnd:(id)arg1;
- (void)viewAppear;
- (void)viewDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

