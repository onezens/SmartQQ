//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZOCSLoadTimeStatistic : NSObject
{
    double _startRunTime;
    double _waitExpireCheck;
    double _endExpireCheck;
    double _pluginLoadIngWait;
    double _unzipFileBegin;
    double _unzipFileFinish;
    double _beginDownLoad;
    double _finishDownLoad;
    double _parsePluginBegin;
    double _parsePluginFinish;
    double _pluginLoadFinish;
}

@property(nonatomic) double beginDownLoad; // @synthesize beginDownLoad=_beginDownLoad;
- (id)description;
@property(nonatomic) double endExpireCheck; // @synthesize endExpireCheck=_endExpireCheck;
@property(nonatomic) double finishDownLoad; // @synthesize finishDownLoad=_finishDownLoad;
@property(nonatomic) double parsePluginBegin; // @synthesize parsePluginBegin=_parsePluginBegin;
@property(nonatomic) double parsePluginFinish; // @synthesize parsePluginFinish=_parsePluginFinish;
@property(nonatomic) double pluginLoadFinish; // @synthesize pluginLoadFinish=_pluginLoadFinish;
@property(nonatomic) double pluginLoadIngWait; // @synthesize pluginLoadIngWait=_pluginLoadIngWait;
@property(nonatomic) double startRunTime; // @synthesize startRunTime=_startRunTime;
@property(nonatomic) double unzipFileBegin; // @synthesize unzipFileBegin=_unzipFileBegin;
@property(nonatomic) double unzipFileFinish; // @synthesize unzipFileFinish=_unzipFileFinish;
@property(nonatomic) double waitExpireCheck; // @synthesize waitExpireCheck=_waitExpireCheck;

@end

