//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQDoodleColorSelectorViewDelegate.h"
#import "QQDoodlePainViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, NSURL, QQDoodleColorSelectorView, QQDoodlePainView, UIColor, UIImage, UIImageView;

@interface QQDoodlePreview : UIView <QQDoodlePainViewDelegate, QQDoodleColorSelectorViewDelegate, UIAlertViewDelegate>
{
    UIColor *currColor;
    unsigned int gifID;
    unsigned int rainbowColorID;
    NSURL *currentGifFileUrl;
    QQDoodlePainView *_paintView;
    QQDoodleColorSelectorView *_colorSelectView;
    UIImageView *_gifPreImageView;
    id <QQDoodlePreviewDelegate> _preDelegate;
    UIImage *_rainbowColorImage;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearAllDoodle:(id)arg1;
- (void)clearDraw;
@property(retain, nonatomic) QQDoodleColorSelectorView *colorSelectView; // @synthesize colorSelectView=_colorSelectView;
- (void)dealloc;
- (id)getDoobleDoodleData;
- (long long)getDoobleLineCount;
- (id)getDooblePreview;
- (id)getPaintView:(id)arg1;
@property(retain, nonatomic) UIImageView *gifPreImageView; // @synthesize gifPreImageView=_gifPreImageView;
- (id)init;
- (void)initPainData;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)painViewWillBegin:(id)arg1;
- (void)painViewWillEnd:(id)arg1;
- (void)painViewWillMove:(id)arg1;
@property(retain, nonatomic) QQDoodlePainView *paintView; // @synthesize paintView=_paintView;
@property(nonatomic) __weak id <QQDoodlePreviewDelegate> preDelegate; // @synthesize preDelegate=_preDelegate;
@property(retain, nonatomic) UIImage *rainbowColorImage; // @synthesize rainbowColorImage=_rainbowColorImage;
- (void)revoked:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setGifTemplate:(id)arg1 gifPreImagePath:(id)arg2 resID:(unsigned int)arg3;
- (void)setLineColor:(id)arg1 seleColor:(id)arg2;
- (void)setRainbowColor:(id)arg1 rainbowColorID:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

