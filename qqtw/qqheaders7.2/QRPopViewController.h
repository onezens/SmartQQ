//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BookWebBaseViewController.h"

@class NSString, UIView;

@interface QRPopViewController : BookWebBaseViewController
{
    UIView *_bgCover;
    NSString *_linkURL;
}

- (_Bool)closePopView:(id)arg1 callback:(id)arg2;
- (void)dealloc;
- (_Bool)doOpenDetail:(id)arg1 callback:(id)arg2;
- (id)initWithURL:(id)arg1;
@property(retain, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
- (void)show:(_Bool)arg1;
- (void)tapBg;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webViewDidFinishLoad:(id)arg1;

@end

