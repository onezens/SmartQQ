//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UILabel;

@interface QQScreenShotQRImageView : UIView
{
    UILabel *_titleLabel;
    UILabel *_briefLabel;
    UIImage *_qrcodeImage;
    UIImage *_articleImage;
    UIImage *_logoImage;
}

@property(retain, nonatomic) UIImage *articleImage; // @synthesize articleImage=_articleImage;
@property(retain, nonatomic) UILabel *briefLabel; // @synthesize briefLabel=_briefLabel;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
- (void)ocs_CGContextSetStrokeColor:(struct CGContext *)arg1;
- (void)ocs_printlog:(id)arg1;
- (id)ocs_sendSynchronousRequest:(id)arg1;
@property(retain, nonatomic) UIImage *qrcodeImage; // @synthesize qrcodeImage=_qrcodeImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

