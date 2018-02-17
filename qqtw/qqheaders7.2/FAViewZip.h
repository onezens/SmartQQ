//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewBase.h"

#import "FAOnlinePreviewDelegate.h"
#import "NSURLSessionDataDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FAModel, FAOnlinePreview, FAPreviewInfo, FAViewDefault, NSArray, NSMutableData, NSString, NSURLSession, NSURLSessionDataTask, UIImageView, UILabel, UITableView, UIView;

@interface FAViewZip : FAViewBase <FAOnlinePreviewDelegate, UITableViewDataSource, UITableViewDelegate, NSURLSessionDataDelegate>
{
    UIView *_contentView;
    UIView *_headerView;
    UIImageView *_iconView;
    UILabel *_sizeLabel;
    UILabel *_detailLabel;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_data;
    FAOnlinePreview *_onlinePreview;
    FAPreviewInfo *_previewInfo;
    FAModel *_fileModel;
    NSArray *_files;
    NSArray *_directories;
    UITableView *_zipContentView;
    FAViewDefault *_defaultView;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clean;
- (void)dealloc;
@property(retain, nonatomic) FAViewDefault *defaultView; // @synthesize defaultView=_defaultView;
- (void)didDownloadThumbnailDone:(id)arg1;
@property(retain, nonatomic) NSArray *directories; // @synthesize directories=_directories;
@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
@property(retain, nonatomic) NSArray *files; // @synthesize files=_files;
- (id)getFAModelArrayFromInfo:(id)arg1;
- (id)getFileModelFromInfo:(id)arg1;
- (id)getWebview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (void)loadView;
- (void)loadZipContentWithPreviewInfo:(id)arg1 fileMode:(id)arg2;
- (void)onFinish:(_Bool)arg1 msg:(id)arg2 stage:(int)arg3;
- (void)onPage:(int)arg1 totalPage:(int)arg2;
@property(retain, nonatomic) FAOnlinePreview *onlinePreview; // @synthesize onlinePreview=_onlinePreview;
- (void)parseTransferInfo:(id)arg1;
@property(retain, nonatomic) FAPreviewInfo *previewInfo; // @synthesize previewInfo=_previewInfo;
- (void)refresh;
- (void)reloadTableView;
- (void)reloadZipContent;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) UITableView *zipContentView; // @synthesize zipContentView=_zipContentView;
- (void)showErrorViewWithMessage:(id)arg1;
- (void)showTransferControl;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateViewWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

