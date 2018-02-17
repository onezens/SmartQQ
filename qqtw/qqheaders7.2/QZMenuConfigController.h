//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseConfigController.h"

@class NSArray, NSMutableDictionary, QZConfigTask;

@interface QZMenuConfigController : QZBaseConfigController
{
    NSArray *_defaultItems;
    QZConfigTask *_plusMenuTask;
    QZConfigTask *_activeMenuTask;
    NSMutableDictionary *_flashTaskDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)activeMenuItems;
- (id)animationImagesWithPrority:(id)arg1;
- (_Bool)checkFlashData:(id)arg1;
- (void)createDefaultItems;
- (void)dealWithActiveDataFromFile:(_Bool)arg1;
- (void)dealWithDataFromFile:(_Bool)arg1;
- (void)dealWithFlashData;
- (void)downloadZipWithAdvID:(long long)arg1 needWriteFile:(_Bool)arg2;
- (id)init;
- (_Bool)isCanShow:(id)arg1;
- (_Bool)isNeedDownLoad:(id)arg1;
- (_Bool)loadDataWithAdvId:(long long)arg1;
- (id)menuBgItem;
- (id)plusMenuItems;
- (_Bool)shouldDownload:(long long)arg1 subKey:(id)arg2;
- (id)showFlashAtSuperView:(id)arg1;
- (void)showedWithKey:(id)arg1;

@end
