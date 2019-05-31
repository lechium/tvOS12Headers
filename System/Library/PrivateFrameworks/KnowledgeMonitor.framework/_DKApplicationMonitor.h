/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class BKSApplicationStateMonitor, NSString;

@interface _DKApplicationMonitor : _DKMonitor {

	BKSApplicationStateMonitor* _bksMonitor;
	NSString* _lastIdentifierSet;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * bksMonitor;              //@synthesize bksMonitor=_bksMonitor - In the implementation block
@property (nonatomic,retain) NSString * lastIdentifierSet;                         //@synthesize lastIdentifierSet=_lastIdentifierSet - In the implementation block
+(id)eventStream;
+(id)entitlements;
+(id)_defaultEvent;
+(void)setFocalApplication:(id)arg1 launchReason:(id)arg2 ;
+(id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2 ;
+(/*^block*/id)_eventFilterBlock;
-(void)synchronouslyReflectCurrentValue;
-(BKSApplicationStateMonitor *)bksMonitor;
-(void)setBksMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(NSString *)lastIdentifierSet;
-(void)setLastIdentifierSet:(NSString *)arg1 ;
-(void)platformSpecificStart;
-(void)obtainCurrentValue;
-(void)platformSpecificStop;
-(void)stop;
-(void)start;
@end
