//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

@class NSString, UIButton;

@interface QQGroupGuideWebViewController : QQWebViewController
{
    UIButton *_doneButton;
    NSString *_groupUin;
}

- (void).cxx_destruct;
- (void)clickDoneButton:(id)arg1;
- (void)deleteTheFlagOfTheNewComerGuideForGroupCode:(id)arg1;
@property(retain, nonatomic) NSString *groupUin; // @synthesize groupUin=_groupUin;
- (_Bool)isSupportFullScreenLayout;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (void)resetlayout:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end

