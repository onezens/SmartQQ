//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFileViewController.h"

@class FAModel, FAPreviewInfo, FAViewZip;

@interface FAZipFileViewController : BaseFileViewController
{
    FAPreviewInfo *_previewInfo;
    FAViewZip *_zipContentView;
    FAModel *_fileModel;
}

- (void).cxx_destruct;
- (void)closeAction;
- (id)initWithWithPreviewInfo:(id)arg1 fileModel:(id)arg2;
- (void)viewDidLoad;

@end

