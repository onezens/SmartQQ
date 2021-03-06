//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "IAsynDownloadImageObserver.h"

@class NSString, UIImageView, UILabel;

@interface QQRichControl : UIButton <IAsynDownloadImageObserver>
{
    NSString *_controlKey;
    unsigned long long _flag;
    id _userData;
    _Bool _shouldShowRedPoint;
    int _xo;
    NSString *_imageName;
    UIImageView *_redPoint;
    UILabel *_panelLabel;
    NSString *_panelStr;
}

+ (id)buttonWithFlag:(unsigned long long)arg1;
+ (id)buttonWithFlag:(unsigned long long)arg1 title:(id)arg2 icon:(id)arg3;
+ (id)buttonWithFlag:(unsigned long long)arg1 title:(id)arg2 icon:(id)arg3 userData:(id)arg4;
- (void).cxx_destruct;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadImageWithImageName:(id)arg1 defaultImage:(id)arg2;
@property(copy, nonatomic) NSString *panelStr; // @synthesize panelStr=_panelStr;
- (id)redPoint;
@property(nonatomic) _Bool shouldShowRedPoint; // @dynamic shouldShowRedPoint;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *controlKey; // @dynamic controlKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id userData; // @dynamic userData;

@end

