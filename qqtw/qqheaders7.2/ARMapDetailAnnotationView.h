//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAnnotationView.h"

@class UIImageView, UILabel;

@interface ARMapDetailAnnotationView : QAnnotationView
{
    UIImageView *_locationView;
    UIImageView *_infobgView;
    UILabel *_infoTitleLab;
    UILabel *_addressLab;
    UILabel *_distanceLabel;
    double _detailWidth;
    double _detailHeight;
}

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutWithDetaiInfo:(id)arg1 distance:(double)arg2;
- (void)setInfoTitle:(id)arg1;

@end

